#include <iostream>
#include <cstring>
using namespace std;
class A{
	double d;
};
class B : public A{
	double d;
public:
	void f(){}
};
class C{
	double d;
public: 
	virtual void f(){cout << "c类的虚函数" << endl;}
	virtual void g(){cout << this << " &d= " << &d << endl;}
	virtual void h(){}
	virtual void i(){}
	virtual void j(){}
};
class D : public C{
	double d;
public:
	virtual void f(){cout << "d 类的虚函数 " << endl;}
};
int main()
{
	A* p = new B;
	C* q1 = new C , * q2 = new D;
	q1->f(); q2->f();
	q1->g();
	memcpy(q2,q1,4);//让q类所指对象的虚表指针指向c类c函数表。其实i就是把q1
//	的东西复制到q2中去
	q2->f();
	delete p;
	delete q1;
	delete q2;
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//	cout << sizeof(D) << endl;
}

