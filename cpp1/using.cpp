#include <iostream>
#include <string>
using std::cout;//using namespace std;
using std::cin;//A::B表示A范围内的B “：：”称作域操作符
using std::string;
using std::endl;
int main()
{
	cout << "请输入你的姓名和年龄：\n";
	string name;
	int age;
	cin >> name >> age;
	cout << name << "您好，你出生于"<< 2014 - age << "年"<<endl;
}
