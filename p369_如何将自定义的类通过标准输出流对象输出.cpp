/*
如何将自定义的类通过标准输出流对象输出？
	C++语言中的基本数据类型，比如 int、string 等，都可以通过标准输出流对象 cout 直接输出到
屏幕，这是因为标准库重载了可以接受 int 对象的"<<"运算符。同理，通过重载"<<"运算符，自定义的
类也可以通过标准输出流对象直接输出。至于输入运算符">>"，也是同样的道理。例如：
*/
// 在需要输入/输出的类中定义"<<"和">>"运算符为友元
// 这样，在这两个运算符中就可以直接访问这个类的成员属性
class Student
{
	// 声明"<<"和">>"运算符为友元
	friend ostream& operator<< (ostream& o, const Student& st);
	friend istream& operator>> (istream& i, Student& st);
	// ...

private:
	string m_strName; // 需要输入/输出的成员属性
};

// 重载"<<"运算符，实现 Student 类的输出
ostream& operator<< (ostream& o, const Student& st)
{
	// 输出 Student 对象的成员属性
	return o << st.m_strName;
}
// 重载">>"运算符，实现 Student 类的输入
istream& operator>> (istream& i, Student& st)
{
	// 输入 Student 对象的成员属性
	return i >> st.m_strName;
}

int main(int argc, char* argv[])
{
	Student stChen;
	// 从屏幕输入 Student 对象
	cin>>stChen;
	// 将 Student 对象输出到屏幕
	cout<<stChen<<endl;
	return 0;
}



















