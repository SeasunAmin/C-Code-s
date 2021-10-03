#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	string name1="nazrul";
	string name2="amin";
	string name3;
	
	name3 = name1;
	
	cout<<name3<<endl;
	name3 = name1 + name2;
	cout<<name3<<endl;
	int len = name1.size();
	cout<<"size of string = "<<len;
	
	getch();
}
