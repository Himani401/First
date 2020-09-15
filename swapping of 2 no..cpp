// programs of swapping of two numbers
#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	a=20;
	b=30;
	cout<<"value of two variables a and b before swapping =\t"<<a<<"\t"<<b<<"\n";
	swap(a,b);
	return 0;
}
void swap(int c,int d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	cout<<"The value of variables a and b after swapping will be=\t"<<c<<"\t"<<d;
	
}
