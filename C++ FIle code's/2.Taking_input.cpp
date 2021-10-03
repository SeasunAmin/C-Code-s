#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int age;
	ofstream file;
	file.open("Details.txt" , ios::out |ios::app);
for(int i = 0; i<=3; i++)
	{
	
	cout<<"Enter your name : ";
	getline(cin,name);
	file<<name <<"\t";
	
	cout<<"Enter your age :";
	cin>>age;
	file<<age <<endl;
	cin.ignore();
	cout<<"Successfully Added........"<<endl;
	
	
	}
	
	file.close();
}
