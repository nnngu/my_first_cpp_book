// 使用 Lambda 表达式声明任务
auto taskBoil = make_task([&]
{
	cout<<"开始烧水"<<endl;
	Sleep(1000);
	cout<<"水烧开了"<<endl;
});

// 创建一个任务组
task_group tasks;
// 通过任务组执行任务
tasks.run(taskBoil);












