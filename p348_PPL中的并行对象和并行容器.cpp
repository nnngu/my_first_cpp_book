// 我们曾经利用函数对象统计过 vector 容器中所保存的 Student 对象的
// 平均身高。现在利用并行对象，这一过程就可以并行执行，且性能很高。

// 保存 Student 对象的 vector 容器
vector<Student> vecStu;

// 将 Student 对象保存到 vector 容器中...

// 使用 combinable<T>模板类创建一个 int 类型的并行对象 ncmbTotalH
combinable<int> ncmbTotalH;
// 使用 parallel_for_each()算法并行地访问 vector 容器，
// 统计 vector 容器中所有 Student 对象的身高总和
parallel_for_each(vecStu.begin(), vecStu.end(),
	[&](Student st)
	{
		// 将 Student 对象的身高累加到并行对象 ncmbTotalH 的本地副本
		ncmbTotalH.local() += st.GetHeight();
	});

// 合并并行对象 ncmbTotalH 的本地副本，获得最终结果
int nTotalH = ncmbTotalH.combine(plus<int>());
// 计算并输出平均身高
if (vecStu.size() != 0)
{
	float fAverageH = nTotalH / vecStu.size();
	cout<<"平均身高是"<<fAverageH<<endl;
}


















