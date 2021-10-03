#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Student
{
	public :
		string name;
		Student(string name)
		{
		 this -> name = name;
		}
	void display()
	{
		cout<<"Name = " <<name;
	}
};
int main()
{
	
	Student ob("SEASUN");
	ob.display();
	getch();
}
