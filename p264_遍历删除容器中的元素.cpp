// 循环遍历删除容器中的元素(删除后，下一次循环时迭代器指向的是删除元素后的第二个元素)
for(auto it = vecSalary.begin();
	it != vecSalary.end(); ++it)
{
	// 遇到符合条件的元素就进行删除
	if (*it > 1000)
	{
		vecSalary.erase(it);
	}
}



// 所以，需要在每次删除动作发生后，重新设置当前迭代器的值，将它指向正确的容器位置
// 循环遍历删除容器中的元素
for(auto it = vecSalary.begin();
	it != vecSalary.end(); )
{
	// 遇到符合条件的元素就进行删除
	if (*it > 1000)
	{
		it = vecSalary.erase(it); // 删除完成后，将迭代器重新指向正确的位置
	}
	else
	{
		++it; // 如果不删除当前元素，则将迭代器指向元素的下一个位置
	}
}