// 类中有纯虚函数，这个类就是抽象类。

// 如果某个类从抽象类派生，
// 那么它必须实现其中的纯虚函数才能成为一个实体类，
// 否则它将继续保持抽象类的特征。

class Student : public Human
{
public:
	// 实现基类中的纯虚函数，让 Student 类成为一个实体类
	virtual void BuyTicket()
	{
		cout<<"学生刷卡买票。"<<endl;
	}
};
