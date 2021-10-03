#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string name;
	
	ofstream file;
	
	while(1)
	{
		
	file.open("My information.txt");
	cout<<"Enter your name : ";
	getline(cin,name);
	file<<name<<endl;
	
	cout<<"Successfully Added........"<<endl;
	
	getch();
	system("cls");
	}
	
	file.close();
}
