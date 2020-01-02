// 这是一个指针数组，其中保存各个常量字符串的首地址
char* arrMonth[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
					"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
// 定义一个指向指针的指针
// 这里数组的首地址arrMonth就是数组的第一个元素，
// 也就是指向第一个字符串"Jan"的指针
char** pMonth = arrMonth;
// 获取用户输入
int nIndex;
cout<<"请输入月份对应的数字："<<endl;
cin>>nIndex;
// 对指针进行运算，使其指向相应的数组元素，
// 也就是相应的字符串指针
char* pCurMonth = *(pMonth + (nIndex - 1));
cout<<"对应的月份是："<<pCurMonth<<endl;