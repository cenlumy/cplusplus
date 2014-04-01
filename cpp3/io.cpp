#include <iostream>
using namespace std;

class F{
	int n;
	int d;
public:
	F(int n=0, int d=1):n(n),d(d){}
	void print(bool newline=true);
	void input();
	int getn()const {return n;}
	int  getd()const {return d;}
		friend istream& operator>>(istream& in , F& f);//此处只是为了声明友员进行授权

};
istream& operator>>(istream& in, F& j)
{
	char c;
	cin >> j.n >> c >> j.d ;
	return in;  //  in是istream 类型
}
ostream& operator<<(ostream& out, const F& n)
{
	cout << "up" << n.getn() << "down" << n.getd() ;
	return out;
}
int main()
{
	int n;
	F a, b;
//	cin << a;//operator
	cin >> a >> b; // cin.oprator>>(int& -n); operator>>(cin,n)
	cout << a << b;
}

