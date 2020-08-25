#include<bits/stdc++.h>
using namespace std;
class base
{
	public:
		virtual void print()const=0;
};
class derivedone : public base
{
	public:
		void print() const
		{
			cout<<"derivedone\n";
		}
};
class derivedtwo : public base
{
	public:
		void print() const
		{
			cout<<"derivedtwo\n";
		}
};
class multiple :public derivedone,public derivedtwo
{
	public:
		void print() const
		{
			derivedtwo :: print();
		}
};
int main()
{
	int i;
	multiple both;
	derivedone one;
	derivedtwo two;
	base *arr[3];
//	arr[0]&both;
	arr[1]=&one;
	arr[2]=&two;
	arr[i]->print();
	return 0;
}