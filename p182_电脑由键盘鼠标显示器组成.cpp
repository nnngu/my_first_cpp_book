// 键盘
class Keyboard
{
public:
	// 接收用户键盘输入
	void Input();
};

// 鼠标
class Mouse
{
public:
	// 鼠标单击
	void Click();
};

// 显示器
class Monitor
{
public:
	// 显示画面
	void Display();
};

// 电脑
class Computer
{
	// 电脑的行为都是由其各个组成部分来负责完成
public:
	// 用键盘、鼠标和显示器组合一台电脑
	Computer(Keyboard* pKeyboard,
			 Mouse* pMouse,
			 Monitor* pMonitor)
	{
		m_pKeyboard = pKeyboard;
		m_pMouse = pMouse;
		m_pMonitor = pMonitor;
	}
	// 键盘负责用户输入
	void Input()
	{
		m_pKeyboard->Input();
	}
	// 鼠标负责用户单击
	void Click()
	{
		m_pMouse->Click();
	}
	// 显示器负责显示画面
	void Display()
	{
		m_pMonitor->Display();
	}

	// 电脑的各个部件
private:
	Keyboard* m_pKeyboard; // 键盘
	Mouse* m_pMouse; // 鼠标
	Monitor* m_pMonitor; // 显示器
};












