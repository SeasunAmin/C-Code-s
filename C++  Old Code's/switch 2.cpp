#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

 char latter;
 cout <<"Enter a latter : ";
 cin  >>latter;
 
 latter = tolower(latter);
  
  switch(latter)
   {
     case 'a' :
	 case 'e' :
 	 case 'i' :
 	 case 'o' :
 	 case 'u' :
 	 	cout<<"vowel";
	 
 	 
    default :
 	 cout << "Consonunant";
  } 
 
 getch();
 
 }
