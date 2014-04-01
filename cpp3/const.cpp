#include <iostream>
using namespace std;
class Array{
	char a[100];
	int len;
	mutable int cur;
public:
	void first()const{cur=-1;}
	char next()const{return a[++cur];}
	bool hasnext()const{return cur<len-1;}
	void add(char c);
	void remove(int pos);
	Array():len(0),cur(0){}
	void add(const char* s){while(*s) add(*s++);}
};
void Array::add(char c){a[len++] =c;}
void Array::remove(int pos)
{
	if(pos<0||pos>=len) return;
	while(pos<len){
		a[pos]=a[pos+1];
		++pos;
	}
	--len;
}
void show(const Array&a )
{
	a.first();
	while(a.hasnext())
		cout << a.next() << ' ' ;
		 cout << endl;
}
	
int main()
{
	Array a;
	a.add("hello");
	a.add("world");
	a.add("李欢");
	show(a);
}
