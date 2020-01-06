template <typename 标识符>
返回值类型 函数名(形参表)
{
	// 函数体
}


// 以 max()函数为例
// 自定义的比较函数模板
// T 就是函数模板的参数
template <typename T>
T mymax(const T a, const T b)
{
	return a > b? a : b;
}


// 调用模板
int main(int argc, char* argv[])
{
	// 使用函数模板，比较整数
	int nA = 2;
	int nB = 5;
	wcout<<nA<<"和"<<nB<<"中比较大的是"
		<<mymax(nA, nB)<<endl; // 动态生成模板函数 int mymax(int,int)

	// 使用函数模板，比较浮点数
	float fA = 2.2;
	float fB = 5.5;
	wcout<<fA<<"和"<<fB<<"中比较大的是"
		<<mymax(fA, fB)<<endl; // 动态生成模板函数 float mymax(float,float)

	return 0;
}
















