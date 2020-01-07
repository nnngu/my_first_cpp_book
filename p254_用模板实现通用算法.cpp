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













