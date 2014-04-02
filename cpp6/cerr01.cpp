#include <iostream>
using namespace std;
#include <string>
//io 对象要求能转换成bool类型，对于处于正常状态的io对象转成true，对于处于错误的io对象转成false。
int main()
{

	cout << cin << endl;
	cout << cout << endl;
	int n;
	cin >> n;
	cout << "cin= " << cin << endl;
	if(cin) cout << " 平安无事 " << endl;
	if(!cin) {cout << " 出错了 " << endl;cin.clear();}
	string s;
	cin >> s;
	cout << " s=[" << s << "]\n";
//	cout << &cin << endl;
//	cout << &cout << endl;
}
