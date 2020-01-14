// 学生类
class Student
{
public:
	// 公有的成员函数
	// 判断学生的名字是否跟参数相同
	bool isnamed(string strName)
	{
		return strName == m_strName;
	}
private:
	string m_strName;
};

// 在 find_if() 算法中直接使用指向 isnamed()这个成员函数的
// 函数指针来判断当前对象是否就是我们要找的对象
string strFindName = "Jiawei"; // 要找的名字
// 使用成员函数指针判断容器中的对象是否符合查找条件
auto it = find_if(vecStu.begin(), vecStu.end(),
	bind2nd(mem_fun_ref(&Student::isnamed), strFindName));
// 如果找到符合条件的对象，则输出查找结果
if (it != vecStu.end())
{
	cout<<"找到了名字为"<<strFindName<<"的Student对象"<<endl;
}







