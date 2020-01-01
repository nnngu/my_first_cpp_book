// this 指针用来返回指向对象本身的指针以实现
// 对象的链式引用。

// 描述一个点位置的类
class Point
{
public:
	Point(int x, int y)
		: m_nX(x), m_nY(y)
	{};
	// 重载赋值操作符“=”，进行赋值操作
	void operator = (Point& pt)
	{
		// 判断传递进来的参数是否是这个对象自身
		// 如果是同一个对象，则不进行赋值操作
		if (this != &pt)
		{
			m_nX = pt.m_nX;
			m_nY = pt.m_nY;
		}
	}
	// 移动点的位置
	Point& Move(int x, int y)
	{
		m_nX += x;
		m_nY += y;
		// 返回对象本身，这样可以利用函数返回值进行链式引用
		return *this;
	}
private:
	int m_nX;
	int m_nY;
};




// 使用 this 指针之后，Point 类腰也不酸了，背也不疼了，爬坡更有劲了
Point pt1(2,4);
Point pt2(0,0);
// 自己赋值给自己，这不明摆着瞎耽误工夫吗?
// this 指针是不答应的
pt1 = pt1;
// 移动一下，再移动一下
// 通过返回对象本身实现对象的链式引用
pt1.Move(1,1).Move(2,4);








