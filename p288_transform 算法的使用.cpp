// 定义移动数据过程中的操作函数
// 操作函数的参数类型就是输入容器中的数据类型
int increase(int nScore)
{
	// 对数据进行处理
	// 将 30 到 60 之间的数据调整为 60，
	// 也就是让快要及格的同学都拿及格分数
	if (nScore > 30 && nScore < 60)
	{
		nScore = 60;
	}
	// 返回处理后的结果数据
	return nScore;
}

// 定义保存学生成绩的容器
vector<int> vecScoreMath;
// 将成绩保存到容器中
vecScoreMath.push_back(26);
vecScoreMath.push_back(42);
vecScoreMath.push_back(72);

// 对容器中的数据进行处理，将不及格的分数调整为及格分数
transform(vecScoreMath.begin(), vecScoreMath.end(),
	vecScoreMath.begin(),
	increase);





