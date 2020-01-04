int GetSum(void)
{
	// 整体函数体是一个局部作用域
	int nTotal = 0;
	for (int i = 0; i < 100; ++i)
	{
		// 函数体中的 for 循环体，是函数体所嵌套的一个子局部作用域
		// 在父作用域函数体中定义的变量，在子作用域中同样可见
		nTotal += i;
	}

	// 在作用域中定义的变量，在整个作用域都可见
	return nTotal;
}


// 人为地在代码中添加一个局部作用域
void foo(void)
{
	int nNum = 0;
	{
		int nNum;
		nNum = 1;
		cout<<"在局部作用域中输出："<<nNum<<endl;
	}
	cout<<"在函数体作用域中输出："<<nNum<<endl;
}