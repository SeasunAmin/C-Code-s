#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
	
	int n=0,m=0;
	cout <<"Enter two number : ";
	cin  >>n ,cin >>m;

	int sum = n + m;
	cout<<"The sum is : "<<sum<<endl;

    int sub = n    - m;
	cout<<"The sub is : "<<sub<<endl;
	
	int mul = (float)n * m;
	cout<<"The mul is : "<<mul<<endl;
	
	
	double div = (float)n / m;
	cout<<"The div is : "<<div<<endl;

	double ave = n % m;
	cout<<"THe ave is : "<<ave;
	
	
	
	
	getch();
}
