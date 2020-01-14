// 利用函数定义统计的规则
bool countHeight(Student st)
{
	// 如果身高大于 170，则统计在内
	return st.GetHeight() > 170;
}

// 将统计函数的指针 countHeight 应用到 count_if() 算法中
// 这样 count_if() 算法将调用 countHeight() 函数进行统计
int nCount = count_if(vecStu.begin(), vecStu.end(), countHeight);
cout<<"身高大于 170 的学生有："<<nCount<<endl;





// 重新定义统计规则函数，将统计标准也作为参数
bool countHeight(int nHeight, Student st)
{
	// 如果身高大于标准身高，则统计在内
	return st.GetHeight() > nHeight;
}

// 定义标准身高
int nStandardHeight = 170;
int nCount = count_if(vecStu.begin(), vecStu.end(),
	bind1st(ptr_fun(countHeight), nStandardHeight));
cout<<"身高大于："<<nStandardHeight<<"的学生有："<<nCount<<endl;













