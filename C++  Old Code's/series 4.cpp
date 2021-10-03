//2+4+6.......n
#include<iostream>
#include<conio.h>
//#include<cmath>
using namespace std;
int main ()
{
	int i,sum=0,num;
	cout <<"Enter a number : ";
	cin >>num;
	for (i=2;i<=num;i=i+1)
    sum = sum +i*i; // pow(i,2) laibary function
	cout << sum;
	
	
	
	
	
	getch();
}
