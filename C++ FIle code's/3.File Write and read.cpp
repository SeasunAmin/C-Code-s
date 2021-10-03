#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string name;
	string read;
	int num;
	   
	   
	 while(true)
	 {
	 	  cout<<"1.Read"<<endl;
	   cout<<"2.Write"<<endl;
	   cout<<"Enter : ";
	   cin>>num;
	   cin.ignore();
	   if(num == 1)
	   {
		ifstream file2("1.My information.txt");
		while(getline(file2,read))
		 {
		 	cout <<read<<endl;
		 }  
		 getch();
		 system("cls");
       }
	
	else
	{
	
	
		ofstream file;
	
	
		file.open("1.My information.txt" , ios::out |ios::app);
		cout<<"Enter your name : ";
		getline(cin,name);
		file<<name<<endl;
		
		cout<<"Successfully Added........"<<endl;
		file.close();
		 getch();
		
	    system("cls");
		 
	  
	}
	
	 }
	
}
