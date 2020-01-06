#include <iostream>
// 引入 STL 相关组件的头文件
#include <vector>   	// 向量容器
#include <algorithm>	// 通用算法
using namespace std;

int main(int argc, char* argv[])
{
	// 使用 vector 容器保存用户输入的数据
	vector<int> vecSalary;
	cout<<"请输入工资数据，0 表示输入结束"<<endl;

	// 用户输入
	int nSalary = 0;
	do
	{
		cin>>nSalary;
		if (0 == nSalary)
		{
			break;
		}
		// 将用户输入的数据保存到容器中
		vecSalary.push_back(nSalary);
	} while(true);

	// 使用通用算法 count_if 统计 vecSalary 容器中大于 1000 的元素个数
	int nTotal = count_if(vecSalary.begin(), vecSalary.end(),
		bind2nd(greater<int>(), 1000));
	// 结果输出
	cout<<"工资超过 1000 的员工数是："<<nTotal<<endl;
	return 0;
}











