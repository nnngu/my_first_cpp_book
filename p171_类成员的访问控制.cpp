// 添加访问控制后的 Teacher 类
class Teacher
{
	// 公有类型成员
	// 外接通过访问这些成员跟该类进行交互
public:
	// 构造函数应该是公有的，这样外界才可以利用构造函数创建该类的对象，
	// 否则，只有自己创建自己了
	Teacher(string strName)
	{
		m_strName = strName;
	}
	// 老师要为学生们备课，它会被外界调用，所以这个行为是公有类型的
	void PrepareLesson()
	{
		cout<<"老师备课"<<endl;
	}
	// 提供一个成员函数供外界获取我们的名字
	string GetName()
	{
		return m_strName;
	}

// 保护类型成员，不能被外界访问，但是可以遗传给下一级子类
protected:
	string m_strName;

// 私有类型
private:

};

int main(int argc, char* argv[])
{
	Teacher MrChen("ChenLiangqiao");

	string strTeacherName;

	strTeacherName = MrChen.GetName();

	// 错误：无法访问类的保护类型成员
	MrChen.m_strName = "Jiawei";
	
	return 0;
}



