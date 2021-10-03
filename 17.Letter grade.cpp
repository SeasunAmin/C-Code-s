#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
		int num=0;
     
     		

	cout<<"\nENTER YOUR NUMBER : ";
	cin>>num;
	
	
	 if(num>100 )
	{
	 cout<<"INVALID...!!!";
	}
	
	else if(num>=80)
    {
    		cout<<"A+";
	}
	
	else if(num>=70)
	{
		cout<<"A";
	}
	
	else if(num>=60)
	{
		cout<<"A-";
	}
	
	else if(num>=50)
	{
		cout<<"B";
	}
	
	else if(num>=40)
	{
		cout<<"C";
	
	}
	else if(num>=33)
	{
			cout<<"D";
	}
	
	else if (num<0)
	{
		cout<<"INVALID...!!!";
	}
	
	else 
	cout<<"FAIL...!!";
	


 
	
	getch();
}
