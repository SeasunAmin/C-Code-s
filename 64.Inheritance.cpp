#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class person
{
	public :
		string name;
		int age;
		void display()
		{
			cout << " Name = " <<name <<endl;
			cout << " Age = " <<age <<endl;
		}
	
};
 class student: public person
 {
 	public :
 		int id;
 		void display2()
 		{
 		  cout <<" ID = " <<id <<endl;
		   display();	
		}
 };
int main()
{
	student ob;
	ob.id = 20100;
	ob.name = "SEASUN";
	ob.age = 21;
	ob.display2();
	getch();
}
