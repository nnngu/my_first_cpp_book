#include <文件名>
#include "文件名"

// 一般来说，用 < > 来引入系统提供的头文件，
// 而使用 " " 来引入自己创建的、放置在当前项目文件夹下的头文件。


// 引入标准程序库中的头文件
#include <iostream>
// 引入自己创建的头文件
#include "Global.h"



/*
#define 指令可以用来定义一个符号常量或者宏
#undef 的作用是删除一个由#define 定义的符号常量或者宏。
*/

// 定义一个符号常量 _DEBUG
#define _DEBUG


// 条件编译指令
#if 常量表达式
	// 当常量表达式为 true 时，本段程序代码参与编译，
	// 否则不参与编译
	程序代码
#endif // 表示条件编译结束


#ifdef 标识符
	程序段 1 // 如果定义了标识符，就编译程序段 1
#else
	程序段 2 // 如果没有定义标识符，就编译程序段 2
#endif



#ifndef 标识符
	程序段 // 如果没有定义标识符，则编译此程序段
#endif



// 条件编译指令是在开发实践中经常用到的预编译指令，例如：
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif


// 防止头文件重复多次引入
#pragma once

























