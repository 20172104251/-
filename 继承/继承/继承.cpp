// 继承.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate(int y, int m, int d);
	void display();
	~CDate();
};

CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "基类默认构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::CDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "基类构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
void CDate::display()
{
	cout << "基类dispaly" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::~CDate(void)
{
	cout << "基类析构函数" << year << "年" << month << "月" << day << "日" << endl;
}
class Myate :public CDate
{
public:
	Myate(int y,int m,int d)
	{
		year = y;
		month = m;
		day = d;
	}
};
int main()
{
	CDate CDate(2018, 9, 23);
	CDate.display();
	Myate Myate(2018, 6, 4);
	Myate.display();
	return 0;
}
