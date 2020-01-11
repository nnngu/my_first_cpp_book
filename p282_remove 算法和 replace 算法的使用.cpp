/*
	remove 算法：删除容器中所有符合某个条件的数据
	replace 算法：替换容器中符合某个条件的数据
*/

// 判断分数是否不及格的函数
bool isfail(int nScore)
{
	return nScore < 60 ? true : false;
}

// 保存学生成绩的容器
vector<int> vecScore;
// 将学生成绩保存到容器中
vecScore.push_back(82); // 及格成绩
vecScore.push_back(-1); // 缺考成绩
vecScore.push_back(32); // 不及格成绩
// ...

// 删除缺考成绩
// 因为删除元素后，容器的结束位置发生了变化，
// 所以使用一个新的迭代器来保存容器的结束位置
vector<int>::iterator itend = remove(vecScore.begin(),
	vecScore.end(), -1);

// 替换不及格成绩
// 也就是使用 60 这个新的数据替换容器中所有符合 isfail 条件的数据
replace_if(vecScore.begin(), itend, isfail, 60);

// 输出处理后的成绩，
// 在这里，我们使用 auto 关键字作为循环索引值 it 的数据类型,
// 编译器会根据它的首次赋值推定它的真实数据类型，
// 这里，it 首次被赋值为 vecScore.begin(),所以它会被推定为 vector<int>::iterator
cout<<"处理后的成绩是："<<endl;
for(auto it = vecScore.begin(); it != itend; ++it)
	cout<<*it<<endl;




