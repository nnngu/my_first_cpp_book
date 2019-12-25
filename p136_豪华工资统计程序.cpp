// 豪华工资统计程序
int main(int argc, char* argv[])
{
	const int MAX_NUM = 1000；
	// 保存所有工资数据的数组
	int nSalary[MAX_NUM];
	// 输入每位员工的工资
	int nCount = InputSalary(nSalary, MAX_NUM);

	// 计算平均工资
	float fAverageSalary = GetAverageSalary(nSalary, nCount);
	return 0;
}