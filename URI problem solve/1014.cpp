#include<stdio.h>
int main()
{
	int x;
	float y,result;
	
	scanf("%d%f",&x,&y);

	result = (float) x/y;

	printf("%.3f km/l \n",result);
	return 0 ;
	
}
