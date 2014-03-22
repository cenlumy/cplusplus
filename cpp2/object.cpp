#include <iostream>
using namespace std;

int main()
{
	string s="hello world";
	s.replace(2,5,"XX");
	s.insert(1,"I love");
	cout << s << endl;
}
