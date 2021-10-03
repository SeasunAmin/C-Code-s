#include<iostream>
using namespace std;
int main()
{
	int choice;
	double in;
	char job;
	int job2;
	string N1,Ad,Ho;
	
	cout<<"1.Teenager"<<endl;
	cout<<"2.Child"<<endl;
	cout<<"3.Adult Person" <<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	
	if(choice == 1)
	{
		cout<<"Enter your name : ";
		cin>>N1;
		cout<<"Enter your Address : ";
		cin>>Ad;
		cout<<"Enter your Hobby : ";
		cin>>Ho;
		cout<<"Ok thank you"<<endl;
	}
	else if (choice ==2)
	{
		cout<<"\n\n Hello Dear Your are not grown yet.Please leave...." <<endl;
	}
	
	else if(choice == 3)
	{
		cout<<"Enter your name : ";
		cin>>N1;
		cout<<"Enter your Address : ";
		cin>>Ad;
		cout<<"Enter your Hobby : ";
		cin>>Ho;
		cout<<"Enter your monthly income : ";
		cin>>in;
		cout<<"Do you have any job?(y/n) "<<endl;
		cin>>job;
		    if(job=='y')
		       {
		       	  cout<<"1.Goverment job"<<endl;
		       	  cout<<"2.Private job"<<endl;
		       	  cin>>job2;
		       	   if(job2==1)
		       	      {
		       	      	string lo;
		                cout<<"Add your job location : ";
						cin>> lo;      
						cout<<"\n\n\n OK dear thank you.";	   	
					  }
		       	    else
		       	       {
		       	       	int tin;
		       	         cout<<"Add your Tin number : "	;
		       	         cin>>tin;
						 cout<<"\n\nOK dear thank you.";
		       	         
					   }
			   }
		else
		cout<<"Ok thank you"<<endl;
	}
	else 
	cout<<"Ok thank you"<<endl;
}
