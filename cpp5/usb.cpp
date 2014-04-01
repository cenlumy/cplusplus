#include <iostream>
using namespace std;

class USB{
public:
	virtual void plugin(){cout << "识别设备" << endl;}
	virtual void work() {cout << "让设备工作" << endl;}
	virtual void stop() {cout << "让设备停止工作" << endl;}
};
class USBDisk : public USB{
public:
	void plugin(){cout <<"发现新设备，USB磁盘" << endl;}
	void work(){cout <<"把磁盘上的文件都复制到硬盘上" << endl;}
	void stop(){cout <<"停止对磁盘的访问" << endl;}
};
class USBFan : public USB{
public:
	void plugin(){cout <<"发现新设备，USB风扇" << endl;}
	void work(){cout << "风扇工作" << endl;}
	void stop(){cout << "风扇停止转动"<< endl;}
};
class USBCamera : public USB{
public:
	void plugin(){cout <<"发现新设备，USB摄像头" << endl;}
	void work(){cout <<"开始向电脑传输视频" << endl;}
	void stop(){cout <<"停止采集视频" << endl;}
};
class Computer{
public:
	void use(USB* p){
		p->plugin();
		p->work();
		p->stop();
	}
};

int main()
{
	USBDisk d;
	USBFan f;
	Computer c;
	c.use(&d);
	c.use(&f);
	USBCamera a;
	c.use(&a);
}
