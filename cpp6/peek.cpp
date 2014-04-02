#include <iostream>
using namespace std;
#include <string>

int main()
{
	char buf[100];
	char c;
	cin >> ws;
	c = cin.get();
	//if(cin.get()>='0'&& cin.get()<='9')c = cin.get()  知道前面这一段已经都了三个字符去了吗？
	cin.putback(c);
	if(isdigit(c)){
		double d;
		cin >> d;
		cout << "d= " << d << endl;
	}
	else {
		string s;
		cin >> s;
		cout << "s= " << s << endl;
	}
	cin >> ws ;
	if (cin.peek()>='0'&&cin.peek()<='9'){
		double d;
		cin >> d;
		cout << "d= " << d << endl;
	}
	else {
		string s;
		cin >> s;
		cout << "s= " << s << endl;
	}
}
