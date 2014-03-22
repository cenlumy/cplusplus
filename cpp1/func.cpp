#include <iostream>
using namespace std;
void f1(){cout << "hello" << endl;return;}
void f2(void){return f1();}

int main()
{
	f1();
	f2();
	f1();
}
