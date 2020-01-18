// shared_ptr 提供了一些特殊的构造函数
template<class Other, class D> shared_ptr(Other * ptr, D dtor);



// 下面的例子演示了如何通过自定义 shared_ptr 来完成特殊的清理工作
// 引入需要的头文件
#include "stdafx.h"
// 文件操作需要的头文件
#include <stdio.h>
// 获取系统时间需要的头文件
#include <time.h>
#include <memory>
#include <iostream>
using namespace std;

// 使用一个函数对象来表示自定义的删除器
class FileCloser
{
public:
	// 重载"()"操作符，在其中定义指针的特殊清理动作
	void operator()(FILE* pFile)
	{
		// 判断指针是否为 NULL
		if (NULL != pFile)
		{
			// 写入日志文件结束的标志
			fprintf(pFile, "日志文件结束\n" );
			// 输出提示日志文件被关闭
			cout<<"关闭日志文件"<<endl;
			// 关闭日志文件，完成文件指针的清理工作
			fclose(pFile);
		}
	}
};

// 使用日志文件这一文件指针的多个客户
// 它们通过 shared_ptr 共享同一个日志文件，分别向同一个日志文件打印系统时间和系统日期
// 向日志文件打印系统时间
void PrintTime(shared_ptr<FILE> spLog)
{
	char tmpbuf[128];
	// 获取系统时间
	strtime_s(tmpbuf, 128);
	// 将系统时间输出到共享的日志文件
	fprintf(spLog.get(), "当前系统时间：\t\t%s\n", tmpbuf);
}

// 向日志文件打印系统日期
void PrintDate(shared_ptr<FILE> spLog)
{
	char tmpbuf[128];
	// 获取系统日期
	_strdate_s(tmpbuf, 128);
	// 将系统日期输出到共享的日志文件
	fprintf(&*spLog, "当前系统日期：\t\t%s\n", tmpbuf);
}

int main(int argc, char* argv[])
{
	// 创建并打开日志文件
	FILE* fLog = NULL;
	int err = fopen_s(&fLog, "log.txt", "w");

	// 成功打开日志文件
	if (0 == err)
	{
		cout<<"打开日志文件并写入日志"<<endl;
		// 使用 shared_ptr 管理文件指针
		shared_ptr<FILE> spLog(fLog, FileCloser());

		// 直接使用 shared_ptr 访问文件指针输出日志
		fprintf(spLog.get(), "日志文件开始\n");

		// 通过 shared_ptr 实现文件指针在多个客户之间的共享
		PrintTime(spLog);
		PrintDate(spLog);
	}

	return 0;
}













