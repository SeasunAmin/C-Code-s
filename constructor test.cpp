#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public :
		int id;
		double gpa;
		void dispaly()
		{
			cout<<"ID = " <<id <<" GPA = "<<gpa <<endl;
		
			
		}
	   
	   student(int x,double y)
	   {
	   	 
    		id = x;
			gpa = y;
	   }
     
};

int main()
{
	student seasun(1001,3.67);
	seasun.dispaly();
	
	student kamal(1002,3.89);
	kamal.dispaly();
} 
