// 格式如下
// 返回值类型 函数名(形式参数表) throw (异常类型列表);

// 例如：
double Divide(int a, int b) throw (char*, double);

// 如果函数的声明中没有包括异常的接口声明，则次函数可以抛出任何类型的异常。例如：
double Divide(int a, int b);

// 如果将throw关键字之后的异常类型列表留空，则表示这个函数不会抛出任何类型的异常。例如：
double Divide(int a, int b) throw();