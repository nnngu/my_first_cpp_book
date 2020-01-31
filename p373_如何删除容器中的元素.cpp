/*
题26 如何删除容器中的元素？
某程序员写了如下代码来删除容器中所有符合条件的数据，请你看看这段代码有什么问题？
*/
typedef vector IntArray;
IntArray Array;
Array.push_back(1);
Array.push_back(2);
Array.push_back(2);
Array.push_back(3);
// 删除 Array 数组中所有的数字 2
for(IntArray::iterator itor = Array.begin();
	itor != Array.end(); ++itor)
{
	if (2 == *itor)
	{
		Array.erase(itor);
	}
}

// 实际上，可以使用 remove() 算法结合 vector 容器的 erase() 操作函数轻松地
// 完成这一任务

// 删除 Array 数组中所有的数字 2
Array.erase(remove(Array.begin(), Array.end(), 2), Array.end());
/*
说明：remove()算法会将容器中所有符合条件的数据移动到容器的末尾，并返回表示容器中所有
剩下数据的新的结束位置的迭代器，而这个迭代器又可以作为 erase() 函数的参数，用来擦除
容器末尾中符合删除条件的数据。
*/






















