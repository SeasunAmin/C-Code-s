#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"ENTER ANY LETTER : ";
	cin>>ch;
	
	if(ch== 'a' || ch =='e' ||ch =='i' || ch=='o' || ch=='n'  )  //ch=tolower(ch),, for converting the letter 
	cout<<"Vouele..";
	
	else if(ch== 'A' || ch =='E' ||ch =='I' || ch=='O' || ch=='N'  )
	cout<<"Vouele..";
	
	else
	cout<<"consunant";
	
	
	getch();
}
