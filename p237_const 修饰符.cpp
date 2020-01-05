int main(int argc, char* argv[])
{
	const double PI = 3.14159;
	PI = 3.14; // error，因为有 const 修饰
}



// 使用 const 表示常量

// 声明一个整型常量并赋初值为 1
const int number = 1;
// 声明一个 Teacher 类型的常量对象
const Teacher MrChen;
// 声明一个常量整型指针，指针所指向的变量的值不能修改
const int* pNumber;
// 声明一个常量整型指针，意义同上
int const * pNumber;
// 声明一个整型常量指针，指针不能修改
int * const pNumber = &number;

// 声明一个常量整型常量指针
// 指针和指针所指向的变量值都不能修改
const int * const pNumber = &number;

// 声明一个常量整型引用
const int & number = number;