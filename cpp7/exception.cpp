#include <iostream>
#include <cstdio>
using namespace std;
#include <exception>
class MyType{};
class MYException : public exception
{
	public:
	const char* what() const throw(){ return "my lihua flower";}//它本身是可以抛出异常的但是
};
void f() throw(double , int , const char*,MyType, MYException)
{
	cout << "please Enter a number between 1-5:" ;
	int n ;
	cin >> n;
	if(n==1)throw MYException();
	if(n==2)throw MyType();
	if(n==3)throw "hello";
	if(n==4)throw 123;
	if(n==5)throw 124.45;
		cout << "===========the end of f()=========" << endl;
}
class ME: public exception
{
	char msg[100];
public:
	ME(int n){sprintf(msg,"从第%d行抛出异常",n);}
	const char*what()const throw(){return msg;}//表示这个函数不可能抛出异常
};
void g(){
	try{ f();}
	catch(const char*e){cout << "const cahr" << e << endl;}
	catch(double e){cout <<"double" << e << endl; throw;}
	catch(MYException&e){cout <<"MYException" << e.what() << endl;}
	catch(exception&e){cout <<"exception:" << e.what() << endl;}
	catch(...){cout << "g:其他异常" << endl;throw ME(__LINE__);}
	cout << "========the end of g()============" << endl;
}
int main()
{
	try{	g();	}
	catch(exception&e) {cout << "main:" << e.what() << endl;}
	catch(...){cout << "main:其他异常" << endl;}
	cout << " =========the end of main() =======" << endl;
}
