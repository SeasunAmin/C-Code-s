#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
	char name[]="seasun";
	char name2[10];
	int len = strlen(name);
	cout<<"lenth of string = "<<len;
	cout<<endl;
	strcpy(name2,name);
	cout<<"name 2 = "<<name2;
	
	
	
	getch();
}
