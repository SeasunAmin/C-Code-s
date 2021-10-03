#include <iostream>
#include <fstream>
#include <string>
#include<conio.h>
using namespace std;


int main () 
{
	  string output;
	  int email=0,web=0;
  	  string myText;
      int i=0;
	


  
  ifstream MyReadFile("output_02.txt");


  while (getline (MyReadFile, myText)) {
    
    string s = myText;

    if (s.find("@") && s.find("gmail.com") != string::npos)
    {
        email++;
        
    }
    else if(s.find("www.") &&s.find(".com") != string::npos){
        web++;
    }
  }
	system("Color 0A");
    cout<<"\nThere are "<<email<<" email address."<<endl;
    cout<<"There are "<<web<<" website address."<<endl;
    cout<<"\n\n.................................."<<endl;
  
  
  MyReadFile.close();
  getch();
  


    
}
