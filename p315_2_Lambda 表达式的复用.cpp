// 定义 vector 容器
vector<int> intvector;
// 向 vector 中添加数据

// 定义 list 容器
list<int> intlist;
// 向 list 中添加数据

// 定义一个可以输出整数的 Lambda 表达式
auto show = [](int x)
{
	cout<<x<<endl;
};
// 在 vector 容器上应用这个 Lambda 表达式
for_each(intvector.begin(), intvector.end(),
	show);
// 在 list 容器上重复应用这个 Lambda 表达式
for_each(intlist.begin(), intlist.end(), 
	show);







	