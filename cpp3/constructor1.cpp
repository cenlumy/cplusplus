#include <iostream>
using namespace std;

class F{
	int n;
	int d;
public:
    F(int n=0, int d=1);
	void print(bool newline=true);
};
F::F(int n, int d)//:n(n),d(d)
{
	this->n = n;
	(*this).d = d;
	cout << "F(" << n << ',' << d << ")" << endl;
}
void F::print(bool newline)
{
	cout << n << '/' << d;
	if(newline)
		cout << endl;
}
int main()
{
	F a(1,2), b(3,4);
	a.print(1);
	b.print();
}
