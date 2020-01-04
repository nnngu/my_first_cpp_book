// Global.cpp: 定义全局变量和全局函数
// 全局变量
int gTotal = 0;
// 全局函数
int Add(int a, int b)
{
	return a+b;
}


// HelloWorld.cpp: 使用全局变量和全局函数
// 在变量声明前加上"extern"关键字，重新声明全局变量
extern int gTotal;
// 在函数声明前加上"extern"关键字，重新声明全局函数
extern int Add(int a, int b);

int main(int argc, char* argv[])
{
	// 使用全局变量和全局函数
	gTotal = Add(2,3);
	return 0;
}