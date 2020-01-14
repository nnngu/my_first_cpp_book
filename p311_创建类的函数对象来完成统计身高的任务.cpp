// 创建函数对象
AverageHeight ah;
// 将函数对象应用到STL算法中
ah = for_each(vecStu.begin(), vecStu.end(), ah);
// 从函数对象中获取它的记忆作为结果输出
cout<<ah.GetCount()<<"个学生的平均身高是："<<ah.GetAverageHeight()<<endl;





class AverageHeight
{
	// ...
	// 定义类型转换函数
	// 将函数对象转换为 float 类型，直接返回计算结果
	operator float()
	{
		return GetAverageHeight();
	}
}

// 直接从 for_each()算法获得计算结果
float fAH = for_each( vecStu.begin(), vecStu.end(), ah() );


























