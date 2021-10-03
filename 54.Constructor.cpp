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
    student (int x, double y)
	{
		id  = x;
		gpa = y;
	}
	
};

int main()
{
	student seasun (101,3.67);
	 seasun.display();
	 
	 
	student kamal(102,3.89);
	 kamal.display();
	
}
