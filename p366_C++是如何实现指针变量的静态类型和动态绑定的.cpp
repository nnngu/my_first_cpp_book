/*
C++是如何实现指针变量的静态类型和动态绑定的？
	我们知道，C++ 是一种强类型的编程语言，它的每一个变量都有其确定的类型。但是，
当这个变量是指针的时候，情况就有些特殊。我们有一个某种类型的指针，而它实际上指向的是其派生类的
某个对象。例如，一个 Human* 指针实际上指向一个 Student 对象。

	Student st;
	Human* pHuman = &st; // 将基类指针指向派生类对象

	这时，pHuman 指针就有了两种类型；指针的静态类型(在此是 Human)和它所指向的对象的
动态类型(在此是 Student)。

	静态类型意味着成员函数调用的合法性将被尽可能早地检查：编译器在编译时，编译器可以使用
指针的静态类型来决定成员函数的调用是否合法。如果指针类型能够处理成员函数，那么指针实际上
指向的对象当然能很好地处理它。例如，如果 Human 类有某个成员函数，而指针实际上指向的 Student
对象是 Human 的一种，是 Human 类的派生类，自然会从基类 Human 中继承获得相应的成员函数。

	动态绑定意味着在编译时，通过指针实现成员函数调用的代码地址并没有确定，而在运行时，这
一地址才根据指针所指向的实际对象的真正类型动态地决定。因为绑定到实际被调用的代码的这个过程是在
运行时动态完成的，所以被称为"动态绑定"。动态绑定是虚函数所带来的 C++ 特性之一。
下面的代码演示了 C++ 语言中的静态类型和动态绑定。
*/
// 基类
class Human
{
public:
	Human(string strName) : m_strName(strName)
	{}
	// 成员函数
	string getName()
	{
		return m_strName;
	}
	// 虚成员函数
	virtual string getJobTitle()
	{
		return "";
	}
private:
	string m_strName;
};

// 派生类
class Student : public Human
{
public:
	Student(string strName) : Human(strName)
	{}
	// 重新定义虚成员函数
	virtual string getJobTitle()
	{
		return "Student";
	}
};

int main(int argc, char* argv[])
{
	Student st("Jiawei");
	Human* pHuman = &st; // 基类指针指向派生类对象
	// 调用 pHuman 指针所指向对象的 getName()普通成员函数
	// 编译时，首先根据 pHuman 的静态类型 Human 检查成员函数调用的合法性
	cout<<"姓名："<<pHuman->getName()<<endl;

	// 如果调用的是虚成员函数，
	// 将在运行时根据 pHuman 所指向的真正对象决定此成员函数的地址。
	// 虽然 pHuman 的静态类型是 Human，但它所指向的实际上是一个 Student 对象，
	// 所以这里的成员函数将不再是调用 Human 类的 Human::getJobTitle(),
	// 而是被动态绑定为 Student 类的 Student::getJobTitle(),
	// 输出 Student 对象的真实情况
	cout<<"职位："<<pHuman->getJobTitle()<<endl;

	return 0;
}



























