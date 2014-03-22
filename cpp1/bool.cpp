#include <iostream>
using namespace std;

int main()
{
	bool gender = true;
	bool sex = false;
	cout<<(gender?"handsome boy":"prostitute")<<endl;
	cout<<(sex?"handsome boy":"prostitute")<<endl;
	cout<<gender<<','<<sex<<endl;
	cout<<boolalpha<<'1'<<3<<0<<gender<<','<<sex<<endl;//boolalpha成为类型配置。
}
