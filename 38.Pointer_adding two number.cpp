#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  	int x = 10, y = 20;
	int *p, *q;
	
	p = &x;
	q = &y;
	int sum = *p + *q;
	
	cout <<"SUM = "<<sum;  	
	
	
	getch();
}
