#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("color 0A");
	int num;
	
	while(1)
	{
		cout<<"\tEnter any number between 1 - 5 : ";
	cin>>num;
	int random = rand()%5+1;
	
	if(num == random)
	{
		cout<<"\tYou wo the game"<<endl;
	}
	 else
	 {
	 	cout<<"\tYou loss the game...!!"<<endl;
	 	cout<<"\tThe Random number was : "<<random <<endl;
	 }
	 getch();
	system("cls");
	}
getch();
}

