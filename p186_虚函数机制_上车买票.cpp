// 经过虚函数机制改写后的“上车买票”程序

class Human
{
public:
	// virtual 表示其派生类可以对这个虚函数进行重新定义
	virtual void BuyTicket()
	{
		cout<<"人买票。"<<endl;
	}
private:

};

// 在派生类中对虚函数重新定义
class Teachet : public Human
{
public:
	// 根据实际情况重新定义基类的虚函数
	virtual void BuyTicket()
	{
		cout<<"老师投币买票。"<<endl;
	}
};

class Student : public Human
{
public:
	// 根据实际情况重新定义基类的虚函数
	virtual void BuyTicket()
	{
		cout<<"学生刷卡买票。"<<endl;
	}
};





