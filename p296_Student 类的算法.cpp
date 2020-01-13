// 班里只有三个同学
Student st1("ChenLiangqiao", 173);
Student st2("Jiawei", 163);
Student st3("Jiajunpeng", 187);

// 老师用 push_back() 函数将我们召集到 vector 容器中
vector<Student> vecStu;
vecStu.push_back(st1);
vecStu.push_back(st2);
vecStu.push_back(st3);

// 算法老师用 copy_backward() 算法将隔壁班的同学合并到我们所在的 vecStu 容器中
// 扩大我们所在容器的容量，为新来的同学腾出点地方
vecStu.resize(vecStu.size() + vecStuC2.size());
// 将新同学对象复制到我们的容器中，欢迎新同学
copy_backward(vecStuC2.begin(), vecStuC2.end(), vecStu.end());


// 排队的规则：高个儿的站左边，低个儿的站右边
bool sortbyHeight(Student st1, Student st2)
{
	// 两两之间比较一下身高
	return st1.GetHeight() < st2.GetHeight();
}

// 用sort算法按照老师的排队规则排好队伍
sort(vecStu.begin(), vecStu.end(), sortbyHeight);


// 用 for_each() 算法报出学生自己的姓名和身高
// 让容器中的每个对象都调用自己的ReportName()函数，报出自己的姓名和身高
// 这里算法老师使用mem_fun_ref()函数将类的成员函数地址构造成函数对象供我们执行
for_each(vecStu.begin(), vecStu.end(), 
	mem_fun_ref(&Student::ReportName));













