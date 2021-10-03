#include<iostream>
#include<conio.h>
using namespace std;


template<class input>

input add (input a , input b)
{
  
	return a+b;
}

int main()
{

	cout<< "Result = " <<add(11.4,4.2);
	
	getch();
}
