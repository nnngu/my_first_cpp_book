// OpenMP 的使用非常简单，只需要在编译器选项中启用对 OpenMP 的支持，
// 并引入 OpenMP 的头文件 omp.h 就可以了。

#include "stdafx.h"
#include <iostream>

// 引入 OpenMP 的头文件
#include <omp.h>

using namespace std;

int main(int argc, char* argv[])
{
	// 用 pragma 指令指明这是一个可以并行的 for 循环
	// 编译器会根据这些指令自动创建进程，
	// 对 for 循环进行相应的并行处理
	#pragma omp parallel for
	for(int i = 0; i < 10; ++i)
		cout<<i<<endl;

	return 0;
}