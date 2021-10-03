#include<iostream>
#include<conio.h>
using namespace std;
 class student
 {
 	public :
 	 
	 int id;
	 double gpa;
	 void disply()
	 {
	 	cout <<id <<" " <<gpa <<endl;  
	 }  
  student (int x,double y)
     {
     	id = x;
     	gpa = y;
	 }
	 student()
	 {
	 	cout <<"Default constructor"<<endl;
	 }
 	
 };

int main ()
 {
 	student op;
 	student seasun (101,3.75);
 	seasun.disply();
 	
 	student abul(102,3.44);
 	abul.disply();
 	
 	
 	
 	getch();
 }
