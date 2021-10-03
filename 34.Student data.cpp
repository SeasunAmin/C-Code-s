#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int num,sum=0;
     
	 cout<<"Enter the number of student's  : ";
     cin >>num;
     int student [num];
     
	 for(int i = 0; i<num; i++)
	  {
	 	cout <<"Enter marks for student " <<i+1 <<" = ";
	 	cin>>student[i];
		 sum =sum +student[i];
	  } 
    cout<<"\nTotal marks = " <<sum <<endl;
    float ave;
    ave = (float)sum/num;
    cout<<"Avarage = "<< ave <<endl;
    
	int max = student[0];
    int min = student[0];
    
    for(int i =0; i<num;i++)
 
     {
     	if(max <student[i] )
     	{
     		max = student[i];
		}
     	if(min>student[i])
        {
        	min = student[i];
		}
	 } 
	cout<<"Maximum number = " <<max <<endl;
	cout<<"Minimum number = " <<min <<endl;
	getch();
}
