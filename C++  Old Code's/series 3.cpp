//2+4+6.......n
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int i,sum=0,num;
	cout <<"Enter a number : ";
	cin >>num;
	for (i=1;i<=num;i=i+2)
    sum = sum +i;
	cout << sum;
	
	
	
	
	
	getch();
}
