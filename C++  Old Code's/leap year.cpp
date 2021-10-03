 #include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	 int num;
	 cout<<"Enter any year : ";
	 cin >> num;
	  
	  if( num % 4 == 0 && num % 100!=0)
	  cout<<"Leap year";
	  
	  else if (num%400==0)
	  cout<<"Leap year";
	  
	 else 
	 cout<<"Not Leap year";
	
	getch();
}
