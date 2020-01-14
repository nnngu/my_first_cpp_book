// 创建函数对象
AverageHeight ah;
// 将函数对象应用到STL算法中
ah = for_each(vecStu.begin(), vecStu.end(), ah);
// 从函数对象中获取它的记忆作为结果输出
cout<<ah.GetCount()<<"个学生的平均身高是："<<ah.GetAverageHeight()<<endl;










