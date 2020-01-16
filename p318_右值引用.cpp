// 例如一个函数的返回值就是右值。 可以通过运算符"&&"来声明一个右值引用，
// 而原先在C++语言中使用运算符"&"声明的引用现在称为左值引用

// 返回一个临时的int类型的数值
// 这个函数的返回值就是右值
int CreateInt(int nInt)
{
	return int(nInt);
}

// 定义一个int类型的变量，这个变量就是左值
int nInt;
// 定义一个左值引用，将它指向一个左值
int& lrefInt = nInt;
// 定义一个右值引用，将它指向一个右值
int&& rrefInt = CreateInt(4);




// 左值引用不可以绑定到右值，否则将产生编译错误
int& lrefInt = CreateInt(4);
// 右值引用也不可以绑定到左值
int&& rrefInt = nInt;



// 绑定完成之后，左值引用和右值引用的使用就没有区别了
// 对右值引用赋值
rrefInt = 1;
// 利用右值引用对左值引用赋值
lrefInt = rrefInt;




// 例如：从函数中返回一个临时变量，在函数返回后，这个临时变量就被当成废物释放掉。
// 而右值引用的引入，可以将一个引用直接指向这个右值，从而实现废物的再利用。
// 例如：利用函数创建并返回一个类的对象
MemoryBlock GreateBlock(size_t nSize)
{
	return MemoryBlock(nSize);
}
// 利用函数返回值对变量进行赋值
MemoryBlock block = GreateBlock(703);


















