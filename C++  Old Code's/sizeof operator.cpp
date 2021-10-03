#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int a;
	float f;
	double d;
	char ch;
	char name[20];
	
	int c = sizeof(a);
		cout <<c <<endl;
	int v = sizeof(f);
	cout <<v <<endl;
	
	int b = sizeof(d);
	 cout <<b <<endl;
	 
	 int n = sizeof(ch);
	 cout <<n <<endl;
	int m = sizeof(name);
	cout <<m <<endl;
	
	int x,y,sum;
	sum = (x=10,y=20,sum=x+y);
	cout<<"sum is = "<<sum <<endl;
	
	
	
	getch();
}
