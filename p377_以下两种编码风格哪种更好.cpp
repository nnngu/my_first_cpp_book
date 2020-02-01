/*
题32 以下两种编码风格，哪一种更好？
*/

/*
第一种
*/
// 获取姓名
void GetName(Human* pHuman)
{
	// 判断参数 pHuman 是否有效
	if (nullptr != pHuman)
	{
		return pHuman->GetName();
	}
	return ""; // 返回默认值
}


/*
第二种
*/
// 获取姓名
void get_name(human *phuman)
{
	if (phuman != nullptr)
	{
		return phuman->get_name();
	}
	return "";
}


/*
	我们不要妄图去制定一种"最好的"编码规范，只能结合自己的项目实际，同时参照现在流行的
编码规范，采纳其优点，摒弃其缺点，制定出一种"最适合"的编码规范，并且在项目实践中认真严格
地执行，这就是"最好的"编码规范。
*/




















