struct Emplyee
{
	string m_strName;
	bool m_bMale;
	int m_nAge;
	int m_nSalary;
}

const int MAX_COUNT = 1000;

int main(int argc, char * argv[])
{
	Emplyee arrEmplyee[MAX_COUNT];

	cout<<"请输入员工信息"<<endl;

	int nCount = 0;

	do
	{
		cin.clear();
		cin>>arrEmplyee[nCount].m_strName
			>>arrEmplyee[nCount].m_bMale
			>>arrEmplyee[nCount].m_nAge
			>>arrEmplyee[nCount].m_nSalary;

		if("end" == arrEmplyee[nCount].m_strName)
			break;

		// 开始输入下一个员工的信息
		++nCount;
	} while(nCount < MAX_COUNT);

	// 显示所有员工的信息
	cout<<"员工信息：\n 姓名\t 性别\t 年龄\t 工资"<<endl;
	for(int i = 0; i < nCount; ++i)
	{
		cout<<arrEmplyee[i].m_strName<<"\t"
			<<arrEmplyee[i].m_bMale<<"\t"
			<<arrEmplyee[i].m_nAge<<"\t"
			<<arrEmplyee[i].m_nSalary<<endl;
	}
	return 0;
}