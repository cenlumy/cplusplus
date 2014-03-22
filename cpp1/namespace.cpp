#include <iostream>
using namespace std;
#include<string>
namespace clm{
	string name="chenlumin";
	int age=22;
}
namespace chunge{
	char name[20]="chunge";
	double salary=9999;
}
using namespace clm;
using namespace chunge;
char name[20]="lihuan";
int main()
{
	cout << "I love" << chunge::name << endl;//如果没有a\
						chunge::的话就会有歧义
	cout << "I am " << clm::name <<" I am "<<age<<"years old"<<endl;
	cout <<"She is "<<chunge::name<<" Her salary " << salary<<endl;
	string name="huan";
	cout << name << " beautiful " << endl;//用到内部的name
	cout <<:: name << " is beautiful too " << endl;//用到内部的name
	return 0;
}
