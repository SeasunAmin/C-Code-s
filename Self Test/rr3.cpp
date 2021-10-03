#include <iostream>
#include <fstream>
#include <string>
#include<conio.h>
using namespace std;


int main () {

	

	string name,output;
	int n;
	
	
	ofstream file;
	file.open("input.txt" , ios::out |ios::app);
	cout<<"How maney address you want to store : ";
	cin>>n;
    for(int i = 1; i<=n; i++)
    	{
	 
	cout<<"\nEnter address "<<i <<": ";
	cin>>name;
	file<<name<<endl;
	
	cin.ignore();
	
	
	}
   cout<<"\n\t[SUCCESSFULLY ADDED]"<<endl;
   cout<<"\n.................................."<<endl;

  int email=0,web=0;
  string myText;
  
  int i=0,j=0,count=1,size=0;
  int email_line_no[20]={0};
  int web_line_no[20]={0};
  
  
    int length1 = sizeof(email_line_no)/sizeof(email_line_no[0]);
    int length2 = sizeof(web_line_no)/sizeof(web_line_no[0]);
    
  ifstream MyReadFile("input.txt");

  while (getline (MyReadFile, myText)) {
    
    string s = myText;

    if (s.find("@") && s.find("gmail.com") != string::npos)
    {
        email++;
        email_line_no[i]=count;
        i++;
        
    }
    else if(s.find("www.") != string::npos){
        web++;
        web_line_no[j]=count;
        j++;
    }
    
    count++;
  }


	system("Color 0A");
	
    cout<<"\nThere are "<<email<<" email address."<<endl;
    cout<<"\nThere are "<<web<<" website address."<<endl;
     
    cout<<"\n.................................."<<endl;
    
    cout<<"\nValid Email address are in line no: ";
    for(int k=0;k<length1;k++)
    {
      if(email_line_no[k]!=0)
        cout<<email_line_no[k]<<" ";
    }
    
    
    cout<<"\nValid Websit address are in line no: ";
    for(int k=0;k<length2;k++)
    {
      if(web_line_no[k]!=0)
        cout<<web_line_no[k]<<" ";
    }
 
  MyReadFile.close();
  getch();
  

    
}
