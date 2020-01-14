// 模板函数对象
template <typename T>
class mymax
{
public:
	// 重载"()"操作符，在这个操作符中实现具体功能
	// 这使得一个普通类成为一个函数对象
	T operator ()(T a, T b)
	{
		return a > b ? a : b;
	}
};





// 利用函数对象定义函数模板
// 执行具体的比较操作
template <typename T>
T compare(T a, T b, mymax<T>& op)
{
	// 利用传递进来的函数对象进行具体的比较操作
	return op(a, b);
}

int main(int argc, char* argv[])
{
	// 定义一个int类型的函数对象，它可以比较两个int类型的数
	// 并返回较大的数
	mymax<int> intmax;
	// 直接使用函数对象完成比较操作
	int nMax = intmax(3,4);
	// 将函数对象作为参数传递给其他函数，
	// 在其他函数中完成对函数对象的使用
	nMax = compare(2,3,intmax);
	return 0;
}









