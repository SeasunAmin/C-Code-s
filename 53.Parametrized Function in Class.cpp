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
	void value (int x, double y)
	{
		id  = x;
		gpa = y;
	}
	
};

int main()
{
	student seasun,kamal;
	
	 seasun.value(101,3.67);
	 seasun.display();
	 
	 kamal.value(102,3.89);
	 kamal.display();
	
}
