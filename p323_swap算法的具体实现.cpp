// swap()算法的具体实现
template <class T> void swap(T& a, T& b)
{
	T tmp(move(a)); // 对象a被复制到对象tmp
	a = move(b); // 对象b被复制到对象a
	b = move(tmp); // 对象tmp被复制到对象b
}









