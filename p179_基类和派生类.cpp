// 定义基类 Human
class Human
{
	// 人类共有的行为
public:
	void Walk();
	void Talk();

	// 人类共有的属性
protected:
	string m_strName;
	int m_nAge;
	bool m_bMale;

private:
};

// public 继承方式继承 Human 类
class Teacher : public Human
{
	// 在子类中添加老师特有的行为
public:
	void PrepareLesson(); // 备课
	void TeachLesson(); // 上课
	void ReviewHomework(); // 批改作业
	// 在子类中添加老师特有的属性
protected:
	int m_nDuty; // 职务

private:
};

// public 继承方式继承 Human 类
class Student : public Human
{
	// 在子类中添加学生特有的行为
 public:
 	void AttendClass(); // 上课
 	void DoHomework(); // 做家庭作业
 	// 在子类中添加学生特有的属性
 protected:
 	int m_nScore;
 private:
};

// public 继承方式继承 Student 类
class Pupil : public Student
{
	// 在子类中添加小学生特有的行为
 public:
 	void AttendClass(); // 上课
 	void DoHomework(); // 做家庭作业
 protected:
 private:
};








