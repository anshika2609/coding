#include<bits/stdc++.h>
using namespace std;
int init(int *p)
{
	int a = 100;
	p = &a;
	return 0;
}
int main()
{
	int *b=NULL;
	int c = 10;
	b = &c;
	init(b);
	printf("value of b = %d\n", *b);
	return 0;
}