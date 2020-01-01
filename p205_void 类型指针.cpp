int* pInt;
float* pFloat;
pInt = pFloat; // 直接赋值会产生编译错误
pInt = (int*)pFloat; // 强制类型转换后进行赋值


void* pVoid;
int* pInt;
pVoid = pInt; // 任何其他类型的指针都可以直接赋值给 void 类型指针


void* pVoid;
float* pFloat;
pFloat = (float*)pVoid; // void 类型指针想赋值给其他类型指针，需要强制类型转换



// 如果函数可以接受任何类型的指针，那么应该将其参数声明为 void 指针。例如：
void * memcpy(void * dest, const void * src, size_t len);




