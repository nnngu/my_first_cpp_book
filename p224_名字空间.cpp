// 定义一个名字空间的语法
namespace 名字空间名
{
	// 名字空间内的声明和定义
};


// 例子：
// 名字空间 Zhangsan
namespace Zhangsan
{
	// 名字空间Zhangsan中的Student数据结构
	struct Student
	{
		int nIndex;
		int nAge;
	};
};

// 名字空间Lisi
namespace Lisi
{
	// 名字空间Lisi中的Student数据结构
	struct Student
	{
		int nIndex;
		string strName;
	};
};

// 全局名字空间
// 如果没有说明在哪一个具体的名字空间，则默认在全局名字空间
struct Student // 全局名字空间中的Student数据结构
{
	int nIndex;
	bool bMale;
}


// 访问名字空间里的内容
// 声明一个类型为 Zhangsan::Student 的变量
Zhangsan::Student zStudent;
zStudent.nAge = 14;
// 声明一个类型为Lisi::Student的变量
List::Student lStudent;
lStudent.strName = "Chen Liangqiao";
// 声明一个类型为::Student的变量
// 结构体::Student等同于Student
::Student gStudent;
gStudent.bMale = true;

















