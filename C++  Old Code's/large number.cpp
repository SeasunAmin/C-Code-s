#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	 int num1,num2,num3;// int large
	 cout<<"Enter three number : ";
	 cin >> num1>>num2>>num3;
	  
	  if(num1>num2 && num1>num3)
	  // large = num1;
	  cout<<"Large number : "<<num1 ;
	  
	  else if (num2>num1 && num2>num3)
	  //large = num2;
	  cout<<"Large number : "<<num2;
	  
	  else
	  //large = num3;
	   cout<<"Large number : "<<num3;
	
	//cout<<"large number is :"<<lage; 
	
	
	
	
	
	getch();
}
