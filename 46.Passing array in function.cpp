#include<iostream>
#include<conio.h>
using namespace std;
void display(int num [] , int size)
{
	for(int i = 0 ;i<=4; i++)
	{ 
	  cout<<num[i] <<" ";
	}
	
}
int main()
{
	
	int number[] = {10,20,30,40,50};
	display(number,5);
	
	
	
	getch();
}
