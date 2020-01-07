// 定义一个可以保存 int 类型数据的容器
vector<int> vecSalary;
// 接收用户输入并将数据保存到容器中
int nInput = 0;
do
{
	cin>>nInput;
	if (0 == nInput)
	{
		break;
	}
	// 通过 push_back()函数将数据装入容器中
	vecSalary.push_back(nInput);
} while(true);

