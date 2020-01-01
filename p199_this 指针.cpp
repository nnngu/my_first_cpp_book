class Base
{
public:
	// 成员函数访问成员变量
	void SetValue(int nVal)
	{
		m_nVal = nVal;
	}
	// 类的成员变量
private:
	int m_nVal;
};



// this 代表指向当前对象的指针
class Base{
public:
	// 成员函数访问成员变量
	void SetValue(int nVal)
	{
		// 显示使用 this 指针访问成员变量
		this->m_nVal = nVal;
	}
	// ...
};



// 类的每个非静态成员函数中都隐式地声明了 this 指针
// 该指针指向调用该成员函数的对象
class Base
{
public:
	// 成员函数访问成员变量
	int ChangeValue(int nVal)
	{
		// 通过 this 指针访问成员函数
		this->SetValue(nVal);
		// 通过 this 指针访问成员变量
		return this->m_nVal;
	}
	// ...
};








