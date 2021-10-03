#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main() 
{
	
	float n=0,m=0;
	cout <<"Enter two number : ";
	cin  >>n ,cin >>m;
      
      cout<<showpoint;
      //cout<<noshowpoint;
       cout<<fixed;
       cout<<setprecision(2);
	float sum = n + m;
	cout<<setw(20)<<"The sum is : "<<sum<<endl;
     
    float sub = n    - m;
	cout<<setw(20)<<"The sub is : "<<sub<<endl;
	
	float mul = n * m;
	cout<<setw(20)<<"The mul is : "<<mul<<endl;
	
	
	double div = (float)n / m;
	cout<<setw(20)<<"The div is : "<<div<<endl;


	
	
	
	
	getch();
}
