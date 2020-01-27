// 为了实现链式操作，将目标地址返回
char * strcpy(char *strDest, const char *strSrc)
{
	// 对源地址和目的地址加非 0 断言，判断其有效性
	assert( (strDest != NULL) && (strSrc != NULL) );
	// 保存目标地址返回
	char *address = strDest;
	// 逐个复制字符串数组中的数据，直到字符串结束
	while( (*strDest++ = *strSrc++) != '\0' );

	// 返回目标地址
	return address;
}




