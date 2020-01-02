// 计算数组中所有数据之和的函数
// 其中，参数pArray和nArrayCont分别表示数组的首地址和数组元素的个数，
// 用于向函数传入一个数组
// nSum表示最后求得的数组所有数据之和，用于从函数中传出计算结果
void SumArray(int* pArray, int nArrayCount, int* nSum)
{
	*nSum = 0;

	// 循环遍历整个数组
	for (int i = 0; i < nArrayCount; ++i)
	{
		// 通过指针访问数组元素，
		// 同时通过指针访问保存结果的变量，
		// 实际上也就是对主函数中nArraySum变量的访问
		// 将结果保存到nArraySum中，传出结果
		*nSum += *pArray;
		pArray++; // 指针加运算，访问数组中的下一个元素
	}
}

int main(int argc, char* argv[])
{
	// 定义保存结果的变量和数组
	int nArraySum;
	int nArray[5] = {1,2,3,4,5};

	// 使用数组的地址nArray传入数组，
	// 使用指向变量nArraySum的指针来接收计算结果
	SumArray(nArray, 5, &nArraySum);

	// 运算结果已经保存在nArraySum中，输出运算结果
	cout<<"数组中所有数据之和是："<<nArraySum<<endl;

	return 0;
}