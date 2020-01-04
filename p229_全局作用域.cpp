// 定义一个全局变量
int gN;

// 定义一个全局函数
void GlobalFunc(int a, int b)
{
	for(gN = 0; gN < 10; ++gN) // 访问全局变量
	{
		// ...
	}
}

int main(int argc, char* argv[])
{
	gN = 3; // 访问全局变量
	GlobalFunc(2, 4); // 访问全局函数
	// ...
	return 0;
}

