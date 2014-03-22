#ifndef Time_H
#define Time_H 1
class Time{
private:
	int h;
	int m;
	int s;
public:
	Time(){h=m=s=0;}
	Time(int x, int y, int z);
	void show();
	void tick();
};
#endif
			 
