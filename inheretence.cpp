#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person 
{
   public :
      string name;
	  int age;
	  void display1()
	  {
	    cout<<"Name = "<<name <<endl;
		cout<<"Age = " <<age <<endl;	
	  }	
};
class student : public person
{
	public :
	int id;
	void display2()
	{
		cout<<"Name = "<<name <<endl;
		cout<<"Age = " <<age <<endl;
		cout<<"ID = " <<id <<endl;	
	}
};
int main()
{
	student s1;
	s1.name="NAZRUL AMIN SEASUN";
	s1.age = 21;
	s1.id = 200101490;
	s1.display2();
	
	getch();
}
