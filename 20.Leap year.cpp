#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout <<"ENTER ANY YEAR : " ;
	cin>>num;
	
	if(num%4==0 && num%100!=0 || num%400==0)
	cout<<"LEAP YEAR...!";
	
	else cout<<"NOT LEAP YEAR...!";
	
	
	
	getch();
}
