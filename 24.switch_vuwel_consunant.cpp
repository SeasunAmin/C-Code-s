#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	char ch;
	cout<<"Enter any letter : ";
	cin>>ch;
	ch= tolower(ch);
	switch(ch)
		
		{	
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'n':
		cout<<"VOULE...!!";
		break;
		
		default :
			cout<<"CONSUNALT";
		
		
		
		}
		
	
	
	getch();
}
