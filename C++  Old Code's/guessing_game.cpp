#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
   while (1)
      {
      	
      	int guess,random;
   cout <<"ENTER YOUR GUESS BETWEEN 1 TO 5 :  ";
   cin  >> guess ;
   cout<<endl;
   random = rand() % 5 +1;
   if (guess==random)
   cout << "You won the game..!"<<endl;
   else
   {
   	cout <<"You lost the game..!"<<endl;
   	cout <<"Random number was : "<<rand <<endl;
   }
	  }
  
getch ();
}
