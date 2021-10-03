#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	 char num;
	 cout<<"Enter any latter : ";
	 cin >> num;
	 
	  num = tolower(num);  //toupper() make every latter capital 
	  
	  if(num=='a'||num=='e'||num=='i' || num=='o' ||num=='u')
	  cout<<"Vowel";
	  
	 
	  else
	   cout<<"Consonante";
	
	
	
	
	
	
	
	getch();
}
