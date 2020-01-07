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


// 向 vector 容器的开始位置插入一个数据
vecSalary.insert(vecSalary.begin(), 4999);
// 删除 vector 容器中的前三个数据
vecSalary.erase(vecSalary.begin(), vecSalary.begin() + 3);
// 清空 vector 容器中的所有数据
vecSalary.empty();



