#include<iostream>

using namespace std;

int main()
{
	string strMorning("Good Morning!");
	int nLength = strMorning.length();
	string::size_type nPos = strMorning.find('o');

	cout<<strMorning<<"的长度是："<<nLength
		<<"\n在位置"<<nPos<<"有一个字符 o "<<endl;
}