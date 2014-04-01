#include <iostream>
using namespace std;
 class F{
	 int n;
	 int d;
	void reduce(){
		int mcd = maxcd(n<0?-n:n,d);//其mcd表示最大公约数
		if(mcd!=1){n/=mcd;d/=mcd;}
		}	
public:
	static int maxcd(int a, int b){
			if(a==0) return b;
			return maxcd(b%a,a);}
	F(int n=0, int d=1):n(n),d(d){
		if(d==0) throw "分母不能为零";
		if(d<0){this->d=-d,F::n=-n;}//此处可以用逗号是因为阿此处是赋值运算
		reduce();
		cout << "F(" << n << '/' << d << ")\n" ;
	}
	friend ostream& operator<<(ostream& o, const F& f){
		o << f.n << '/' << f.d;//f本身是个类因为f不是成员函数。所以要加点
		return o;}
		friend F operator~(const F& f);
		bool operator!()const;

	};
bool F::operator!()const{
	cout << *this << ' ' << (double)n/d<< endl;   //此处的*this 就是指对象的值
	return (n==0);
}
F operator~(const F& f)
{
	return F(f.d, f.n);
}
int main()
{
	F f1(6,8);
	cout << "f1"<< f1 << endl;
	cout << "~f1 "<< ~f1 << endl;
	cout << "!f1 " << !f1 << endl;
	!f1;
	!(~f1);
}
