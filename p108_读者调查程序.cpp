// 读者调查程序
int main(int argc, char* argv[])
{
	cout<<"感谢您购买本书！\n 请输入序号，选择您从何种途径得知本书。"<<endl;
	cout<<"1、通过搜索引擎"<<endl;
	cout<<"2、通过朋友介绍"<<endl;
	cout<<"3、通过书店"<<endl;
	cout<<"4、通过其他途径"<<endl;

	int nWay;
	cin >> nWay;

	switch(nWay)
	{
		case 1;
			cout<<"您是通过搜索引擎得知本书的。"<<endl;
		case 2:
			cout<<"您是通过朋友介绍得知本书的。"<<endl;
		case 3:
			cout<<"您是通过书店得知本书的。"<<endl;
		case 4:
			cout<<"您是通过其他途径得知本书的。"<<endl;
		default:
			cout<<"错误的选择！请输入数字 1~4 做出选择。"<<endl;
	}

	return 0;
}