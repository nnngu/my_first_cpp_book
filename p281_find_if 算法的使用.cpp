// 使用函数定义查找规则
// 如果分数大于等于 60，就返回 true，否则返回 false
bool ispass(int n)
{
	return n >= 60;
}

// 定义保存成绩的容器
vector<int> vecScores;

// 将分数保存到容器中
vecScores.push_back(72);
vecScores.push_back(54);
vecScores.push_back(87);

// 定义查找的起始位置
vector<int>::iterator it = vecScores.begin();
// 利用循环，逐个查找容器中符合条件的数据
do
{
	// 在容器中查找符合条件的数据元素
	// 其中 ispass 定义了查找的条件
	it = find_if(it, vecScores.end(), ispass);
	if (vecScores.end() != it)
	{
		// 输出查找到的符合条件的数据
		cout<<"找到及格分数："<<(*it)<<endl;
		// 将迭代器指向下一个位置，从新的位置开始下一次查找
		++it;
	}
	else
	{
		// 如果没有找到，就退出循环
		break;
	}
} while(true);













