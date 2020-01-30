// 声明运算符"<<"为 LogMessage 类的友元
class LogMessage
{
	friend ostream& operator << (ostream& o, const LogMessage& msg);
	// ...
};

// 重载"<<"运算符，实现 LogMessage 类的输出
ostream& operator<< (ostream& o, const LogMessage& msg)
{
	// 输出 LogMessage 对象的成员属性
	time_t tm = msg.m_tmTime;
	o<<ctime(&tm)<<msg.m_strMsg<<endl;

	// 返回输出流对象
	return o;
}

/*
	重载接受 LogMessage 对象的"<<"运算符之后，输出 ThreadLog 类中的日志
将更加简单。
*/
class ThreadLog
{
	// ...
	// 将 ThreadLog 中保存的所有日志输出到文件
	void output(string strFileName)
	{
		ofstream of(strFileName);

		if(of.is_open())
		{
			// 使用 copy()算法及重载之后的"<<"运算符，
			// 将 m_vecMsg 容器中的所有日志记录 LogMessage 对象输出到文件
			copy(m_vecMsg.begin(), m_vecMsg.end(), 
				ostream_iterator<LogMessage>(of, ""));

			of.close();
		}
	}
};

















