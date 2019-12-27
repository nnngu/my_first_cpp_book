// 键盘类
struct Keyboard
{
	// 键盘的型号
	string m_strModel;
};

// 定义了拷贝构造函数的电脑类
class Computer
{
public:
	// 默认构造函数
	Computer()
		: m_pKeyboard(nullptr)
	{}
	// 拷贝构造函数，参数是const修饰的Computer类的引用
	Computer(const Computer& com)
		: m_strModel(com.m_strModel) // 对象类型的成员属性直接使用初始化列表完成拷贝
	{
		// 获得已有对象com的指针属性m_pKeyboard并赋值给pOldKeyboard
		Keyboard* pOldKeyboard = com.GetKeyborad();
		// 以pOldKeyboard指向的Keyboard对象为蓝本，
		// 创建一个新的Keyboard类对象赋值给m_Keyboard属性
		if (nullptr != pOldKeyboard)
		{
			m_pKeyboard = new Keyboard(*(pOldKeyboard));
		}
		else
		{
			m_pKeyboard = nullptr;
		}
	}

	// 成员函数
	void SetKeyboard(Keyboard* pKeyboard)
	{
		m_pKeyboard = pKeyboard;
	}
	Keyboard* GetKeyborad() const
	{
		return m_pKeyboard;
	}

private:
	//指针类型的成员属性
	Keyboard* m_pKeyboard;
	// 对象类型的成员属性
	string m_strModel;
}