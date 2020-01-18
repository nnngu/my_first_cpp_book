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











