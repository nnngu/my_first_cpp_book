#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int nYear, nMonth, nDate;
	ifstream fin("Date.txt");
	if (!fin.bad())
	{
		fin.ignore(256,'\n');
		fin>>nYear>>nMonth>>nDate;
		cout<<"文件中的日期是"
		<<nYear<<"-"<<nMonth<<"-"<<nDate<<endl;
		fin.close();
	}
	else
	{
		cout<<"无法打开文件并进行读取"<<endl;
	}

	cout<<"请输入当前日期（年月日）："<<endl;
	cin>>nYear>>nMonth>>nDate;

	ofstream fout("Date.txt");
	if (!fout.bad())
	{
		fout<<"用户输入的当前日期是：\n"
		<<nYear<<" "<<nMonth<<" "<<nDate;
		fout.close();
	}
	else
	{
		cout<<"无法打开文件并进行写入"<<endl;
	}
	return 0;
}