#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public :
		int id;
		double gpa;
		void display()
	    {
		cout<<"ID = " <<id <<endl <<"GPA = " <<" " <<gpa <<endl;
		}
		
		
};

int main ()
{
  
	
	student seasun,kamal;
	
	seasun.id  = 200101490;
	seasun.gpa = 3.75;
	
	seasun.display();
	
	
	
	kamal.id = 200101;
	kamal .gpa = 2.53;
	kamal.display();
	
	getch();
}
