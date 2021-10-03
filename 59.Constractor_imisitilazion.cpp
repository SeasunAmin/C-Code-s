#include<iostream>
#include<conio.h>
using namespace std;

class student
{
   public :
  
  const int addmitionFee;
  const int examFee;
  int id;
   
   student(int x,int y,int z)
   :addmitionFee(x),examFee(y)
   {
   	
   	cout<<"Addmition Fee = " <<addmitionFee <<endl;
   	cout<<"Exam Fee = " <<examFee <<endl;
   	id = z;
   	cout<<"ID = " <<id <<endl;
   }
	
	
};

int main()
{
	student ob(10000,200,121);
	
	
	
	getch();
}
