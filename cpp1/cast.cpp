#include <iostream>
using namespace std;
#include<cstdlib>

//static_cast数组类型之间，有一方是void*的指针类型之间
//const_cast用于临时去掉const，volatile限制
//reinterpret_cast任意两种指针类型之间，指针与数值类型之间
//dynamic_cast
int main()
{

	int n=static_cast<int>(45.6887);
	int* p =static_cast<int*>( calloc(sizeof(int),10));
	free(p);
	const int k = n;
	cout << "k=" << k << endl;
	const_cast<int&>(k)=234;
	cout << "k=" << k << endl;
	float f=234.3;
 	p = reinterpret_cast<int*>(&f);//把float地址转给int*地址\
	         这样输出的结果不会是我们想要的比如说234.3k、\
			 因为这样转的时候可能会丢弃什么自然结果不一样了
	cout << *p << endl;
	n = int(123.43);
	cout << "n=" << n << endl;
	n = int();
	cout << "n=" << n << endl;
	int m(100);
	cout << "m=" << m << endl;
	int x();//   函数声明
	cout << "x=" << x << endl;
	int a();//   函数声明
	cout << "a=" << a << endl;
	int b();//   函数声明
	cout << "b=" << b << endl;//此处等于1的原因因为b是一个函数
	//取b一般b都是大于零的所以cout出去之后结果都是1
	int(y)=200; //尽量不用，容易跟强制类型转换混淆
	cout << "y=" << y << endl;



}
