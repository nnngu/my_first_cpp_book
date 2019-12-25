// 计算整型数的和
int Add(int a, int b)
{
	cout<<"int Add(int a, int b) 被调用！"<<endl;
	return a+b;
}

// 计算浮点数的和
float Add(float a, float b)
{
	cout<<"float Add(float a, float b) 被调用！"<<endl;
	return a+b;
}

int main(int argc, char* argv[])
{
	// 参数是整型数
	int nSum = Add(2,3);
	cout<<"2+3="<<nSum<<endl;

	// 参数是浮点数
	float fSum = Add(2.5f, 3.7f);
	cout<<"2.5+3.7="<<fSum<<endl;

	return 0;
}