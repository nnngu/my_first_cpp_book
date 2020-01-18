// 创建函数完成各项任务

// 烧水
void boil(void)
{
	cout<<"开始烧水"<<endl;
	Sleep(5000); // 任务需要的时间
	cout<<"水烧开了"<<endl;
}

// 洗水壶
void washkettle()
{
	cout<<"开始洗水壶"<<endl;
	Sleep(1000);
	cout<<"水壶洗完了"<<endl;
}

// 洗茶壶
void washteapot()
{
	cout<<"开始洗茶壶"<<endl;
	Sleep(1000);
	cout<<"茶壶洗完了"<<endl;
}

// 泡茶
void maketea()
{
	cout<<"开始泡茶"<<endl;
	Sleep(1000);
	cout<<"茶泡好了"<<endl;
}

// 主函数
int main(int argc, char* argv[])
{
	// 将函数打包成任务
	auto taskBoil = make_task(&boil);
	auto taskWashKettle = make_task(&washkettle);
	auto taskWashTeapot = make_task(&washteapot);
	auto taskMakeTea = make_task(&maketea);

	// 利用任务组 task_group 组织任务之间的业务逻辑
	// 使任务在合适的时候执行
	task_group tasks;
	// 首先，执行洗水壶的任务并等待它的完成，
	// 因为它是其他任务的先决条件，只有这项任务
	// 完成后才能执行其他任务
	tasks.run_and_wait(taskWashKettle);

	// 洗水壶的任务完成后，开始并行地执行烧水和洗茶壶的任务
	// 因为这两项任务相对独立，可以在烧水的同时洗茶壶
	// 所以可以用 task_group 类的 run() 函数并发地执行
	tasks.run(taskBoil);
	tasks.run(taskWashTeapot);

	// 等待烧水和洗茶壶的任务完成
	// 使用 task_group 的 wait() 函数，表示要等到任务组中的
	// 所有任务都完成后才能继续往下执行
	tasks.wait();

	// 烧水和洗茶壶任务完成后，开始执行最后的泡茶任务，
	// 等待泡茶任务完成后，这个 run_and_wait() 函数才返回
	tasks.run_and_wait(taskMakeTea);

	return 0;
}

/*
程序输出如下：

开始洗水壶
水壶洗完了
开始烧水
开始洗茶壶
茶壶洗完了
水烧开了
开始泡茶
茶泡好了
*/























