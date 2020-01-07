// 隐式实例化模板类 compare<int>
compare<int> intcompare(2,3);

// 显式实例化 int 版本的 mymax 模板函数
template int mymax<int>(int, int);

// 当编译器推断出模板参数时，模板参数可以省略
template int mymax(int, int);

// 显式实例化模板类 compare<int>;
template class compare<int>; // 显式实例化类时，所有的类成员也将实例化




