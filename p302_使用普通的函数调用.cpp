// 消息打印函数，根据不同的分数打印不同的消息
void PrintPass(int nScore)
{
	cout<<"分数是："<<nScore<<"恭喜你通过考试！"<<endl;
}
void PrintFailed(int nScore)
{
	cout<<"分数是："<<nScore<<"很抱歉，没有通过考试！"<<endl;
}
void PrintExcellent(int nScore)
{
	cout<<"分数是："<<nScore<<"哇，你是天才！"<<endl;
}

// 主函数
int main(int argc, char* argv[])
{
	int nScore = 22;
	// 根据分数进行判断
	// 不同的分数调用不同的函数，打印不同的消息
	if (nScore < 60)
	{
		PrintFailed(nScore);
	}
	else if(nScore >= 60 && nScore <= 100)
	{
		PrintPass(nScore);
	}
	else
	{
		PrintExcellent(nScore);
	}
	return 0;
}