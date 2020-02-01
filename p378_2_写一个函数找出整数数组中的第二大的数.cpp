/*
题34 写一个函数找出整数数组中第二大的数(微软面试题)
*/

// 定义最小的整数
const int MINNUMBER = -32767;
// 寻找数组中第二大的数
int find_sec_max(int data[], int count)
{
	// 假定数组中的第一个数为最大的数
	int maxnumber = data[0];
	// 假定第二大数为最小的整数
	int sec_max = MINNUMBER;
	// 循环遍历数组
	for (int i = 1; i < count; i++)
	{
		// 如果当前数大于最大数
		if (data[i] > maxnumber)
		{
			// 原先的最大数成为第二大数
			sec_max = maxnumber;
			// 当前数成为最大数
			maxnumber = data[i];
		}
		else // 当前数小于最大数
		{
			// 继续判断当前数是否大于第二大数
			if (data[i] > sec_max)
			{
				sec_max = data[i]; // 如果大于，则当前数成为第二大数
			}
		}
	}

	// 返回第二大数
	return sec_max;
}





