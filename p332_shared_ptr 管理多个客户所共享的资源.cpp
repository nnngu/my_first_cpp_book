// 引入需要使用的头文件
#include <memory>
#include <iostream>
#include <string>
using namespace std;

// 一个简单的员工类，也是要共享的对象类
class Employee
{
public:
	Employee(string strName)
	{
		m_strName = strName;
	}
	string GetName() { return m_strName; };
private:
	string m_strName;
};

// 共享员工对象的类
// 负责使用英文格式打印员工信息
class PrintEng
{
public:
	// 将 shared_ptr 传递给构造函数，在多个客户之间共享对象
	PrintEng(shared_ptr<Employee> sp) : m_spEmp(sp) {};
	void doPrint()
	{
		// 使用 shared_ptr 访问共享的 Employee 对象
		// 以英文格式输出
		if (true == (bool)m_spEmp)
		{
			cout<<"Name of Employee:"<<m_spEmp->GetName()<<endl;
		}
	}
private:
	// 用于保存共享对象的 shared_ptr
	shared_ptr<Employee> m_spEmp;
};

// 共享员工对象的类
// 负责使用中文格式打印员工信息
class PrintChs
{
public:
	// 将 shared_ptr 传递给构造函数，在多个客户之间共享对象
	PrintChs(shared_ptr<Employee> sp) : m_spEmp(sp) {};
	void doPrint()
	{
		// 使用 shared_ptr 访问共享的 Employee 对象
		// 以中文格式输出
		if (true == (bool)m_spEmp)
		{
			cout<<"员工的姓名是："<<m_spEmp->GetName()<<endl;
		}
	}
private:
	// 用于保存共享对象的 shared_ptr
	shared_ptr<Employee> m_spEmp;
};

int main(int argc, char* argv[])
{
	// 创建一个新的 shared_ptr，用它来管理 Employee 对象
	shared_ptr<Employee> spEmp(new Employee("Jiawei"));
	// 将 spEmp 所管理的 Employee 对象共享给 pEng 对象
	PrintEng pEng(spEmp);
	pEng.doPrint();
	// 将 spEmp 所管理的 Employee 对象共享给 pChs 对象
	PrintChs pChs(spEmp);
	pChs.doPrint();

	// 当 spEmp、pEng 和 pChs 都退出作用域，结束其生命周期时，
	// 最后一个 shared_ptr 将负责释放其管理的 Employee 对象
	return 0;
}





















