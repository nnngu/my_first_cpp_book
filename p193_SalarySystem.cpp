#include "SalarySystem.h"

// 构造函数，对类的属性进行初始化
SalarySystem::SalarySystem(void)
{
	m_nCount = 0; // 将员工总数初始化为0
}

// 析构函数、清理资源、私房内存
SalarySystem::~SalarySystem(void)
{
	for (int i = 0; i < m_nCount; ++i)
	{
		Emplyee* pEmplyee = m_arrEmplyee[i];
		// 销毁对象，释放内存
		delete pEmplyee;
		// 将相应指针设置为NULL，不可访问
		m_arrEmplyee[i] = NULL;
	}
}

// 获取用户输入
void SalarySystem::InputEmplyee(void)
{
	// 显示提示信息
	cout<<"请输入员工信息\n"<<
	"格式：员工姓名 入职时间 是否为经理级别\n"<<
	"例如：ChenLiangqiao 4 0\n"<<
	"输入end表示输入结束"<<endl;
	// 局部变量，用于接收用户输入
	string strName = "";
	int nYears = 0;
	bool bManager = false;
	int nIndex = 0;

	// 开始循环接收用户输入的用户数据
	while(nIndex < MAX_COUNT)
	{
		// 清空输入流
		cin.clear();
		// 从输入流读取用户输入的数据
		cin>>strName>>nYears>>bManager;
		// 判断是否输入结束，如果结束，则跳出循环
		if ("end" == strName)
		{
			break;
		}
		// 根据用户输入创建相应的员工对象
		Emplyee* pEmplyee = NULL;
		if (bManager)
		{
			// 如果用户输入的是一个经理，则创建Manager对象
			pEmplyee = new Manager(strName, nYears);
		}
		else
		{
			// 如果用户输入的是一个普通员工，则创建Worker对象
			pEmplyee = new Worker(strName, nYears);
		}
		// 将创建的员工对象保存到数组中
		m_arrEmplyee[nIndex] = pEmplyee;

		++nIndex;
	}
	// 保存输入的员工总数
	m_nCount = nIndex;
}

// 显示输出工资信息
void SalarySystem::DisplaySalary(void)
{
	// 显示工资信息
	cout<<"工资管理系统"<<endl;
	cout<<"当前员工总数："<<m_nCount<<
		"\n平均工资是："<<GetAverSalary()<<endl;
	cout<<"员工具体工资信息如下："<<endl;

	for (int i = 0; i < m_nCount; ++i)
	{
		Emplyee* pEmplyee = m_arrEmplyee[i];
		cout<<pEmplyee->GetName()<<"\t"<<
			pEmplyee->GetAverSalary()<<endl;
	}
}

// 计算平均工资
double SalarySystem::GetAverSalary()
{
	int nTotal = 0;
	// 计算工资总额
	for (int i = 0; i < m_nCount; ++i)
	{
		Emplyee* pEmplyee = m_arrEmplyee[i];
		nTotal += pEmplyee->GetSalary();
	}
	// 返回平均工资
	return (double)nTotal / (m_nCount);
}













