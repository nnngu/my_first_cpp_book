// 使用函数指针改写后的瘦身版主函数
int main(int argc, char* argv[])
{
	int nScore = 22;

	// 定义函数指针
	void (*pPrintFunc)(int);
	// 根据分数进行判断
	// 不同的分数，使用不同的函数对函数指针进行赋值
	if (nScore < 60)
	{
		pPrintFunc = PrintFailed;
	}
	else if(nScore >= 60 && nScore < 100)
	{
		pPrintFunc = PrintPass;
	}
	else
	{
		pPrintFunc = PrintExcellent;
	}
	// 最后，以统一的函数指针的形式调用函数
	// 因为函数指针被不同的函数入口地址赋值，从而实现了不同函数的调用
	(*pPrintFunc)(nScore);

	return 0;
}