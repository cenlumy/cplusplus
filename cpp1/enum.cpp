#include <iostream>
#include <string>
using namespace std;
enum Course{UNIX,C,CPP,UC,VC};
struct Student{
	string name;
	Course co;
};
enum Color{BLACK,RED,YELLOW,PINK,BLUE,PURPLE};
int main()
{
	int n;
	Student s;
	Course c;
	c = CPP;
	n = CPP;
//	c = n ;   由int赋值给Course 会出错 int范围大可能会丢东西
	Color clr = BLUE;
//	clr = (Color)VC;这样强制类型转换之后就不会报错。
}
