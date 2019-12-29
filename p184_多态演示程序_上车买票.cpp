// 上车买票的演示程序
class Human
{
public:
	void BuyTicket()
	{
		cout<<"人买票。"<<endl;
	}
private:
};

// 从“人”派生两个类，分别表示老师和学生
class Teacher : public Human
{

};
class Student : public Human
{

};

// 在主函数中模拟上车买票的场景
int main(int argc, char* argv[])
{
	// 声明一个基类的指针
	Human* pPassenger = NULL;
	// 车上上来一位老师
	pPassenger = new Teacher();
	// 老师买票
	pPassenger->BuyTicket();
	delete pPassenger;

	// 车上上来一位学生
	pPassenger = new Student();
	// 学生买票
	pPassenger->BuyTicket();
	delete pPassenger;

	pPassenger = NULL;

	return 0;
}