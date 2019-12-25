#include<assert.h> // 引入断言头文件
#include <iostream>
using namespace std;

double Divide(int nDividend, int nDivisor)
{
	// 使用断言判断除数是否为0，进行防错处理
	assert(0 != nDivisor);

	return (double)nDividend / nDivisor;
}

int main(int argc, char* argv[])
{
	// 除数为0，Divide()函数被错误地调用
	double fRet = Divide(3, 0);
	cout<<"fRet = "<<fRet<<endl;

	return 0;
}