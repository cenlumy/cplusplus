#include <iostream>
#include <string>
int main()
{
	std::cout << "请输入你的姓名和年龄：\n";
	std::string name;
	int age;
	std::cin >> name >> age;
	std::cout << name << "您好，你出生于"<< 2014 - age << "年"<<std::endl;
}
