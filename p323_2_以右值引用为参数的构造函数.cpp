// 移动构造函数
// 接受右值引用为参数，将参数引用的对象移动作为要创建的目标对象
MemoryBlock(MemoryBlock&& other)
	: _data(NULL), _length(0)
{
	cout<<"右值引用的构造函数，长度 = "
		<<other._length<<"，将资源指向已有资源"<<endl;

	// 直接使用源对象的资源
	_data = other._data;
	_length = other._length;

	// 因为源对象是一个右值引用，
	// 所以将源对象的资源指针设置为空
	// 也就是将源对象清空，源对象不再可用
	other._data = NULL;
	other._length = 0;
}

// 移动赋值操作符"="
// 接受右值引用为参数，直接将右值引用所指向的对象作为赋值完成后的对象
MemoryBlock& oprator = (MemoryBlock&& other)
{
	if (this != &other)
	{
		cout<<"右值引用赋值操作符，长度 = "
			<<other._length<<endl;
		// 释放已有资源
		if (NULL != _data)
		{
			cout<<"，释放已有资源，"<<endl;
			delete[] _data;
		}
		// 将资源指针直接指向源对象的资源
		_data = other._data;
		_length = other._length;

		// 因为源对象是一个右值，
		// 所以将源对象的资源指针设置为NULL
		// 源对象不再可用
		other._data = NULL;
		other._length = 0;
	}
	return *this;
}








