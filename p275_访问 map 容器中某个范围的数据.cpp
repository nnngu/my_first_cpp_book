// 定义键的范围
int nFromKey = 1;
int nToKey = 1000;

// 用迭代器表示起始位置和终止位置
map<int, Employee>::iterator itfrom = mapEmployee.lower_bound(nFromKey);
map<int, Employee>::iterator itto = mapEmployee.upper_bound(nToKey);

// 判断是否找到正确的范围
if(mapEmployee.end() != itfrom && mapEmployee.end() != itto)
{
	// 输出范围内的所有数据
	for(map<int,Employee>::iterator itfrom)
}