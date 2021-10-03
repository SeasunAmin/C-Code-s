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
		cout<<id <<" " <<gpa <<endl;
	}
};

int main()
{
	student seasun,kamal;
	
	 seasun.id = 10023;
	 seasun.gpa = 3.56;
	 seasun.display();
	 
	 kamal.id = 10025;
	 kamal.gpa = 3.76;
	 kamal.display();
	
}
