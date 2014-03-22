#include <iostream>
using namespace std;
#include <iomanip>

class Time{
private:
	int h;
	int m;
	int s;
public:
	Time(){h=m=s=0;}
	Time(int x, int y, int z){
		h=x;
		m=y;
		s=z;
	}
	void show(){
		cout << setfill('0')  << setw(2)<< h << ':'<< setw(2) << m << ':' << setw(2) << s << endl;
}
    void tick(){if(++s==60){
					s=0;
					if(++m==60){
						m=0;
		
						if(++h==24){
							h=0;
		
		  	}
		}
	}
}
};
int main(){    
	 Time t1;
     Time t2(13,46,56);
	 t1.tick();
	 t1.show();
	 t2.tick();
	 t2.show();
}

			 
