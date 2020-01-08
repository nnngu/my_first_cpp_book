// 将会保存到容器中的员工类
class Employee
{
public:
	// 实现拷贝构造函数
	Employee(const Employee& rSource)
	{
		// 利用赋值操作符实现对象的拷贝
		*this = rSource;
	};

	// 实现赋值操作符，这里对类的每个属性都进行了合理的初始化
	Employee& operator = (const Employee& rSource)
	{
		m_nSalary = rSource.m_nSalary;
		m_strName = rSource.m_strName;

		return *this;
	}
	// 类的属性
private:
	int m_nSalary;
	string m_strName;
};









