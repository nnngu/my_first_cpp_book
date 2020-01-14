/*
算术操作:
	加(plus)、减(minus)、乘(multiplies)、除(divides)、
	取余(modules)和取负(negate)
比较操作：
	等于(equal_to)、不等于(not_equal_to)、大于(greater)、
	小于(less)、大于等于(greater_equal)、小于等于(less_equal)
逻辑操作：
	逻辑与(logical_and)、逻辑或(logical_or)、逻辑非(logical_not)
*/


// 使用比较操作对象来统计容器中大于某个值的数据个数
int nCount = count_if(vecScore.begin(), vecScore.end(),
					bind2nd(greater<int>(), 60));