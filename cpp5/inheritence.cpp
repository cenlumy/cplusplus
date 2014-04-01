#include <iostream>
using namespace std;
#include <string>
class Person{
protected:
	string name;
private:
	bool gender;
public:
	void eat(const char* food){cout << name << " eating "<<food << endl;}
	void sleep();
	void show(){cout << "hello everyone I am " << (gender?" handsomeboy ":" beautiful girl ") << name << ",nice to meet you " << endl;
	}
	Person(const char* name, bool gender):name(name),gender(gender){}
	string _name()const{return name;}
};
	
class Teacher :public Person
{
	string course;
public:
	void show(){
		cout << " hello everyone i am " << course << " teacher " << name<< " hoping to help you ^^^^^ " << endl;}
	void teach(const char* _class){
		cout << name << "teacher give " << _class << " a _class " << course << " a  speech " << endl;
	}
	Teacher(const char* name, bool gender ,const char* course):Person(name,gender),course(course){}
};
int main()
{
	Person a("chenlumin",true);
	Teacher b("lihuan" , false,"math");
	a.eat("chocolate");
	b.eat("braberry");
	a.show();
	b.show();
	b.teach("110708");
	cout << a._name() << endl;
	cout << b._name() << endl;
	
}

