// 定义一个 vector<int> 容器的迭代器
vector<int>::iterator it;
// 将迭代器 it 指向 vector 容器的起始位置，这时 it 指向的是 vector 容器中的第一个元素
// vector 容器的 begin()函数返回的是指向其起始位置的游标(iterator)
it = vecSalary.begin();

// 通过迭代器访问容器中的数据元素
// 跟指针类似，在迭代器前使用 "*" 运算符就可以得到它所指向的数据元素
// 如果工资小于 2000 元，则增加为原来的 120%
if (*it < 2000)
{
	*it = (*it) * 1.2;
}



/*
	使用两个迭代器定义容器中数据元素的某个范围
*/
// 定义一个 vector<int> 容器的迭代器，表示起始位置
vector<int>::iterator itfrom;
// 将迭代器指向 vector 容器的起始位置
itfrom = vecSalary.begin();
// 定义一个 vector<int> 容器的迭代器，表示终止位置
 vector<int>::iterator itto;
 // 将表示终止位置的迭代器指向 vector 容器起始位置后的第 4 个数据元素
 itto = vecSalary.begin() + 3;



// 使用迭代器循环遍历容器中的数据
for (vector<int>::iterator it = vecSalary.begin();
	it != vecSalary.end();
	++it )
{
	// 通过迭代器访问它所指向的数据元素
	nTotal += (*it);
}













