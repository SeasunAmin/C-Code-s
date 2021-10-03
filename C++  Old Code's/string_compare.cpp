#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
	char name[]="seasun";
    char name2[]="SEASUN";
    int value = strcmp(name,name2);
    if(value==0)
    cout<<"string's are epual";
    else
    cout<<"string's are not epual";
	
	
	getch();
}
