#include <stdio.h>

int main ()
{
	int b=6;
	for(int a=b-1;a>=1;a--)
	{
		for(int b1=1;b1<=b-a;b1++)
		{
		printf("*");
		}
		
		for (int a1= 1;a1<=2*a-1;a1++)
		{
			printf(" ");
		}
		
		for(int b1=1;b1<=b-a;b1++)
		{
		printf("*");
		}
		printf("\n");
	}
	
	for(int a=1;a<=2*b-1;a++)
	{
		printf("*");
	}
	
} 
