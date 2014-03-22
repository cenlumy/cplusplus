#include <iostream>
#include <string>
using namespace std;

struct PS{
	string name;
	int age;
	void show(){	cout << "i am " << name << ",this year" << age << endl;}
};
class PC{
	string name;
	int age;
public:
void show(){
	cout << "i am " << name << ",this year" << age << endl;}
	PC(const char* n, int a){ name = n; age = a;}
};


int main()

{
	PS s={"lihuan",21};
	PC c("lumin",22);
	s.name = "lihuan";
//	c.name = "lihuan";
	c.show();
	s.show();
}

