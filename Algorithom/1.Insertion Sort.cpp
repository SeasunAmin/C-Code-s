#include<stdio.h>
#include<conio.h>
int main()
{
	int n = 5,temp;
	int data[5] = {5,8,1,6,9};
	
	for(int i = 0; i<n; i++)
	{
		for(int j = i; j > 0  && data[j] < data[j-1]; j--) //for devcending order just change the ">".
		  
		 {
		 	temp = data[j];
		    data[j] = data[j-1];
		 	data[j-1] = temp;
		 }	  
		 
	}
	printf("In Ascending order : ");
	for(int i = 0; i<n ;i++)
	{
		printf("%d ",data[i]);
	}
	
	
	
	getch();
}
