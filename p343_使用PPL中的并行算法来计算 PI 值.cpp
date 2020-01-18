#include "stdafx.h"
// 引入 PPL 所在的头文件
#include <ppl.h>
#include <iostream>

// 使用 PPL 所在的名字空间 Concurrency
using namespace Concurrency;
using namespace std;

int main(int argc, char* argv[])
{
	// 定义循环次数
	const int num_steps = 10000000;
	// 计算步长
	double step = 1.0 / (double)num_steps;

	// 定义一个可合并的 double 数据对象
	// 这样可以在 parallel_for() 算法中并行地对 sums 进行读/写
	// 最后进行合并得到最终的计算结果
	combinable<double> sums;

	// 利用 parallel_for() 算法循环计算求和
	parallel_for(0, num_steps, 1, [&](int i)
	{
		// parallel_for()算法执行的函数体
		double x = (i+0.5)*step;
		// 将结果暂时保存到容器的本地副本中
		sums.local() += 4.0 / (1.0+x*x);
	});
	// 对可合并对象的结果进行合并，得到最终结果
	double result = sums.combine([](double left, double right){return left + right;});
	// 最终得到 PI 的数值
	double m_fPI = step * result;
	// 输出 PI 的数值
	cout<<"PI = "<<m_fPI<<endl;
	return 0;
}












