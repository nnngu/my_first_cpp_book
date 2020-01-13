// 声明一个函数
void PrintPass(int nScore);

// 定义函数指针
void (*pPrintFunc)(int nScore);

// 省略形式参数的函数指针声明
void (*pPrintFunc)(int);

// 用typedef定义一种新的数据类型来定义函数指针
// 定义一种新的函数指针的数据类型
typedef void (* PRINTFUNC) (int);
// 使用新的数据类型定义函数指针
PRINTFUNC pFuncFailed;
PRINTFUNC pFuncPass;


// 用函数名给函数指针赋值
pPrintFunc = PrintPass;


// 利用auto关键字定义函数指针类型
// 编译器会在变量赋值的时候，自动推断函数指针的具体说明
auto pPrintFunc = PrintPass;


// 通过函数指针调用函数
(*pPrintFunc)(75);
// 相当于如下的函数调用
PrintPass(75);


















