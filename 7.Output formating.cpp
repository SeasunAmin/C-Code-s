#include<iostream>
#include<conio.h>
#include<iomanip> //
using namespace std;
int main()
{
     double num1,num2;
	 system("color 0C");
	 
	 cout<<showpoint;
	 cout<<fixed;
     cout <<setprecision(2);
	 cout<<"Enter two number's : " ;
     cin>>num1 >>num2;
    
     double sum = num1 + num2;
     cout <<setw(30)<<"\nSumation = "<<sum;
     
	double sub = num1 - num2;
	cout<<setw(20)<<"\nSubstraction = "<<sub;
	
	float mul = num1 * num2;
	cout<<setw(10)<<"\nMultiplication = "<<mul;
	
	double div = (float )num1 / num2 ;
	cout<<setw(20)<<"\nDivision = "<<div;
	
	
	
	
  getch();
}



