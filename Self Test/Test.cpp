#include<iostream>
#include<conio.h>
#include<fstream> 
using namespace std;
	
	ofstream file;
	string name;
    int pass;
	int num;
	
	string read;
	string user,u,ps;
	
	
void reg ()
{
	file.open("Data.txt");
	cout<<"\n\n\tEnter your Username : ";
	getline(cin,name);
	getline(cin,name);
	
	cout<<"\n\tEnter your Password : ";
	cin>>pass;
 	 
	
	file<<name <<" " <<pass <<endl;
	cout<<"Successfully Complite."<<endl;
   
     getch();
	system("cls");

}

int main()
{
	while(true)
	{
		cout<<"\t\t 1.Registeration.";
	    cout<<"\n\t\t 2.Login."<<endl;
	
	cout<<"\n\t Enter : ";
	cin>>num;
	
	if(num==1)
	{
		reg();
	}
	
	else if(num==2)
	{
		
		
		cout<<"\nEnter username : ";
		cin>>user;
		cout<<"Enter Password : ";
		cin>>ps;
		
		ifstream file1("Data.txt");
		
		getline(file1,read);
		
			if(user ==name )
			cout<<"\n\n Hello";
			
			else
			cout<<"sorry";
			cout<<endl;
		
		getch();
		system("cls");
	    
	}

	
	
	}
	
}


