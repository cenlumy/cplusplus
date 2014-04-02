
#include <iostream>
using namespace std;


class Animal{
public: 
	Animal(){}
	virtual ~Animal(){}
	void play(){
		eat();
		shout();
		sleep();
	}
	virtual void eat()=0;//纯虚函数
	virtual void shout()=0;
	virtual void sleep()=0;
};
class Horse : public Animal{
public:
	Horse(){ cout << " I am Horse " << endl;}
	~Horse(){cout << " I am dying Horse " << endl;}
	virtual void eat(){cout << " Horse eating grass " << endl;}
	virtual void shout(){cout << " HOOOOOOOOOO hahahhaha" << endl;}
	virtual void sleep(){cout << "Horse stand in sleeping" << endl;}
};
class Tiger : public Animal{
public:
	Tiger(){cout << "I am Tiger " << endl;}
	virtual ~Tiger(){ cout << " I am dying Tiger " << endl;}
	virtual void eat(){cout << "Tiger is eating pork " << endl;}
	virtual void shout(){cout << " Tiger is shouting " << endl;}
	virtual void sleep(){cout << "Tiger is pazhe in sleeping " << endl;}
};
int main()
{
	Animal* p = NULL;
	char choice;
	cout <<"h---Horse, t--Tiger, please make a chioce:";
	cin >> choice;
	if(choice=='h') p = new Horse;
	else   p = new Tiger;
	p->play();
	cout << "====================" << endl;
//	p->Animal::eat();//p指向的是Animal 里面的eat（）函数
	cout << "====================" << endl;
	delete p;
	Animal a;
	p = new Animal;
	return 0;
}
	
