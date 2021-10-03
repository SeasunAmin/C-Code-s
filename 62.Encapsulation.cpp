#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class student
{
	private :
		string name;
	
	public :
	
	void setName(string x)
		{
			name = x;
		}
	
	string getName ()	
	{
		return name;
	}
		
};
int main()
{
	student ob;
	
	ob.setName("SEASUN");
	cout<<ob.getName();
	
	getch();
}
