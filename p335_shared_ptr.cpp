int main(int argc, char* argv[])
{
	// 为了书写简便，使用 typedef 重新定义可以保存 shared_ptr<Employee>智能指针的
	// vector 容器为新的容器类型 container
	typedef vector<shared_ptr<Employee>> container;

	// 创建 shared_ptr 对象
	shared_ptr<Employee> spEmp(new Employee("Jiawei"));
	// 创建容器，容器类型为 container,
	// 实质上是 vector<shared_ptr<Employee>>
	container vecEmp;
	// 将 shared_ptr 保存到容器中
	vecEmp.push_back(spEmp);
	vecEmp.push_back(shared_ptr<Employee>( new Employee("ChenLiangqiao")));
	// 遍历容器中的元素，访问其中的智能指针
	for(container::iterator it = vecEmp.begin(); it != vecEmp.end(); ++it)
	{
		// 通过迭代器 it 获得容器中保存的智能指针
		PrintEng pEng(*it);
		pEng.doPrint();
	}
	return 0;
}


















