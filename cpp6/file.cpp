#include <iostream>
using namespace std;
#include <string>
#include <fstream>

int main()
{
	string path = "file";
	ifstream fin(path.c_str());
	ofstream fout("filecopy");
	/* ifsteam fin; fin.open(path.c_str());*/
	if(!fin){
		cout << "open the file " << path << "fail" << endl;
		return 1;
	}
	if(!fout){
		cout << "fail to open the filecopy " << endl;
		return 2;
	}
	char ch;
	while(fin.get(ch)){//用while（fin >> ch) 会跳过所有空白字符
		cout << ch; fout << ch;
	}
	//while{fin.get(ch));fout<<ch;}这样复制最后会多一个字符
	fin.clear();
	fin.close();
	fout.close();
	return 0;
}
