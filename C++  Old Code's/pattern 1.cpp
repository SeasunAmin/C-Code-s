//2+4+6.......n
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int i,row,col,num;
	
	cout <<"Enter a number : ";
	cin >>num;
	
	for (row=1;row<=num;row++)
        {
        	for(col=1;col<=row;col++)
        	{
        		cout<<" "<<col;
			}
        	cout<<endl;
		}
	
	
	
	
	getch();
}
