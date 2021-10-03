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
		
	file.open("1.My information.txt" , ios::out |ios::app);
	cout<<"Enter your name : ";
	getline(cin,name);
	file<<name<<endl;
	
	cout<<"Successfully Added........"<<endl;
	file.close();
	getch();
	system("cls");
	}
	
	
}
