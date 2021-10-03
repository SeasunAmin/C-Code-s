#include<iostream>
#include<conio.h>
using namespace std;
void addition(int,int);
void substraction(int,int);
void multiplication(int,int);
void divition(int,int);


int main()
{
 
  addition(20,30);
  substraction(20,10);
  multiplication(10,5);
  divition(100,35);
	
	getch();
}
void addition(int a ,int b)
{
	int sum = a+b;
	cout<<"SUM = " <<sum <<endl;
}

void substraction(int a ,int b)
{
	int sub = a-b;
	cout<<"SUB = " <<sub <<endl;
}
void multiplication(int a ,int b)
{
	int mul = a*b;
	cout<<"MUL = " <<mul <<endl;
}
void divition(int a ,int b)
{
	float div =(float) a/b;
	cout<<"DIV = " <<div <<endl;
}
