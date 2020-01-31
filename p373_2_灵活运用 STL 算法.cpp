/*
题27 灵活运用 STL 算法，由繁至简解决实际问题。
一个班级的学生成绩保存在 vecScore 容器中，请统计出其中的及格人数。
*/

/*
方法一：使用迭代器
*/
// 保存学生成绩的容器
vector<int> vecScore;
// 将学生成绩数据保存到容器
// ...
// 保存及格人数的变量
int nPass = 0;
// 使用 for 循环遍历容器，用迭代器访问容器中的数据，逐个进行判断
for(auto it = vecScore.begin(); it != vecScore.end(); ++it)
{
	if (*it >= 60)
	{
		nPass += 1;
	}
}
cout<<"及格人数是"<<nPass<<endl;


/*
方法二：使用for_each()算法结合 Lambda 表达式统计容器中的数据
*/
int nPass = 0;
// 使用for_each()算法结合 Lambda 表达式统计容器中的数据
for_each(vecScore.begin(), vecScore.end(), 
	[&](int nScore)
	{
		if(nScore >= 60)
			nPass += 1;
	});
cout<<"及格人数是"<<nPass<<endl;



/*
方法三：使用count_if()算法和函数对象统计容器中的数据
*/
int nPass = count_if(vecScore.begin(), vecScore.end(), 
	not1(bind1st(greater<int>(), 60)));
























