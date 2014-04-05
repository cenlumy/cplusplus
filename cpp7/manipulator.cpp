#include <iostream>
using namespace std;
//自定义格式看控制符
//无参的， 可以是对象
class _HEXUB{
	friend ostream& operator<<(ostream& o, const _HEXUB& h)
	{
		return o <<  hex << uppercase << showbase;
		}
};
const _HEXUB hexub=_HEXUB();
//无参的也可以是函数
ostream& func(ostream& o)
{
	return o << dec << showpos;
	}
//带参的，也可以是类，也可以是对象或者函数
class wf{
	unsigned int w;
	char f;
public:
	wf(unsigned int w, char fill=' '): w(w),f(fill){}
	friend ostream& operator<<(ostream& o, const wf& x)
	{
		o.width(x.w);
		o.fill(x.f);
		return o;
	}
};
/*
ostream& operator<< ostream&<< ( ostream& (*f)(ostream& o))
{
	return f(*this);
}*/
int main()
{
	cout << hexub << 123 << endl;//ox7b
	cout << wf(10,'*') << "good" << endl;
	cout << wf(8) << "good" << endl;
	cout << func << 123 << endl;//+123
}
