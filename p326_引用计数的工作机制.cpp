#include "stdafx.h"
// shared_ptr定义在头文件<memory>中
#include <memory>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	shared_ptr<int> pFirst(new int);
	// 这时，只有 pFirst 这个指针指向这块int类型的内存，
	// 所以这时的引用计数是 1
	cout<<"当前引用计数："<<pFirst.use_count()<<endl;
	{
		// 创建另外一个shared_ptr，并用pFirst对其进行赋值，
		// 让它们指向同一块内存资源
		shared_ptr<int> pCopy = pFirst;
		// 因为pFirst和pCopy都指向这一块内存资源，
		// 所以这一资源的引用计数增加为2
		cout<<"当前引用计数："<<pFirst.use_count()<<endl;
	}
	// 当超出pCopy的可见域，pCopy结束其生命周期后，
	// 指向这一内存资源的只有pFirst指针，所以引用计数减为1
	cout<<"当前引用计数："<<pFirst.use_count()<<endl;

	// 当程序最终结束执行返回，pFirst指针也结束其生命周期后，
	// 从此没有任何指针指向此内存资源，引用计数减为0，内存资源自动得到释放
	return 0;
}













