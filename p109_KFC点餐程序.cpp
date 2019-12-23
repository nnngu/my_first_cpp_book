// KFC 点餐程序
int main(int argc, char* argv[])
{
	cout<<"欢迎点餐，请选择您要的套餐"<<endl;
	cout<<"1、鸡翅套餐"<<endl;
	cout<<"2、可乐套餐"<<endl;

	// 接收用户输入的选项
	int nOrder;
	cin>>nOrder;

	switch(nOrder)
	{
		case 1:
			cout<<"一个鸡翅"<<endl;
		case 2:
			cout<<"一杯可乐+一包薯条"<<endl;
		default:
			cout<<"餐巾纸"<<endl;
			cout<<"您的餐齐了"<<endl;
	}
	return 0;
}