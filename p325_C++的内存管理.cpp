// 定义了_MAX_PATH 宏，表示文件路径名的最大长度
#include <stdlib.h>
// 引用定义了 malloc() 和 free() 函数的头文件
#include <stdio.h>
#include <malloc.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	// 表示路径的指针
	char* string = NULL;

	// 为路径名这个字符串申请内存
	// 进行指针的类型转换
	string = (char *)malloc(_MAX_PATH);

	// 判断申请内存是否成功
	if (string == NULL)
	{
		cout<<"无法获取内存"<<endl;
	}
	else
	{
		cout<<"成功为路径名获取内存"<<endl;
		// 对获取的内存进行操作，
		// 例如按照某种规律构造路径名，用路径名保存文件等
		// ...
		// 释放申请的内存
		free(string);
		cout<<"释放内存"<<endl;
	}
	return 0;
}








