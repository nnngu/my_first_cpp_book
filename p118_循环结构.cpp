// 循环结构
int nArray[100];

for(int i = 0; i < 100; ++i)
{
	cin>>nArray[i];
}

int nTotal = 0;
for(int i = 0; i < 100; ++i)
{
	nTotal += nArray[i];
}

cout<<"输入的100个数的和是："<<nTotal<<endl;