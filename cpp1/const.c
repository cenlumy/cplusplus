#include <stdio.h>

int main()
{
	const int n=30;//后面使用n的值的地方会直接用30代替
	volatile const int m=200;//m随时可能改变，每次从内存中重新
	int* p=(int*)&n;//取值
	*p =123;
	p = (int*)&m;
	*p =456;
	printf("%d, %d\n",n,m);
	return 0;
}

