#include <iostream>
#include <cstdlib>
#include <string>
#include <new>
using namespace std;
//  // new 类型；==> (类型*)malloc(sizof(类型))
int main()
{
	//int* p = (int*)malloc(sizeof(int));
	string* p = static_cast<string*>(malloc(sizeof(string)));
	int* q = new int;//不保证是0
	int* r = new int(999);
	int n ;
	cout << "please enter a integer:";
	cin >> n;
	int* a = new(nothrow) int[n];//不保证是清零
	if(a==NULL){
		cout << n*sizeof(int) << "申请动态内存失败" <<endl;
	}
	else{
	for (int i=0; i<n; i++){
		cout << a[i] << ' ';
		if(a[i]){
			cout << flush;//为输入进行输入暂停提供条件
			char c;
			cin >> c;
		}
    }
	}
	cout << endl;
	delete q;q=NULL;
	delete r;r=NULL;
	delete [] a;a=NULL;
	//free(p)//delete p;不要用delete p可能会出错。
	//delete p;
	free(p);
	

}
