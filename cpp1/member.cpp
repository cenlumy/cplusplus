#include <iostream>
using namespace std;
//结构变量.* 成员指针, 结构指针->*成员指针
struct date{
	int year;
	int month;
	int day;
	void print(){cout <<year<<'-'<<month<<'-'<<day<<endl;}
};
void f(double d ){cout << d << endl;}
void showmember( date a[], int n, int date::*p)
{	for(int i=0; i<n; i++)
	cout << (a+i)->*p  << endl;//e_q a[i].*p, *(a+i).*p

}

int main()
{
	date a[5]={{2010,8,5},{2014,12,3},{2008,8,8},{2012,12,20},{1999,12,30}};
	date d ={1997,7,7};
	cout << "&d=" << &d << endl;
	cout << "&d.year=" << &d.year << " &d.month" << &d.month << " &d.day=" << &d.day << endl;
	cout << &date::year << &date::month << &date::day << endl;
	cout << main << &main << endl;
	union{
		int n;
		int date::*mp;
	};
	mp= &date::day;
	cout << "n=" << n << endl;
	mp =  &date::month;
	cout << "n=" << n << endl;
	mp = &date::year;
	cout << "n=" << n << endl;
	cout << "*mp=" << d.*mp << endl;// 成员指针不能直接用来输出     cout << *mp << endl;   catch wrong  
	cout << &f << endl;
	showmember(a, 5, &date::month);
	showmember(a, 5, &date::year);//此处要叫用&才能取到成员地址
	d.print();
	a[3].print();
	void (date::*pf)()=&date::print;
	(d.*pf)();
	(a->*pf)();

}

