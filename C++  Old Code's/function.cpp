#include<iostream>
#include<conio.h>
using namespace std;
void addition(int a,int b)
{
	int sum = a+b;
	cout <<"Sum = " <<sum;
}

void substraction(int a,int b)
{
 int sub = a-b;
 cout <<"Substraction = " <<sub;;
 
}
void multiplication (int a,int b)
{
	int mul = a*b;
	cout<<"Multiplication = "<<mul;
	
}

void divition(int a,int b)
{
	float div =(float)a/b;
	cout <<"Divition = "<<div;
	
}
int main()
{
	addition(10,20);
	cout <<endl;

	substraction(20,10);
	cout<<endl;	
	multiplication(10,5);
	cout<<endl;
	
	divition (10,3);
	getch();
}
