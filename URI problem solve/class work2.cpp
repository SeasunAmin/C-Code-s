#include<stdio.h>
#include<conio.h>

    int show(int num)
	{
		if(num>0 && num%2==0)
		printf("\n %d is a Possitive Odd Number.",num);
		
		else if(num<0 && num%2==0)
		printf(" %d is a Negatiove Odd Number.",num);
		
		else 
		printf("It will be zero/other number!.");
		
	}
	
int main()
{
	
	int num;	
	printf(" ENTER A NUMBER : ");
	scanf("%d",&num);
	show(num);
	getch();
	
}
