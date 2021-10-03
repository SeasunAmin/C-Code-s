#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=32,b=12,c;
	
	c = a & b;
	cout<<c ;
	cout<<endl;
	
	c = a | b;
	cout<<c <<endl;

	c = a ^ b;
	cout<<c <<endl;
	
	c = a << 3;
	cout<<c <<endl;
	
	c = b >>3;
	cout<<c <<endl;
	
	getch();
}
