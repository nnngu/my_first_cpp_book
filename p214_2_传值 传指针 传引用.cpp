// 通过传值来传入参数和传出返回值
int FuncByValue(int x)
{
	x = x + 1;
	return x;
}

// 通过传指针来传入参数和传出返回值
void FuncByPointer(int* p)
{
	*p = *p + 1;
}

// 通过传引用来传入参数和传出返回值
void FuncByReference(int& r)
{
	r = r + 1;
}

int main(int argc, char* argv[])
{
	int n = 0;
	cout<<"n 的初始值，n = "<<n<<endl;

	// 调用传值方式的函数，变量 n 的值不发生改变
	FuncByValue(n);
	cout<<"传值，n = "<<n<<endl;

	// 调用传指针的函数，实现数据的同时传入传出
	// 变量 n 的值发生改变
	FuncByPointer(&n);
	cout<<"传指针，n = "<<n<<endl;

	// 调用传引用的函数，实现数据的同时传入传出
	// 变量 n 的值发生改变
	FuncByReference(n);
	cout<<"传引用，n = "<<n<<endl;

	return 0;
}











