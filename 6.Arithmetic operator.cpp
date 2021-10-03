#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("color 0C");
    int num1 = 10,num2 = 100;
    
    int sum = num1 + num2;
     cout<<"\nSumation = "<<sum;
     
	int sub = num2 - num1;
	cout<<"\nSubstraction = "<<sub;
	
	int mul = num1 * num2;
	cout<<"\nMultiplication = "<<mul;
	
	double div = (float )num1 / num2 ;
	cout<<"\nDivision = "<<div;
	
	int re = num1 % num2 ;
	cout << "\nRemainder = "<<re;
	
	
  getch();
}



