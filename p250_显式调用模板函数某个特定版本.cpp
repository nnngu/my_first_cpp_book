// 显式地指明 mymax()模板函数的类型参数是 string 类型，
// 它将调用 mymax() 函数的 string 类型版本
string strMax = mymax<string>("Chen", "Jia");
cout<<"较大的字符串是"<<strMax<<endl;