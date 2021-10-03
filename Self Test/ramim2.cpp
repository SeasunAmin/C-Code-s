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
   cout<<"\n\n.................................."<<endl;

  int email=0,web=0;
  // Create a text string, which is used to output the text file
  
  
  string myText;
  int i=0;

  // Read from the text file
  ifstream MyReadFile("input.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    // cout << myText<<endl;
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
  // Close the file
  MyReadFile.close();
  getch();
  


    
}
