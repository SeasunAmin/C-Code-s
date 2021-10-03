#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class NUBStudents
{
	private :
		double cgpa;
		
	public :
	   	void setName(double x)
		 {
		 	cgpa = x;
		 }

		 double getName()
			{
				return cgpa;
				
			}
	
		public :
			string name;
			int id;
			void data(string x ,int y)
			{
				 name = x;
				 id = y;
				
			}
};  
    
int main()
{
	
	
	NUBStudents ob1;
	ob1.setName = (3.67);
	cout<<ob1.getName();
	
	
	
	
	
	
}
