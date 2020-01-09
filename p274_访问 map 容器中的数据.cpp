// 利用迭代器访问map容器中的数据
for(map<int, Employee>::iterator it = mapEmployee.begin();
	it != mapEmployee.end(); ++it)
{
	// 通过迭代器输出数据对的键和值
	cout<<"当前员工号是："<<it->first<<endl;
	cout<<"姓名："<<it->second.GetName()<<endl;
	cout<<"工资："<<it->second.GetSalary()<<endl;
}




// 使用find()函数来查找某一个键，返回指向拥有这个键的数据对的迭代器
// 定义要查找的键
int nFindKey = 1;
// 使用find()函数查找键，返回指向拥有这个键的数据对的迭代器
// 如果map容器中没有这个键，则返回指向容器末尾位置的迭代器
map<int, Employee>::iterator it = mapEmployee.find(nFindKey);

// 查看迭代器是否指向容器末尾位置，以此判断是否找到相应的数据对
if(mapEmployee.end() == it)
{
	// 如果迭代器指向容器末尾位置，就表示没有找到对应的数据对
	cout<<"无法找到键为"<<nFindKey<<"的数据对"<<endl;
}
else
{
	// 如果迭代器指向其他位置，则表示找到相应的数据对
	// 而find()函数返回的迭代器就是指向这个数据对的位置
	cout<<"找到键为"<<nFindKey<<"的数据对"<<endl;
	// 通过迭代器访问这个数据对的值，也就是Employee对象
	cout<<"姓名："<<it->second.GetName()<<endl;
	cout<<"工资："<<it->second.GetSalary()<<endl;
}








