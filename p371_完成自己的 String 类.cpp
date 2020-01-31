/*
题25 完成自己的 String 类
*/
// 已知 String 类的定义如下：
class String
{
public:
	String(const char *str = NULL); // 通用构造函数
	String(const String &another); // 拷贝构造函数
	~String(); // 析构函数
	String & operator =(const String &rhs); // 赋值函数
private:
	char *m_data; // 用于保存字符串
};

// 请尝试写出类的成员函数的实现

// 根据字符串指针构造 String 对象
String::String(const char *str)
{
	// strlen()函数在参数为 NULL 时会抛出异常，所以要进行参数的判断
	if (str == NULL)
	{
		// 如果传入的参数为 NULL，则构造一个空字符串
		m_data = new char[1];
		m_data[0] = '\0';
	}
	else
	{
		// 根据传入的字符串长度申请内存
		m_data = new char[strlen(str) + 1];
		// 复制字符串
		strcpy(m_data, str);
	}
}

//根据传入的 String 对象构造新的 String 对象
String::String(const String &other)
{
	// 申请内存
	m_data = new char[strlen(other.m_data) + 1];
	// 复制字符串
	strcpy(m_data, other.m_data);
}

// 重载操作符"="，进行字符串的赋值操作
String& String::operator =(const String &rhs)
{
	// 判断是否是自己给自己赋值，如果是，则直接返回
	// 代码中是否有这个判断，是程序员是否有足够经验的标志
	if (this == &rhs)
	{
		return *this;
	}
	// 删除原有数据
	delete []m_data;
	// 为新的数据申请内存
	m_data = new char[strlen(rhs.m_data) + 1];
	// 复制字符串
	strcpy(m_data, rhs.m_data);

	return *this;
}

// 析构函数，清理资源
String::~String()
{
	// 释放字符串
	delete []m_data;
}

















