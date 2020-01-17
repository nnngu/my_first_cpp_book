shared_ptr<Employee> spEmployee1(new Employee("Jiawei"));
// 通过get()函数获得shared_ptr所保存的指针
Employee* pEmp = spEmployee1.get();
// 通过隐式类型转换，将shared_ptr转换为bool类型，判断shared_ptr的有效性
// 等效于if(true == spEmployee1.get())
if (true == (bool)spEmployee1)
{
	PrintObj(*spEmployee1); // 安全地进行"*"操作
}