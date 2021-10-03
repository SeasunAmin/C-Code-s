#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	
	cout<<"ENTER any number : ";
	cin>>num;
	
	if(num%2==0)
	cout<<"EVEN...!!"<<endl;
	
	else cout<<"ODD...!!"<<endl;
	
	int x,y;
	cout<<"ENTER TWO NUMBER : "<<endl;
	cin>>x >>y;
	
	if(x>y)
	cout<<x <<" is bigger than " << y <<endl;
	
	else
	  cout<<y <<" is bigger than" << x <<endl;
	
	getch();
}
