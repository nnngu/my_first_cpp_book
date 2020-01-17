// 使用int实例化shared_ptr，spInt可以指向一个int对象
shared_ptr<int> spInt;
// 使用Employee实例化shared_ptr，spEmployee可以指向一个Employee对象
shared_ptr<Employee> spEmployee;



// 1. template<class Other> explicit shared_ptr(Other* ptr);
// 构造完成后将获得一个跟ptr指向相同对象的shared_ptr。例如：

Employee* pEmployee = new Employee;
// 使用裸指针pEmployee构造shared_ptr
shared_ptr<Employee> spEmployee1(pEmployee);
// 直接使用new操作符返回的指针构造shared_ptr
shared_ptr<Employee> spEmployee2(new Employee);



// shared_ptr(const shared_ptr& sp);
// 使用spEmployee构造spEmployee3，两者将指向同一个对象，引用计数增加1
shared_ptr<Employee> spEmployee3(spEmployee1);




// 定义一个shared_ptr
shared_ptr<Employee> spEmployee1(pEmployee);
// 使用"->"操作符，可以将shared_ptr当成普通指针一样使用，
// 访问它所指向的对象
int nAge = spEmployee1->GetAge();
// PrintObj() 函数接受一个Employee对象作为参数，
// 使用"*"操作符，可以获得shared_ptr所指向的Employee对象
// PrintObj()函数需要的参数是一个Employee对象
PrintObj(*spEmployee1);




// 一个需要指针作为参数的函数
void PrintPtr(Employee* pEmp)
{
	// 函数体
}
// 通过"&*"运算符获得shared_ptr所管理的指针，
// 并作为参数传递给函数
PrintPtr(&*spEmployee);










