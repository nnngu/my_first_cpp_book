// 引用的主要应用就是传递函数的参数和返回值

// 给整型数加 1
void Increase(int& nVal)
{
	nVal += 1;
}

int nInt = 1;
Increase(nInt); // 变量 nInt 的值变为 2