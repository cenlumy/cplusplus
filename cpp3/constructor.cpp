#include <iostream>
using namespace std;
#include <string>
class Person{
	string name;
	bool gender;
	int age;
    Person* lover;
public:
	Person(const char* n="noone", bool g=true);
	void growup(int  years);
	void show();
	void marry(Person& oth);
};
Person::Person(const char* n/*=noone*/, bool g/*=true*/)//  此处只不过是Person 的构造函数
{	
	cout << "调用构造函数" << endl;
	(*this).name = n;//name = n;
	this->gender = g;//gender= g;
	age = 0;
	lover = NULL;
}
void Person::growup(int years)
{ 
	age += years;
}
void Person::show()
{
	cout << " hello everyone i am " << (gender?"   handsomeboy":" prostitute") << name <<"  " << age << " years old " << endl;
	if(lover==NULL)
		cout << "I am single>" << endl;
	else
		cout << "my darling is " << lover->name << "." << endl;
}
void Person::marry(Person& oth)
{
	lover = &oth;
	oth.lover = this;//其中this指向marry本身这个人  
	cout << name << " and " << oth.name << " could sleep in one bed" << endl;
}

int main()
{
	Person a("chenlumin",true);//出生的时候年龄是默认值不需要传递参数。
	Person b("lihuan",false);
	Person d;
	Person e();
	a.growup(20);
	b.growup(20);
	a.show();
	b.show();
	Person c("lihuan");
	c.growup(5);
	c.show();
	d.growup(25);
	d.show();
	e().show();
	b.marry(a);
	a.show();
	b.show();
}
Person e()
{
	 string name ;
	 bool gender;
	 int age;
	 cout << "enter name and gender and age:";
	 cin >> name >> gender >> age;
	 Person input(name.c_str(),gender);
	 input.growup(age);
	 return input;
}
