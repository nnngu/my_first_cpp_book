// 引入定义 concurrent_vector 的头文件
#include <concurrent_vector.h>

// ...

// 定义一个可以保存 int 类型数据的并行容器
concurrent_vector<int> cvecInt;

// 使用 paraller_invoke()并行算法，
// 创建两项任务并行地访问并行容器，分别向并行容器中添加自然数和偶数
paraller_invoke(
	[&] {
			for(int n = 0; n < 100; ++n) 
				cvecInt.push_back(n); // 添加自然数
		},
	[&] {
			for(int n = 0; n < 100; ++n)
				cvecInt.push_back(n*2); // 添加偶数
		}
);

// 输出并行容器中所保存的数据的数目
cout<<"并行容器中保存的数据的数目"<<cvecInt.size() << endl;






