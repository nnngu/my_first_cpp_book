// 引入程序所需要的头文件
#include <ppl.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

// 使用标准名字空间 std 和并行名字空间 Concurrency
using namespace std;
using namespace Concurrency;

// 记录每条日志的类
class LogMessage
{
public:
	LogMessage(string strMsg)
	{
		// 保存日志内容
		m_strMsg = strMsg;
		// 将当前时间作为日志时间
		m_tmTime = time(NULL);
	}
	// 获取日志内容和日志时间的接口函数
	string getMsg()
	{
		return m_strMsg;
	}

	time_t getLogTime()
	{
		return m_tmTime;
	}
	// 因为需要对容器中的日志进行排序，
	// 所以这里重载日志类的"<"运算符
	bool operator < (LogMessage m)
	{
		// 以日志的时间先后顺序排序
		return m_tmTime < m.getLogTime() ? true : false;
	}
private:
	// 日志类的属性
	string m_strMsg; // 日志内容
	time_t m_tmTime; // 日志时间
};

// 日志系统类
// 由这个类进行日志的记录和输出
class LogSystem
{
public:
	// 记录日志的成员函数
	void log(string strLog)
	{
		// 将日志保存到容器中
		m_vecMsg.push_back(LogMessage(strLog));
	}
	// 将另外一个日志系统的日志合并到
	// 当前日志系统的日志中
	LogSystem combine(const LogSystem& other)
	{
		// 获取另外一个日志系统保存日志记录的容器
		vector<LogMessage> omsg = other.getMsg();

		// 合并两个容器
		for(auto it = omsg.begin(); it != omsg.end(); ++it)
			m_vecMsg.push_back(*it);

		// 对合并后的日志记录重新排序
		sort(m_vecMsg.begin(), m_vecMsg.end());

		// 返回合并后的日志系统
		return *this;
	}

	// 获得保存日志记录的 vector 容器
	vector<LogMessage> getMsg() const
	{
		return m_vecMsg;
	}

	// 将日志输出到屏幕和日志文件
	// 输出到屏幕
	void output()
	{
		// 利用 for_each()算法和 Lambda 表达式，
		// 逐个输出 vector 容器中的日志记录
		for_each(m_vecMsg.begin(), m_vecMsg.end(), 
			[](LogMessage msg) {
				time_t tm = msg.getLogTime();
				cout<<ctime(&tm)<<msg.getMsg()<<endl;
			});
	}

	// 输出到日志文件
	void output(string strFileName)
	{
		// 创建并打开日志文件
		ofstream of(strFileName);

		if (of.is_open())
		{
			// 将日志记录输出到文件
			for_each(m_vecMsg.begin(), m_vecMsg.end(),
				[&](LogMessage msg) {
					time_t tm = msg.getLogTime();
					of<<ctime(&tm)<<msg.getMsg()<<endl;
				});
			// 关闭文件
			of.close();
		}
	}

private:
	// 保存所有日志记录的 vector 容器
	vector<LogMessage> m_vecMsg;
};

// 用于合并日志系统并行对象的函数对象
class combineLog
{
public:
	// 重载"()"操作符，它接受两个需要合并的日志系统对象，
	// 然后返回合并完成后的日志系统对象
	LogSystem operator () (LogSystem& a, LogSystem& b)
	{
		
	}
}

















