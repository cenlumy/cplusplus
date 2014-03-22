#include <iostream>
using namespace std;
#include <iomanip>
#include "time.h"
   Time::Time(int x, int y, int z){
		h=x;
		m=y;
		s=z;
	}
	void Time::show(){
		cout << setfill('0')  << setw(2)<< h << ':'<< setw(2) << m << ':' << setw(2) << s << endl;
}
    void Time::tick(){if(++s==60){
					s=0;
					if(++m==60){
						m=0;
		
						if(++h==24){
							h=0;
		
		  	}
		}
	}
}
;
