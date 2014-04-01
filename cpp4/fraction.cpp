#include <iostream>
using namespace std;

 class F{
	//private
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
		cout << "F(" << n << '/' << d << ")\n" ;//此处的n和d不会约分之后输出来是因为，此处的n和d是是从当前的全局变量复制过来的局部变量， 另外开的空间存储  此时的局部变量会覆盖全局变量。也就是说在此处输出的n和d还是原来复制过来的n和d。
	}
	friend ostream& operator<<(ostream& o, const F& f){
		o << f.n << '/' << f.d;//f本身是个类因为f不是成员函数。所以要加点
		return o;}
   friend F operator+(const F& lh, const F& rh){
		F res(lh.n*rh.d+lh.d*rh.n,lh.d*rh.d);//定义res是这个类型，然后返回的时候它就会调用这个函数的构造函数然后就可以得出我们所需要的正确的结果。
		return res;
	}
	F operator*(const F& rh)const{
	  return F (n*rh.n, d*rh.d);//匿名对象
	//	return res;//成员函数少一个形参
	}

};
int main()
{
	F f1(6,8);
	F f2(6,9);
	F f4(-6,12);
	cout << f1 << ',' << f2 << ',' <<  f4 << endl;
	cout << f1.maxcd(12,34) << endl;
	cout << F:: maxcd(12 ,34) << endl;
	cout << f1+f2 << ',' << f1+f4 << ',' << f2+f4 << endl;
	cout << f2+f2+f4 << endl;
	cout << f1*f2 << endl;
//	F f3(5,0);   
//	F f5(2,9);
}
