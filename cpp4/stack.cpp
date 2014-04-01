#include <iostream>
using namespace std;
#include <string>

typedef string T;
class Stack{
	typedef unsigned int uint;
	T* mem;//  动态分配的内存显然返回的是地址
	uint max;
	uint len;
public:
	Stack(const Stack& s):mem(new T[s.max]),max(s.max),len(s.len){}
	Stack(uint n):mem(new T[n]), max(n),len(0){}
	uint max_size()const{return max;}
	uint size()const{return len;}
	Stack& push(const T& e){if(len>max)throw 1; mem[len++]=e;
	return *this;}  //return *this 表示返回栈本身然后就可以一直.push().push.().push()  了
	T pop(){if(len==0)throw 0; return mem[--len];}
	void print()const{for(uint i=0; i<len; i++)cout << mem[i]; cout << endl;}
	~Stack(){delete[] mem;}
	Stack& operator=(const Stack& rh){
		if(this==&rh) return *this;//考虑自己给自己赋值的情况
		delete [] mem;
		mem = new T[rh.max];
		len = rh.len;
		max = rh.max;
		for(uint i=0; i<len; i++)
			mem[i]=rh.mem[i];
			return *this;
	}
};
int main()
{
	Stack s1(5);
	Stack s2(s1);
	Stack s3(3);
	s1.push("1").push("2").push("3");
	s2.push("chencaiweng").push("wangfeng");
	s1.print();
	s2.print();
	s3 = s2;//s3.opearator=(s2);
	s2 = s2;
	s1.print();
	s2.print();
	s3.print();
}
