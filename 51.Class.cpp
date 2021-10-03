#include<iostream>
#include<conio.h>
using namespace std;

class student
{ 
  public :
  	int id;
	double gpa;	
};

int main()
{
	student seasun,kamal;
	 seasun.id = 10023;
	 seasun.gpa = 3.56;
	 
	 cout<<seasun.id <<" " <<seasun.gpa <<endl;
	 
	 kamal.id = 10025;
	 kamal.gpa = 3.76;
	 cout<<kamal.id <<" " <<kamal.gpa <<endl;
	
}
