/*

v.empty()		判断容器 v 是否为空，如果 v 为空，则返回 true; 否则返回 false
v.size()		返回容器 v 中元素的个数
v.push_back(t)	在容器 v 的末尾增加一个值为 t 的元素
v.pop_back()	返回容器 v 的最后一个元素
v.insert(pos)	在容器 v 的 pos 位置插入一个元素
v.earse(pos)	删除容器 v 中的 pos 位置上的元素
v.clear()		删除容器 v 中的所有元素
v.at(pos)		返回容器 v 中位置为 pos 的元素
v1 = v2			把容器 v1 的元素替换为容器 v2 中的元素的副本，也就是将 v2 赋值给 v1
v1 == v2		判断容器 v1 和容器 v2 是否相等，如果 v1 与 v2 相等，则返回 true

*/



// vector 插入元素 Demo
vector<int> vecSalary;
int nSalary;
// 循环读取用户输入
while(cin>>nSalary)
{
	// 将用户输入的数据保存到 vector 容器对象 vecSalary 中
	vecSalary.push_back(nSalary);
}
// 输出当前容器中的元素个数
cout<<"当前容器中的元素个数是："<<vecSalary.size()<<endl;




// 使用 [] 访问 vector 容器中的数据
vecSalary[0] = 3000;


// 为了安全和便利，通常使用迭代器或者 at()函数访问容器中的数据元素
// 定义索引值变量，用于访问容器中的数据
 vector<int>::size_type nIndex = 0;
 // 循环遍历容器
 for(auto it =  vecSalary.begin();
 	it != vecSalary.end(); ++it, ++nIndex )
 {
 	// 通过迭代器读取容器中的数据
 	cout<<"当前工资是："<<*it<<endl;
 	// 通过 at()函数修改容器中元素的值
 	vecSalary.at(nIndex) += 1000; // 每人加 1000 元
 	cout<<"涨后工资是："<<*it<<endl;
 }










