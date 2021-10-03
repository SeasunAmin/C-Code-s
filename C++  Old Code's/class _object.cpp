#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public :
		int id;
		double gpa;
};

int main ()
{
  
	
	student seasun,kamal;
	seasun.id  = 200101490;
	seasun.gpa = 3.75;
	cout<<"ID = "<<seasun.id<<endl;
	cout<<"GPA = "<<seasun. gpa<<endl; 
	
	kamal.id = 200101;
	kamal .gpa = 2.53;
	cout<<"ID = "<<kamal.id<<endl;
	cout<<"GPA = "<<kamal.gpa<<endl;
	
	
	getch();
}
