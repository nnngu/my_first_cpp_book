// 定义一个函数对象类
// 用于统计容器中所有Student对象的平均身高
class AverageHeight
{
public:
	// 构造函数，对类的成员属性作合理的初始化
	AverageHeight()
		: m_nCount(0), m_nTotalHeight(0) {};

	// 重载函数调用操作符"()"，
	// 在其中完成统计的功能
	void operator () (Student st)	
	{
		// 将当前对象的身高累加到总身高中
		// 这里的m_nTotalHeight记录了上次累加的结果，
		// 这就是函数那失去的记忆
		m_nTotalHeight += st.GetHeight();
		// 增加已经统计过的Student对象的数目
		++m_nCount;
	}

	// 定义类型转换函数
	// 将函数对象转换为 float 类型，直接返回计算结果
	operator float()
	{
		return GetAverageHeight();
	}

	// 接口函数，获得所有统计过的Student对象的平均身高
	float GetAverageHeight()
	{
		if (0 != m_nCount)
		{
			return (float)GetTotal()/GetCount();
		}
	}

	// 获得函数对象类的各个成员属性
	int GetCount()
	{
		return m_nCount;
	}
	int GetTotal()
	{
		return m_nTotalHeight;
	}
	
	// 函数对象类的属性，用来保存函数执行过程中的状态数据
private:
	int m_nCount;			// 记录已经统计过的对象的数目
	int m_nTotalHeight;		// 记录已经统计过的身高总和
};


























