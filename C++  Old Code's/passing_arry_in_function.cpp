#include<iostream>
#include<conio.h>
using namespace std;
 void arry (int x[],int y )
 {
 	for(int i = 0;i<5;i++)
 	cout <<x[i] <<" ";
 }

int main()
{
	int num[5] ={10,20,30,40,50}; 
	
	arry (num,5);
	
	getch();
}
