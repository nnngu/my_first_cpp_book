// 计算平均工资
float GetAverageSalary(int* pSalary, const int MAX_NUM)
{
	int nTotal = 0; // 工资总和
	for (int i = 0; i < MAX_NUM; ++i)
	{
		nTotal += pSalary[i];
	}

	return (float)nTotal / MAX_NUM;
}