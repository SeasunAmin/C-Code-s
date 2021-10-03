#include<iostream>
#include<conio.h>
using namespace std;
void sum(int x,int y)
{
	int add = x+y;
	cout<<"sum = " <<add <<endl;
}
void sum(int x,int y,int z)
{
	int add = x+y+z;
	cout<<"sum = " <<add <<endl;
}
int main()
{
	
	
	sum(10,20);
	sum(40,50,60);
	
	getch();
}
