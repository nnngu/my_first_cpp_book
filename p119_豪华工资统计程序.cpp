// 豪华工资统计程序
int main(int argc, char* argv[])
{
	// 定义一个常量，表示总员工数
	const int MAX_NUM = 1000;
	// 保存所有工资数据的数组
	int nSalary[MAX_NUM];

	// 输入每位员工的工资
	int nTemp = 0; // 暂存用户输入的数据
	int nIndex = 0; // 输入的序号

	// 使用循环接收用户的多次输入
	do
	 {
	 	cout<<"请输入员工"<<nIndex<<"的工资："<<endl;
	 	cin>>nTemp；
	 	if (nTemp < 0)
	 	{
	 		cout<<"你开玩笑？这位员工欠你钱？请重新输入！"<<endl;
	 		continue;
	 	}

	 	// 将合法的数据保存到数组中，开始下一次输入
	 	nSalary[nIndex] = nTemp;
	 	++nIndex;
	 } while (nIndex < MAX_NUM); 

	 // 计算平均工资
	 float fAverageSalary;
	 int nTotal = 0; // 工资总和

	 // 使用循环进行统计
	 for (int i = 0; i < MAX_NUM; ++i)
	 {
	 	nTotal += nSalary[i];
	 }
	  fAverageSalary = (float)nTotal / MAX_NUM;

	  cout<<MAX_NUM<<"位员工的平均工资是"<<fAverageSalary<<endl;

	  return 0;
}