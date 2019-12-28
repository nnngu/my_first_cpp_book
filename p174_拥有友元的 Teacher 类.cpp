// 拥有友元的 Teacher 类
class Teacher
{
	// 声明 TaxationDep 类为 Teacher 类的友元类
	friend class TaxationDep;
	// 声明 AdjustSalary() 函数为 Teacher 类的友元函数
	friend int AdjustSalary(Teacher& teacher);

protected:
	int m_nSalary;
}

// 友元函数
int AdjustSalary(Teacher& teacher)
{
	return teacher.m_nSalary + 299;
}

// 友元类
class TaxationDep
{
public:
	int CheckSalary(Teacher& teacher)
	{
		return teacher.m_nSalary;
	}
}