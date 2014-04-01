#include <iostream>
using namespace std;
#include <string>
struct date{
	int year;
	int month;
	int day;
};
struct Person{
	string name;
	int age;
	bool gender;
	double salary;
	date birth;
	Person(){cout<<"establish Person object" << this << endl;}
	~Person(){cout << "abandon Person objedct" << this << endl;}
};
class autoptr{
	Person* p;
	static int cnt;
public:
    autoptr(Person* p):p(p){++cnt;}
	autoptr(const autoptr& a):p(a.p){++cnt;}
	~autoptr(){cout << cnt << ':' << endl; if(--cnt==0)delete p;}
	Person* operator->(){return p;}
	Person& operator*(){return *p;}
};

int autoptr::cnt = 0;
int main()
{
	autoptr a = new Person;//a.cnt==1
	autoptr b = a;//b.cnt==2
	autoptr c = a, d(a), e(b);// c.cnt==3, d.cnt==4,e.cnt==5
//	Person* a = new Person;
	(*a).birth.year = 1979;
	a->name = "chenlumin";
	cout << a->age << endl;
	cout << (*a).name << endl;
	cout << a->birth.year << endl;
}
