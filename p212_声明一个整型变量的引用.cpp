// 首先定义一个整型变量
int nIntValue = 1;
// 定义一个整形引用并将它跟整形变量关联起来
int& rIntValue = nIntValue;

// 对变量引用的操作都相当于操作变量本身

// 通过变量直接修改变量的值
nIntValue = 1;
cout<<"通过变量直接修改后，"<<endl;
cout<<"变量的值为"<<nIntValue<<endl;
cout<<"引用的值为"<<rIntValue<<endl;

// 通过引用修改变量的值
rIntValue = 2;
cout<<"通过引用间接修改后，"<<endl;
cout<<"变量的值为"<<nIntValue<<endl;
cout<<"引用的值为"<<rIntValue<<endl;

