// 从函数中返回一个局部变量的指针

#include<iostream>
using namespace std;

int* GetLocalVal()
{
	// 声明一个局部变量
	int nLocalVal = 1;
	// 返回局部变量的指针
	return &nLocalVal;
}

int main(int argc, char* argv[])
{
	// 获取从函数中返回的局部变量指针
	int* pLocalVal = GetLocalVal();
	// 输出当前局部变量的值
	cout<<"当前局部变量的值是："<<*pLocalVal<<endl;

	// 改变内存内容
	int a;

	// 再次输出局部变量的值
	cout<<"改变内存后，当前局部变量的值是："<<*pLocalVal<<endl;
	return 0;
}

// 结论：要防止从函数中返回一个指向局部变量的指针。