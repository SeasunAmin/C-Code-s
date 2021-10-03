#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter your choice : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		sum =sum + i ;
	}
	cout<<sum;
	
	
	getch();
}
