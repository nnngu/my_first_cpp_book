// 名字空间 Zhangsan
namespace Zhangsan
{
	struct Student
	{
		// ...
	};
	struct Teacher
	{
		// ...
	};
};

// 名字空间 Lisi
namespace Lisi
{
	struct Student
	{
		// ...
	};
};

// 全局名字空间
struct Student
{
	// ...
};




// 引入名字空间 Zhangsan
// 同时默认使用全局名字空间
using namespace Zhangsan;

int main(int argc char* argv[])
{
	// error C2872:"Student":不明确的符号
	// 因为默认名字空间 Zhangsan 和全局名字空间内
	// 都有 Student 的定义，编译器无法确定到底使用哪个定义
	// 这里应该使用::Student 表示全局名字空间中的定义，
	// 或者使用 Zhangsan::Student 表示 Zhangsan 名字空间中的定义
	Student zStudent;

	// 明确的类型，因为只有名字空间 Zhangsan 中有 Teacher 的定义
	Teacher zTeacher;
	// 明确的类型，显式地指定了名字空间为 Lisi
	Lisi::Student lStudent;

	return 0;
}














