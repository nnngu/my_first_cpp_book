// 定义函数指针类型
typedef void (* PRINTFUNC)(int);
// 统一的打印消息函数
void PrintMessage(int nScore, PRINTFUNC pFunc)
{
	cout<<"=============="<<endl;
	// 通过函数指针回调函数
	(*pFunc)(nScore);
	cout<<"++++++++++++++"<<endl;
}
// 主函数
int main(int argc, char* argv[])
{
	int nScore = 22;

	PRINTFUNC pFunc;
	// 根据不同分数给pFunc赋值
	// ...

	// 使用不同函数指针作为参数调用PrintMessage()函数
	PrintMessage(nScore, pFunc);

	return 0;
}