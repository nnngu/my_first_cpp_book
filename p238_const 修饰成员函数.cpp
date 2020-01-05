class ConstDemo
{
public:
	// 获取类中的数据
	// 在函数后添加 const 修饰，表示这是一个查看函数
	char GetValueAt(int nIndex) const
	{
		// 对类中的数据进行意外的修改
		// 会导致一个编译错误
		m_data[3] = 'A';
		return m_data[nIndex];
	}

	// 设置类中的数据
	// 在函数后未添加 const 修饰，表示这是一个变更函数，
	// 它将有可能修改类中的数据
	void SetValueAt(int nIndex, char cNewValue)
	{
		m_data[nIndex] = cNewValue;
	}
protected:
	char m_data[10];
};



// 当在一个 const 修饰的常量对象调用变更成员函数、尝试对常量对象进行修改时，
// 编译器也会发现这样的非法修改错误。
const ConstDemo constObject;
// 调用常量对象的查看成员函数进行只读访问是合法的
char cValue = constObject.GetValueAt(0);
// 调用常量对象的变更成员函数，尝试修改常量对象的数据，
// 这将导致一个编译错误
constObject.SetValueAt(0, 'J');

















