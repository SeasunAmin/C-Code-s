#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,sum;
	cout <<"Enter number of student's : ";
	cin >> n;
	int student[n];
	
	for(int a=0;a<n;a++)
	{
		cout<<"Enter mark for stubent "; cout <<a+1 <<" = ";
		cin>> student[a];
	    sum =sum +student[a];  
	}
	cout<<"................................."<<endl;
	
	cout<<"Total Mark's are : " <<sum <<endl;
	float ave = (float)sum/n;
	cout <<"Average is : " <<ave <<endl;
	
	int max = student[0];
	int min = student[0];
	
	for(int i=1;i<n;i++)
	{
		{
			if(max < student[i])
		    max =  student[i];
		}
	}
	
		for(int i=1;i<n;i++)
	{
		{
			if(min > student[i])
		    min =  student[i];
		}
	}
	cout << "Maximum number is : "<<max << endl;
	cout << "Minimum number is : "<<min ;
	
	getch();
}
