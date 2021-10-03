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
	
    void setvalue(int x,double y)
    {
    		id = x;
			gpa = y;
	}
};

int main()
{
	student seasun ,kamal;
	seasun.setvalue(1001,3.67);
	seasun.dispaly();
	
	kamal.setvalue(1002,3.89);
	kamal.dispaly();
} 
