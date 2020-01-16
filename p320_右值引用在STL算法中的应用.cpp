// 一个管理内存资源的类
class MemoryBlock
{
public:
	// 构造函数，申请内存资源
	MemoryBlock(size_t length)
		: _length(length), _data(new int[length])
	{
		cout<<"创建对象，长度 = "<<_length<<"，申请资源"<<endl;
	}

	// 析构函数，释放内存资源
	~MemoryBlock()
	{
		cout<<"销毁对象，长度 = "<<_length<<"，";
		if (_data != NULL)
		{
			cout<<"释放资源";
			delete[] _data; // 释放资源
		}
		cout<<endl;
	}

	// 普通的赋值构造函数，接收一个左值引用为参数
	MemoryBlock(const MemoryBlock& other)
		: _length(other._length), _data(new int[other._length])
	{
		cout<<"复制构造函数 长度 = "<< other._length << "，申请资源并复制资源到目标资源"<<endl;
		// 复制源对象的内存资源到目标对象的内存资源
		copy(other._data, other._data + _length, _data);
	}

	// 普通的赋值操作符"="，接受一个左值引用为参数
	MemoryBlock& operator = (const MemoryBlock& other)
	{
		if (this != &other)
		{
			cout<<"赋值操作符。长度 = "
				<<other._length
				<<"，释放已有资源。重新申请资源并复制资源到目标资源"<<endl;

			// 释放已有资源
			delete[] _data;

			_length = other._length;
			// 重新申请内存资源
			_data = new int[_length];
			// 复制源对象的内存资源到目标对象的内存资源
			copy(other._data, other._data + _length, _data);
		}
		// 返回重新申请内存资源后的对象
		return *this;
	}

	// 获取内存资源长度
	size_t Length() const
	{
		return _length;
	}

private:
	size_t _length; // 内存资源长度
	int* _data; // 对象的内存资源
}



// 现在，可以使用swap()这个通用算法来交换两个MemoryBlock对象
// 创建两个MemoryBlock对象
MemoryBlock a(3);
MemoryBlock b(6);
// 使用swap()算法交换两个对象
swap(a, b);



























