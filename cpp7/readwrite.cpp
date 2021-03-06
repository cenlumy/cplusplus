#include <iostream>
using namespace std;
#include <fstream>

void encode(char* buf, int bytes)
{
	for(int i=0; i<bytes; i++)
		++*buf++;
}
int main(int argc, char* argv[])
{
	if(argc!=3){
		cout << argv[0] << " source file new file " << endl;
		return 0;
	}
	ifstream f1(argv[1],ios::binary|ios::in);
	if(!f1){
		cout << "open " << argv[1] << "file failed" << endl;
		return 1;
	}
	ofstream f2(argv[2],ios::binary|ios::out);
	if(!f2){
		cout << " open " << argv[2] << "file failed " << endl;
		return 2;
	}
	bool buf[1000];
	while(f1){
		f1.read(reinterpret_cast<char*>(buf),sizeof(buf));
		cout.write((char*)buf,f1.gcount());
		encode((char*)buf,f1.gcount());
		f2.write((char*)buf,f1.gcount());//不要用sizeof（buf）
	}
	//f1.close();
	//f2.close();
}
	
