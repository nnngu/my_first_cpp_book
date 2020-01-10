// 利用函数定义我们对数据的处理方法，
// 低于 2000 元的工资，就增加 30%
void addsalary(int& nSalary)
{
	// 判断数据是否满足条件
	if (nSalary < 2000)
	{
		nSalary *= 1.3; // 对数据进行处理
	}
}

// 构造容器，保存数据
vector<int> vecSalary;
vecSalary.push_back(3200);
vecSalary.push_back(1983);
vecSalary.push_back(703);

// 使用 for_each() 算法对容器中的数据进行处理
for_each(vecSalary.begin(), vecSalary.end(), addsalary);