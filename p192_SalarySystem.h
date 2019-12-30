// SalarySystem.h 头文件

// 定义一个常量表示最大员工数
const int MAX_COUNT = 1000;

// 工资管理系统
class SalarySystem
{
public:
	// 构造函数和析构函数
	SalarySystem(void);
	~SalarySystem(void);

// 工资管理系统的行为
public:
	// 输入员工信息
	void InputEmplyee(void);
	// 显示员工信息
	void DisplaySalary(void);
	// 计算获得平均工资
	double GetAverSalary(void);

// 工资管理系统的属性
// 因为这些属性仅供工资管理系统自己使用，所以访问级别为private
private:
	// 当前员工总数
	int m_nCount;	
	// 用于保存所有员工对象
	// 这里将员工对象的指针保存到数组中，通过指针访问员工对象
	Emplyee* m_arrEmplyee[MAX_COUNT];
};