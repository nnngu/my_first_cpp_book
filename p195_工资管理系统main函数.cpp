#include "SalarySystem.h"

// 在主函数中使用SalarySystem对象
int main(int argc, char* argv[])
{
	// 创建SalarySystem对象
	SalarySystem nSalarySys;
	// 获取用户输入
	nSalarySys.InputEmplyee();
	// 显示具体的工资信息
	nSalarySys.DisplaySalary();

	return 0;
}
