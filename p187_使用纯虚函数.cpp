// 使用纯虚函数
// 这样 Human 类就成为了一个抽象类，仅提供接口
class Human
{
public:
	// 声明 BuyTicket() 函数为纯虚函数
	// 它的实现留待派生类来完成
	virtual void BuyTicket() = 0;
private:
};