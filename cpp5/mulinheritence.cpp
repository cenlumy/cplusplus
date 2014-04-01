#include <iostream>
using namespace std;

class camera{
	double price;
public:
	void take(const char* obj){
	cout << "gei" << obj << "take photos" << endl;}
	camera(double p):price(p){ cout << "camera()" << endl;}
	~camera(){cout << "~camera()" << endl;}
	double Getprice(){return price;}

};
class MP3{
	double price;
public:void play(const char* song){
	cout << "casting " << song << ">>" << endl;}
	MP3(double p):price(p){ cout << "MP3" << endl;}
	~MP3(){ cout << "~MP3()" << endl;}
	double Getprice(){return price;}

};
class phone{
	double price;
public: 
	void dial(const char* no){
		cout << "gei" << no <<  "dial the phone" << endl;
		}
		phone(double p):price(p){cout << "phone()" << endl;}
		~phone(){cout << "~phone()" << endl;}
	double Getprice(){return price;}
};
class Modernphone : public phone, public MP3, public camera
{
	string factory;
public:
	void visitnet(const char* url){
		cout << "visit website" << url << endl;
	}
		Modernphone( const char* factory, double price):factory(factory),phone(price),MP3(price),camera(price){
			cout << "Modernphone()" << endl;
		}
		~Modernphone(){cout << "~Modernphone()" << endl;}
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
}




































