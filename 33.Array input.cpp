#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num[5];
	

	//incput arry
	for(int i =0; i<5; i++)
	{
		cout<<"Enter Elements " <<i+1 <<" = " ;
		cin>>num[i];
	}
	cout<<"Elements are  :";
	for(int i = 0;i<5; i++)
	{ 
	  cout<<" "<<num[i];
	}
	getch();
}
