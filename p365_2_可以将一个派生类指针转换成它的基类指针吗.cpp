/*
可以将一个派生类指针转换成它的基类指针吗？
	在开发实践中，常常要进行指针类型的转换，其中最常见的情况就是将一个派生类指针转换为一个
基类指针，也就是用一个基类指针来指向一个派生类的对象。派生类对象是基类对象的一种。因此，
从派生类指针到基类指针的转换是非常安全的，并且始终可以转换成功。例如，如果有一个基类 Human 类型的指针，
而实际上指向了一个派生类 Student 对象，这种从 Human* 到 Student* 的转换是非常安全的和常规的。
例如：
*/
// 基类
class Human
{
public:
	// 成员函数
	string getName()
	{
		return m_strName;
	}
private:
	string m_strName;
};
// 派生类
class Student : public Human
{
	// ...
};
// 一个接受基类 Human 类型指针的函数
string getName(Human* pHuman)
{
	// 调用基类的成员函数
	return pHuman->getName();
}
string getStudentName(Student* pStu)
{
	// 不用进行显式的类型转换
	// 派生类 Student 的指针将被隐式地、安全地转换成基类指针
	// 直接使用派生类 Student 类型的指针作为参数，
	// 调用需要基类 Human 类型指针为参数的函数
	return getName(pStu);
}














