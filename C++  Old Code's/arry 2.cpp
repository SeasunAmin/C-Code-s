#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number[5];
	
	for(int a=0;a<5;a++)
	{
		cout<<"Enter mark for stubent "; cout <<a+1 <<" = ";
		cin>> number[a];
	}
	
	cout<<"Mark's are : ";
	for(int i=0;i<5;i++)
	cout <<number[i] <<" ";
	
	
	
	
	getch();
}
