// 利用模板特化，实现特定类型的 string 的模板函数
template <>
string mymax<string>(const string a, const string b)
{
	return a.length() > b.length()? a : b;
}


// 默认情况下，调用 mymax<char*> 版本，
// 比较字符串的字符，较大的字符串是"Jia"
string strMax = mymax("Chen", "Jia");
cout<<"使用普通版本，较大的字符串是"<<strMax<<endl;

// 显式指明模板参数类型，调用模板特化后的 mymax<string>版本，
// 比较字符串的长度，较长的字符串是"Chen"
strMax = mymax<string>("Chen", "Jia");
cout<<"使用模板特化版本，较长的字符串是"<<strMax<<endl;



// 类模板的声明形式跟函数模板类似，其语法格式如下：
template <typename 标识符>
 class 类名
 {
 	// 类的定义
 }













