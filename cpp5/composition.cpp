
#include <iostream>
using namespace std;
class Goods{
	double price;
public:
	Goods(double p=123.4):price(p){
		cout << "Goods " << p << ')' << endl;
	}
	~Goods(){cout << "~Goods() " << endl;}
	double Getprice(){return price;}
};
class camera:virtual public Goods{
public:
	void take(const char* obj){
	cout << "gei" << obj << "take photos" << endl;}
	camera(double p):Goods(p){ cout << "camera()" << endl;}
	~camera(){cout << "~camera()" << endl;}

};
class MP3:virtual public Goods{
public:void play(const char* song){
	cout << "casting " << song << ">>" << endl;}
	MP3(double p):Goods(p){ cout << "MP3" << endl;}
	~MP3(){ cout << "~MP3()" << endl;}

};
class phone:virtual public Goods{
public: 
	void dial(const char* no){
		cout << "gei" << no <<  "dial the phone" << endl;
		}
		phone(double p):Goods(p){cout << "phone()" << endl;}
		~phone(){cout << "~phone()" << endl;}
};
class Modernphone : public phone
{
	string factory;
	Goods g;
	camera c;
	MP3 m;
public:
	void visitnet(const char* url){
		cout << "visit website" << url << endl;
	}
		Modernphone( const char* factory, double p):factory(factory),phone(p),m(p-1),c(p-2),g(p){//最终price只是由这里的Goods传递而已
			cout << "Modernphone()" << endl;
		}
		~Modernphone(){cout << "~Modernphone()" << endl;}
		void take(const char* obj){c.take(obj);}
		void play(const char* song){m.play(song);}
		double Getprice(){return g.Getprice();}
};
int main()
{
	Modernphone mp("k-touch",20);
	mp.dial("110");
	mp.play("peking welcome you");
	mp.visitnet("cenlumy.github.io");
	mp.take("lihuan");
	mp.phone::Getprice();    // 通过命名空间来消除多个价格请求的歧义
//	mp.Getprice();  因为同时有多个Getprice 请求有歧义，编译不能通过
	cout << mp.Getprice() << endl;
}




































