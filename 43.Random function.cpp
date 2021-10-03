#include<iostream>
#include<stdlib.h> // for rand() function
#include<conio.h>
using namespace std;
int main()
{
  for(int i=0 ;i<=5; i++)
  {
  	int random = rand() % 5+1;
    cout <<" "<<random ;
  
  }
  getch();
}
