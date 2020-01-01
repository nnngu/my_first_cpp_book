class Base
{
	// 行为
public:
	void foo1(void){};
	void foo2(void){};
	// 属性
private:
	double m_fMember1;
	int m_nMember2;
}

// 定义类成员函数指针类型
// 用于得到类的成员函数指针
typedef void (Base::*CLASS_FUNC)(void);

int main(int argc, char* argv[])
{
	// 创建一个 Base 类的对象
	Base base;
	// 输出类对象成员变量的地址
	cout<<"类对象的地址是："<<&base<<endl;
	cout<<"类对象成员变量 m_fMember1 的地址是："<<
		&(base.m_fMember1)<<endl;
	cout<<"类对象成员变量 m_fMember1 占用的内存字节数是："<<
		sizeof(double)<<endl;
	cout<<"类对象成员变量 m_nMember2 的地址是："<<
		&(base.m_nMember2)<<endl;

	// 输出类成员函数的地址
	// 第一个函数
	CLASS_FUNC pFunc = &Base::foo1;
	unsigned* tmp = (unsigned*)&pFunc;
	cout<<"Base 类第一个成员函数的地址是："<<hex<<*tmp<<endl;
	// 第二个函数
	pFunc = &Base::foo2;
	tmp = (unsigned*)&pFunc;
	cout<<"Base 类第二个成员函数的地址是："<<hex<<*tmp<<endl;

	return 0;
}













