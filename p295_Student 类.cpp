// 学生类，描述属性和行为
class Student
{
public:
	// 默认构造函数
	Student()
	{
		m_nHeight = 0;
		m_strName = "";
	};
	// 接受姓名和身高作为参数的构造函数，
	// 可以设定对象的姓名和身高
	Student(string strName, int nHeight)
		: m_strName(strName), m_nHeight(nHeight)
	{};
	// 对象的行为
public:
	// 获得身高
	int GetHeight()
	{
		return m_nHeight;
	}
	string GetName()
	{
		return m_strName;
	}
	// 向屏幕输出，报告名字和身高
	void ReportName()
	{
		cout<<"姓名："<<m_strName<<"\t 身高："<<endl;
	}
public:
	bool operator == (Student st)
	{
		return m_strName == st.GetName() && m_nHeight == st.GetHeight();
	}
	// 对象的属性
private:
	string m_strName;
	int m_nHeight;
};











