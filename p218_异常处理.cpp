// 开始异常处理语句
try
{
	// 捕获Divide()可能会抛出的异常
	// 这里使用0作为除数，将抛出一个异常
	double fResult = Divide(3, 0);
}
// 捕获try语句块中所抛出的字符串异常
catch(char* pMsg)
{
	// 对异常进行处理
	// 这里仅仅是输出错误信息
	cout<<"程序运行发生异常："<<pMsg<<endl;
}
finally:
{
	// 对异常的最终处理
}


// 除法函数
double Divide(int a, int b)
{
	if (0 == b)
	{
		throw "不能使用0作为除数";
	}
	return (double)a/b;
}
