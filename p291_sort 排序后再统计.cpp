// 保存学生成绩的容器
vector<int> vecScore;

// 将学生成绩保存到 vecScore 容器中
// ...
// 对容器中的数据进行排序
sort(vecScore.begin(), vecScore.end());

// 排序完成后，就可以开始对容器中的数据做进一步的处理

// 获取容器中大于及格分数(临界值)的临界点，
// upper_bound()算法返回的是指向这个临界点的迭代器
vector<int>::iterator itpass = 
	upper_bound(vecScore.begin(), vecScore.end(), 59);

// 定义可以保存两个迭代器的 pair 对象
pair<vector<int>::iterator, vector<int>::iterator> passScores;
// 获取容器中等于某个值的数据范围
// equal_range()算法返回的是一个 pair 对象，
// 它的 first 成员保存的是这个范围的起始位置，
// 而它的 second 成员保存的是这个范围的结束位置
passScores = equal_range(vecScore.begin(), vecScore.end(),
	60);
// 输出数据处理的结果
// 输出所有及格的分数
cout<<"所有及格的分数是："<<endl;
for(auto it = itpass; it != vecScore.end(); ++it)
{
	cout<<*it<endl;
}

// 利用迭代器计算符合条件的数据的数目
cout<<"所有及格的学生人数："<<int(vecScore.end() - itpass)<<endl;
cout<<"刚好及格的学生人数："<<int(passScores.second - passScores.first)<<endl;



















