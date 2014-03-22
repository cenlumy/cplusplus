#include <iostream>
using namespace std;

int main()
{
	double d = 123.45;
	double& e = d;// e是 d 的别名，两者是同一个变量 
//	double&f =123.34;非常量的引用只能用变量来初始化
	const double&c =234.56;
	const double& s = d+5;
	//int& n=d;  类型不一致
	//double* const E=&d;后面的e都相当于*E
	cout<< "&d=" <<&d <<" &e="<< &e << endl;
	cout<< "d=" << d << " e=" << e << " c=" << c << " s=" << s <<endl;
	double &e2 =e;
	cout<< "&e2=" << &e2 << " e2=" << e2 << endl;
	e2=21334.54;
	cout<< "d=" << d << " e=" << e << endl;
}
