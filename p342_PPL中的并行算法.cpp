// 1、parallel_for 算法

// 标准 for 循环
for (int i = 0; i < 100; ++i)
{
	// 循环体语句
}

// 使用 paraller_for()算法，可以非常简单地将这个标准 for 循环并行化
// 并行化的 for 循环
paraller_for(0, 100, 1,
	[&](int i)
	{
		// 循环体语句
	});



// 2、parallel_for_each 算法
// 并行处理容器中的数据
vector<int> vec;
paraller_for_each(vec.begin(), vec.end(),
	[&](int& i)
	{
		// 对容器数据进行处理
	});



// 3、parallel_invoke 算法
// 并行执行任务
parallel_invoke(
		[=]{for (int i = 0; i < 100; ++i) // 任务 1：输出 0 到 100 的整数
			{
				cout<<i<<endl;
			}},
		[=]{for (int i = 0; i < 10; ++i) // 任务 2：输出 10 个空格
			{
				cout<<" "<<i<<endl;
			}}
	);










