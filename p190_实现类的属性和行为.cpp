// SalarySystem.h 头文件
// 用于类的声明
#pragma once

// 引入需要用到的头文件
#include<string>
#include<iostream>
using namespace std;

// 员工类
class Emplyee
{
public:
	// 构造函数
	// 根据员工的名字和入职时间构造员工对象
	Emplyee(string strName, int nYears)
		: m_strName(strName),
		  m_nYears(nYears)
  	{};

  	// 员工类的行为
public:
	// 因为经理类和普通员工类这两个派生类对工资的计算方式不同，
	// 所以这里必须提供纯虚函数供派生类对其进行自定义
	virtual int GetSalary() = 0;

	// 提供一个公有接口，供外界得到员工的名字
	// 因为这个函数只是简单地返回一个属性值，所以把它定义
	// 在类的声明中，使其成为一个内联函数，提供性能
	string GetName()
	{
		return m_strName;
	};

	// 员工的属性
protected:
	// 入职时间
	int m_nYears;
	// 姓名
	string m_strName;
};

// 经理类
class Manager : public Emplyee
{
public:
	// 使用基类的构造函数，完成对属性的初始化工作
	Manager(string strName, int nYears)
		: Emplyee(strName, nYears)
	{};

	virtual int GetSalary()
	{
		return 5000 * m_nYears + 10000;
	}
};

// 普通员工类
class Worker : public Emplyee
{
public:
	Worker(string strName, int nYears)
		: Emplyee(strName, nYears)
	{};

	virtual int GetSalary()
	{
		return 200 * m_nYears + 2000;
	}
};











