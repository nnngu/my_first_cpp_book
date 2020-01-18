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
	
}

















