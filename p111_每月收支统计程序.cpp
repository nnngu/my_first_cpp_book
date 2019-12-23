// 每月收支统计程序
int main(int argc, char* argv[])
{
	cout<<"======每月收支统计程序======"<<endl;
	cout<<"请输入你本月的收入（正数）和支出（负数），0 表示输入结束。"<<endl;

	int nInput = 1;
	int nTotal = 0;

	while(0 != nInput)
	{
		cout<<"请输入你的收入或支出：";
		cin>>nInput;

		nTotal += nInput;
	}

	//输出统计结果
	cout<<"你本月的结余是："<<nTotal<<endl;

	return 0;
}