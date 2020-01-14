// 定义变量，用于保存函数的状态数据
int nTotalHeight = 0;
int nCount = 0;
// 在 for_each() 算法中使用 Lambda 表达式，统计身高
for_each(vecStu.begin(), vecStu.end(), 
	[&](Student st)
	{
		nTotalHeight += st.GetHeight();
		++nCount;
	});

cout<<nCount<<"个学生的平均身高是："<<(float)nTotalHeight/nCount<<endl;






