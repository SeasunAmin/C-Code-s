#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int a;
	float f;
	char ch;
	double d;
	char name[20];
	
	int p1 = sizeof(a);
	cout <<p1<<endl;
	
	int p2 = sizeof(f);
	cout <<p2<<endl;
	
	int p3 = sizeof(ch);
	cout <<p3<<endl;
	
	int p4 = sizeof(d);
	cout <<p4<<endl;
	
	int p5 = sizeof(name);
	cout <<p5<<endl;
	
	//comma operator.....
	int x,y,sum;
	
	sum =(x=20,y=30,sum=x+y);
	cout <<sum<<endl;
	
	
	getch();
}
