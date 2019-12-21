// 判断一个数是不是偶数
// 如果是偶数，则返回 true，否则返回 false
bool isEven(int i)
{
	return i % 2 == 0;
}
// 表示某个数是否是偶数
bool bEven;
// 总的偶数个数
int nEvenCount = 0;
// 统计范围
int nFrom = 0;
int nTo = 100;
// 统计范围内的所有数
for(int i = nFrom; i<=nTo; ++i)
{
	// 调用 isEven() 函数判断当前数值
	// 如果是偶数，则返回 true，否则返回 false
	bEven = isEven(i);
	nEvenCount += bEven;
}
// 输出结果
cout<<nFrom<<"到"<<nTo<<"之间的偶数个数为："
	<<nEvenCount<<endl;