#include <iostream>
using namespace std;
class Teacher{
	string name;
	string course;
public:
	Teacher(const char* n, const char* c):name(n), course(c){
	 cout << "establish " << course << " teacher " << name << endl;
	}
	Teacher(const Teacher& t):name(t.name),course(t.course){
	cout << "copy " << course << " teacher " << name << endl;
}
~Teacher(){
	cout << "back home " << course << "teacer " << name << endl;
}};

int main()
{
	Teacher t1( "chenlumin " , "student ");
	Teacher t2=t1;
	Teacher t3=Teacher("lihuan ","cen's girlfriend ");//用临时对象来初始化一个新对象，编译器一般会优化成直接用创建临时对象的参数来创建新对象
	t2 = t3;
	cout << "========================" << endl;
	t2 = Teacher("chenumin","lihuan");//临时对象会及时释放。
	cout << "========================" << endl;

}	
