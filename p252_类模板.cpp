// 定义一个用于比较两个数的类模板
template <typename T>
class compare
{
public:
	// 构造函数，实际上它相当于一个函数模板
	compare(T a, T b)
		:m_a(a), m_b(b)
	{}

	// 比较类的接口函数
	// 类模板中的函数都类似于函数模板
public:
	// 返回两个数中的较小值
	T min()
	{
		return m_a > m_b? m_b:m_a;
	}
	// 返回两个数中的较大值
	T max()
	{
		return m_a > m_b? m_a:m_b;
	}
	// 类模板的成员变量，其类型将根据类模板
	// 实例化时的具体类型而定
private:
	T m_a;
	T m_b;		
};


// 类模板的调用
int main(int argc, char* argv[])
{
	// 用 int 数据类型对类模板进行实例化
	// 比较两个整数的大小
	compare<int> intcompare(2,3);
	wcout<<intcompare.max()<<"大于"<<intcompare.min()<<endl;

	// 用 string 数据类型对类模板进行实例化
	// 比较两个字符串的大小
	compare<string> stringcompare("A", "B");
	cout<<stringcompare.max()<<"大于"<<stringcompare.min()<<endl;

	return 0;
}



















