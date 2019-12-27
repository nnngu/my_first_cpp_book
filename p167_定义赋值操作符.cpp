// 定义赋值操作符“=”的电脑类
class Computer
{
public:
	// 自定义的赋值操作符
	Computer& operator = (const Computer& com)
	{
		// 判断是否是自己给自己赋值
		// 如果是自赋值，则直接返回对象本身
		if (this == &com)
		{
			return *this;
		}
		// 直接完成对象型属性的赋值
		m_strModel = com.m_strModel;
		// 使用"new"创建旧有对象的副本，完成指针型属性的赋值
		m_pKeyboard = new Keyboard(*(com.GetKeyboard()));
	}
	// ...
};