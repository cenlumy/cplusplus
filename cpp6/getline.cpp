#include <iostream> 
using namespace std;
#include<cstdio>
#include <string>

int main()
{
	char buf[10];
	if(!cin.getline(buf,sizeof(buf))){
		cout << "error: the line is too long\n" ;
		cin.clear();
		cin.ignore(100,'\n');
	}
	string s;
	getline(cin, s, '~');
	cout << "buf=[" << buf << "]\n";
	cout << "s= " << s << "]\n";
	printf("%s\n", s.c_str());
}
