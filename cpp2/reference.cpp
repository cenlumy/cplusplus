#include <iostream>
using namespace std;

void JiaoHuan(int *a, int *b)
{
	int t=*a; *a=*b; *b=t;
//	int t=a; a=b; b=t;
}
void JiaoHuan(int &a,int &b)
{
	int t=a ; a=b; b=t;
}
void print(const int& n)
{
	cout << &n <<'\t' << hex << showbase << n << endl;
}
struct Window{
	string text;
	int x, y;
	int width, height;
};//GUI    图形界面一般都是系统提供的。
void input(Window& r)
{
	cout << "please enter the window's headline xy's location.width, and height:\n";
	cin >> r.text >> r.x >> r.y >> r.width >> r.height;
}
void print(const Window& r)
{
	cout << "=======" << r.text << "=======" << endl;
	cout << "from(" << r.x << '.' << r.y << ")到(" << r.x+r.width << ',' << r.y+r.height << ")\n";
}
int main()
{
	Window w;
	input(w);
	print(w);
	int m=10, n=20;
//	JiaoHuan(m,n);
	JiaoHuan(&m,&n);
	cout << m <<' ' << n << endl;
	JiaoHuan(m,n);
	cout << m <<' ' << n << endl;
	void(*p)(int&, int&) = &JiaoHuan;//如果没有交换的指明指针的参数类别的花 对含有重载的函数取地址的话你并不知道会是用到那个函数
	p(m,n);
	cout << m << ' ' << n << endl;
	print(m);
	print(n);
	print(123);
	print(1+2);
	print(m+n);
}
