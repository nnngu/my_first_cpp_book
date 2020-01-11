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



/*
学生的数学成绩和英语成绩分别保存在两个容器中，
现在班主任要将两个成绩总和起来，看看学生的综合成绩
*/
// 定义移动数据过程中的操作函数
// 这里，将两个分数相加起来作为函数返回值返回
int add(int nScoreMath, int nScoreEng)
{
	return nScoreMath + nScoreEng;
}

// 保存学生分科成绩的容器
vector<int> vecScoreMath;
vector<int> vecScoreEng;
// 将分数保存到容器中

// 定义保存综合成绩的容器
vector<int> vecScore;
// 改变容器的容量，让它有足够的空间保存结果
vecScore.resize(vecScoreMath.size());
// 将 vecScoreMath 和 vecScoreEng 容器中的成绩相加，
// 保存到结果容器 vecScore 中
transform(vecScoreMath.begin(), vecScoreMath.end(),
		  vecScoreEng.begin(), 
		  vecScore.begin(), 
		  add);


















