#include <iostream>
#include <cstdlib>
using namespace std;

class F{
	int n;
	int d;
public:
    F(int n=0, int d=1);
	void print(bool newline=true);
	void print(bool newline=true)const;// 限制当前对象是只读的
	~F();
	F(const F& h):n(h.n),d(h.d) //拷贝函数
	{cout << this << ", F(F)" << '/' << d << endl;}
};
void F::print(bool newline)const
{
	cout << "read only"<< n << '/' << d;
	if(newline) cout << endl;
}
F::~F()
{
	cout << this << "调用了西狗函数" << endl;
}
F::F(int n, int d)//:n(n),d(d)
{
	this->n = n;
	(*this).d = d;
	cout << this << " F(" << n << ',' << d << ")" << endl;
}
void F::print(bool newline)
{
	cout << "free" << n << '/' << d;
	if(newline)
		cout << endl;
}
int compare(const F& x,const F& y)
{
	cout << "&x=" << &x << endl;
	cout << "&y=" << &y << endl;
	x.print(); y.print();
}
F func(F x)
{
	return x;
}
int main()
{
	F f(3,5);
	cout << "======================" << endl;
	func(f);
	cout << "======================" << endl;
	F a(1,2), b(3,4);
	F* q = static_cast<F*>(malloc(sizeof(F)));//不会调用构造函数。
	F* p = new F;
	a.print(1);
	b.print();
	free(q);//不会调用西狗函数
 	delete p; p=NULL;
	q = new F[4];
	for ( int i=0; i<4; i++)
		q[i].print(0);
		cout << endl;
		delete[] q;
		p = new F(8,15);
		delete p; p=NULL;
//	b.~F();
//	b.~F();
	cout << "========================" <<endl;
    compare(a,b);	
	cout << "========================" <<endl;
}
