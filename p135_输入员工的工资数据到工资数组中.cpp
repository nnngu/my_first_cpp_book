// 输入员工的工资数据到工资数组中
int InputSalary(int* pSalary, const int MAX_NUM)
{
	int nTemp = 0; //暂存用户输入的数据
	int nIndex = 0; // 输入的序号
	do
	{
		cout<<"请输入员工"<<nIndex<<"的工资："<<endl;
		cin>>nTemp;
		if (nTemp < 0)
		{
			break;
		}
		// 将合法的输入保存到数组中，开始下一次输入
		// 通过修改传入的数组，实现数据的传出
		pSalary[nIndex] = nTemp;
		++nIndex;
	} while(nIndex < MAX_NUM);

	return nIndex;
}