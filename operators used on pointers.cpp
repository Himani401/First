// program on operators which can be used on pointers
#include<iostream>
using namespace std;
int main()
{
	int var;
	int *ptr;
	int val;
	var=3000;
	ptr=&var;  // take address of variable
	val= *ptr; // take value available at ptr
	cout<<"Value of var :" << var << endl;
	cout<<"Value of ptr :" << ptr << endl;
	cout<<"Value of val :" << val << endl;
	return 0;
}
