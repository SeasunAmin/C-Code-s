#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	 int num;
	 cout<<"Enter mark : ";
	 cin >> num;
	  
	  if(num>32)
	  {
	  	   
	   if (num>=80)
	  cout<<"A+";
	  
	  else if(num>=70)
	   cout<<"A";
	  
	  else if (num>=60)
	  cout<<"A-";
	  
	  else if (num>=50)
	  cout<<"B";
	  
	  else if(num>=40)
	  cout<<"C";
	  else if (num>=33)
	  cout<<"D";
	  	
	  }
	  
	  else
	  {
	  	 cout<<"Fail";
	  	  cout<<"Better luck for next time";
	  }
	 
	   
	
	
	
	
	
	
	
	getch();
}
