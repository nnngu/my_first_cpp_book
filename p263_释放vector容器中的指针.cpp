// 创建一个存放Employee*指针的vector容器
vector<Employee*> vecEmployee;
// 对容器进行操作...

// 在容器使用完毕后，清空容器中保存的指针，
// 释放这些指针所指向的对象
for(auto it = vecEmployee.begin(); 
	it != vecEmployee.end(); ++it)
{
	//  判断指针是否为NULL，
	// 如果不为NULL，则释放指针指向的对象
	if (NULL != (*it))
	{
		delete (*it); // 释放指针指向的对象
	}
	(*it) = NULL; // 将指针设置为NULL，防止误用
}

// 清空整个容器
vecEmployee.clear();
