#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class NUBStudents
{
			
	private :
	double cgpa;
	
	public :
	void setcgpa(double x)
		{
			cgpa = x;
		}
	
	double getcgpa ()	
	{
		return cgpa;
	}
		
		string name;
		int emp_id;
		
	
	
	
};

int main()
{
	system("color 0B");
	
	
    NUBStudents ob;
	ob.cgpa(70000);
	cout<<"Employee salary = "<<ob.getcgpa()<<endl; 
	
	
	getch();
}
