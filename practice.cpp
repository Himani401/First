#include<iostream>
using namespace std;
int main()
{
	int number=50;
	int *p;
	p=&number;
	cout<<"Address of p variable is\n"<<p<<"\n";
	p=p-1;
	cout<<"After decrement:Address of p variable is\n"<<p;
	return 0;

}
