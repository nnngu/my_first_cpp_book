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




// 可以把保存起来的 Lambda 表达式作为参数传递给函数
// 可以接受函数对象为参数的函数
void PrintMsg(tr1::function<void (int)> func)
{
	vector<int> v;
	v.push_back(3);
	for_each(v.begin(), v.end(), 
		func); // 使用传递进来的Lambda表达式
}

// 使用Lambda表达式作为参数调用PrintMsg()函数
PrintMsg(show);













	