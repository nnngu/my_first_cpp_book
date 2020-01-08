// 使用数组来存储大量的对象
// 定义数组的容量
const int MAX_COUNT = 1000;
// 定义保存Employee对象的数组
Employee arrEmployee[MAX_COUNT];



// 使用vector
#include <vector> // 引入vector所在的头文件
using namespace std; // 使用vector所在的名字空间
// ...
// 先使用Employee类实例化vector类模板，
// 然后创建实例对象vecEmployee
vector<Employee> vecEmployee;



// 利用构造函数指定默认数据以及默认数据的个数
Employee employee;
// 创建4个employee对象的副本保存到容器中
std::vector<Employee> vecEmployee(4, employee);
// 使用Employee类的默认构造函数创建4个对象保存到容器中
vector<Employee> vecEmployee(4);



// 为vector容器预留1000个元素的位置
vecEmployee.reserve(1000);



// vector容器保存结构体数据
// 将表示人的姓名、年龄、体重的数据打包成Human结构体
struct Human
{
	string strName;
	unsigned int nAge;
	double fWeight;
};
// 保存Human结构体的vector容器
// 也就相当于保存了人的姓名、年龄、体重多组数据
vector<Human> vecHuman;




















