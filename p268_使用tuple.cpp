// 引入定义tuple的头文件
#include<tuple>
using namespace std;

// tuple<string, unsigned int, double>已经是一种新的数据类型
// 它有三个分数据，分别表示人的姓名(string)、年龄(int)和体重(double)
// 使用这种新的数据类型定义一个变量huChen
tuple<string, unsigned int, double> huChen;
// 使用make_tuple()函数对变量huChen赋值
huChen = make_tuple("ChenLiangqiao", 28, 66.3);
// 或者更简单地，利用typedef为这种新的数据类型定义一个简短的类型名
typedef tuple<string, unsigned int, double> Human;
// 然后使用新的数据类型名定义变量，利用tuple的构造函数为变量赋初始值
Human huJia("Jiawei", 23, 56.3);
// 使用新的数据类型作为vector容器实例化参数，
// 定义一个可以保存这种数据类型的vector容器
vector<Human> vecHumans;
// 将数据保存到vector容器中
vecHumans.push_back(huChen);
vecHumans.push_back(huJia);



// 获取tuple数据组变量huChen中的第一个数据姓名
cout<<"姓名："<<get<0>(huChen)<<endl;
// 将huChen中的第二个数据年龄加1，表示又增长了1岁
get<1>(huChen) += 1;
cout<<"年龄："<<get<1>(huChen)<<endl;
// 获取huChen中的第三个数据体重
cout<<"体重："<<get<2>(huChen)<<endl;
// 定义用于保存各个分数据的变量
string strName;
unsigned int nAge;
double fWeight;
// 获取huChen中的各个数据，并保存到各个分数据的变量中
tie(strName, nAge, fWeight) = huChen;



















