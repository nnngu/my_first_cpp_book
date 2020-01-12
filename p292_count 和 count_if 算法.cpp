// 统计容器中所有及格的分数个数
// count_if() 算法使用 ispass() 函数判断当前数据是否属于及格分数，
// 如果 ispass()函数返回的是 true, 则当前数目统计在内
int nAllPass = count_if(vecScore.begin(), vecScore.end(), ispass);
cout<<"所有及格的学生人数："<<nAllPass<<endl;

// 统计刚好及格的学生人数
// 也就是利用 count() 算法统计容器中有多少个被统计的数值
int nPass = count(vecScore.begin(), vecScore.end(), 60);
cout<<"刚好及格的学生人数："<<nPass<<endl;






