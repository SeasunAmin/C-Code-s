#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class NUBstudent
{    private :
	  double cgpa;
	  
	public :
		int id;
      string name;
		
	void input()
	{
		cout<<"\nEnter your ID = ";
		cin>>id;
		cout<<"\nEnter your Name = ";
		cin>>name;
		  		cout<<"ID = "<<id <<" Name = " <<name<<endl;
	}
	
};

int main()
{
  NUBstudent seasun1;
  seasun1.id = 200101490;
  seasun1.name="Nazrul Amin";
  
  NUBstudent seasun2;
  seasun2.input();
  
  


	
	
}
