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
	
}