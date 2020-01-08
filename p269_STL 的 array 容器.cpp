// 引入定义 array 容器的头文件
#include <array>
using namespace std;
// 定义一个只能保存 12 个 string 数据元素的 array 容器
array<string, 12> arrMonths;
// 对容器中的数据元素进行赋值
arrMonths[0] = "Jan";
arrMonths[1] = "Feb";
// ...
arrMonths[11] = "Dec";

// 输出 array 容器中的所有数据
for(array<string, 12>::iterator it = arrMonths.begin();
	it != arrMonths.end(); ++it)
{
	// 使用迭代器访问 array 容器中的数据
	cout<<*it<<endl;
}