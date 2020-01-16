// 如果想在默认情况下使用传引用的方式，但是其中一个变量使用传值的方式，
// 可以这样定义 Lambda 表达式
int nAdd = 3;
int nTotal = 0;
for_each(v.begin(), v.end(),
	[&, nAdd](int x)
{
	nTotal += (x * nAdd);
});
cout<<"容器中的数据乘以"<<nAdd<<"之后总和是"<<nTotal<<endl;



// 有返回值的 Lambda 表达式
// 统计容器中偶数的个数
int nEven = count_if(v.begin(), v.end(),
	[=](int x) -> bool // 定义 Lambda 表达式的返回值类型为 bool 类型
{
	// 判断是否是偶数，返回 bool 类型
	return x % 2 == 0;
});



