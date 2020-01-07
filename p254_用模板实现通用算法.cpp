// 动作容器模板类
// 使用 T 作为模板参数
template <class T>
class actioncontainer
{
public:
	// 构造函数，初始化动作的位置
	actioncontainer()
	{
		m_nRedoPos = 0;
		m_nUndoPos = 0;
	}

	// 容器的接口函数
	void add(T value); // 向容器中添加新的动作
	T redo(); // 恢复上一步动作
	T undo(); // 撤销上一步动作

// 容器的属性
private:
	// 记录动作的位置
	int m_nRedoPos;
	int m_nUndoPos;
	// 使用常量表示可以撤销的动作数，
	// 也就是容器的容量
	const static int ACTION_SIZE = 5;
	// 使用数组记录恢复和撤销的动作
	// 这里数组元素的类型也是模板参数，
	// 它在类模板实例化的时候才确定
	T m_RedoAction[ACTION_SIZE];
	T m_UndoAction[ACTION_SIZE];
};

// 模板类的成员函数实现
// 向容器中添加动作。这里的T，可以是一个基本数据类型，
// 也可以是一个自定义类型
template <class T>
void actioncontainer<T>::add(T value)
{
	// 判断容器中的动作数目是否超过容器的容量
	if (m_nUndoPos >= ACTION_SIZE)
	{
		// 如果容器已满，则调整添加的位置
		// 将新动作添加到容器末尾
		m_nUndoPos = ACTION_SIZE - 1;
		// 将容器中的已有动作前移一个位置
		for (int i = 0; i < ACTION_SIZE; ++i)
		{
			m_UndoAction[i] = m_UndoAction[i+1];
		}
	}
	// 将新动作添加到容器中
	m_UndoAction[m_nUndoPos++] = value;
}

// 撤销上一步动作
template <class T>
T actioncontainer<T>::undo()
{
	// 将撤销的动作复制到恢复数组中
	m_RedoAction[m_nRedoPos++] = m_UndoAction[--m_nUndoPos];

	// 返回撤销的动作
	return m_UndoAction[m_nUndoPos];
}

// 恢复上一步动作
template <class T>
T actioncontainer<T>::redo()
{
	// 将恢复的动作复制到撤销数组中
	m_UndoAction[m_nUndoPos++] = m_RedoAction[--m_nRedoPos];
	// 返回恢复的动作
	return m_RedoAction[m_nRedoPos]; 
}



// 使用上面定义的类模板来处理数据
int main(int argc, char* argv[])
{
	// 定义一个int类型的动作容器
	// 这样这个动作容器就可以容纳int类型的数据
	actioncontainer<int> intaction;

	// 向容器中添加新的动作，也就是整数
	intaction.add(1);
	intaction.add(2);
	intaction.add(3);
	intaction.add(4);

	// 撤销上一步动作
	// 这时，nUndo的值为4
	int nUndo = intaction.undo();
	// 再次撤销上一步动作，nUndo的值为3
	nUndo = intaction.undo();
	// 恢复上一步动作，nRedo的值为3
	int nRedo = intaction.redo();
	// 再次恢复上一步动作，nRedo的值为4
	nRedo = intaction.redo();

	return 0;
}
























