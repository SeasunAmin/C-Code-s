#include<iostream>
#include<string.h>
using namespace std;
class student
{
   private :
   	double cgpa;
   	
	public:
		void setGpa(double x)
		{
			cgpa = x;
		}
	double getGpa()
	    {
          return cgpa;		
 		}	
   		
   public :
   	
   	string name;
   	int id;
   	double gpa;
   	void output()
   	   {
			cout<<"Enter name = ";
		    cin>>name;
			cout<<"Enter ID = " ;
			cin>>id;
			cout<<"Enter GPA = ";
			cin>>gpa;
			cout<<"Name = " <<name <<endl <<"ID = " <<id <<endl;  // <<"GPA = " <<gpa <<endl;    		
	   }
 
 	
};
int main()
{
	
  student ob1;
  	ob1.name = "seasun";
  	ob1.id = 200101490;
  	ob1.gpa = 4.67;
  	cout<<"Name = "<<ob1.name <<endl;
  	cout<<"ID = "<<ob1.id<<endl;
  	cout<<"GPA = "<<ob1.gpa <<endl;
  	
	  student ob2;
	  ob2.output();
	  cout<<"CGPA = " <<ob2.getGpa();
	
}





