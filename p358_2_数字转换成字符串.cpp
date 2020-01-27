// 引入定义 stringstream 的头文件
#include <sstream>
#include <iomanip>

// ...
// 需要比较的两个浮点数大小
float fA = 1.19830706;
float fB = 1.19830703;
// 定义一个 stringstream 对象
stringstream sstr;

// 设定浮点数的输出精度，并将 fA 输出到 stringstream 对象
sstr<<fixed<<setprecision(8)<<fA;
string strA;
// 将浮点数 fA 转换为字符串 strA
sstr>>strA;
// 清空 stringstream 对象，开始第二次转换
sstr.clear();
sstr<<fB;
string strB;
sstr>>strB;
// 通过转换后的字符串比较两个浮点数的大小
if (strA == strB)
{
	cout<<fA<<"等于"<<fB<<endl;
}






// 使用 stringstream 类还可以将字符串转换为数字，例如：
stringstream sstr;
// 定义一个需要转换的表示数字的字符串 strA
string strA("1.1983");
// 将字符串输出到 stringstream 对象
sstr<<strA;
// 将字符串 strA 转换为浮点数 fA
float fA = 0;
sstr>>fA;














