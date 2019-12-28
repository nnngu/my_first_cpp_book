// 用 Teacher 类来封装老师的属性和行为
class Teacher
{
public:
	// 构造函数
	Teacher(string strName)
	{
		m_strName = strName;
	};
	// 用成员函数描述老师的行为
	void PrepareLesson(); // 备课
	void TeacherLesson(); // 上课
	void ReviewHomework(); // 批改作业

protected:
	// 用成员变量描述老师的属性
	string m_strName; // 姓名
	int m_nAge; // 年龄
	bool m_bMale; // 性别
	int m_nDuty; // 职务

private:


};