#include<stdio.h>

int main ()
{
	int baris;
	
	//Huruf C
	for (baris=1;baris<=4;baris++)
	{
		printf(" C");
	}
	printf("\n");
	for(baris=2;baris<5;baris++)
	{
		printf("C \n");	
	}
	for (baris=5;baris<=8;baris++)
	{
		printf(" C");
	}
	printf("\n\n");
	
	//huruf A
	for (baris = 1; baris < 6; baris++)
	{
		printf(" ");
	} 
	printf("A\n");  //baris 1
	
		for (baris= 2; baris < 5; baris++)
		{
			printf(" ");
		}	
		printf("A");
		
		for (int a1 = 1; a1 < 4; a1++)
		{
			printf(" ");
		}	
		printf("A\n"); //baris 2
	
			for (baris= 3; baris < 5; baris++)
			{
				printf(" ");
			} 
			printf("A"); 
			
			for (int a1= 3; a1 < 8; a1++)
			{
				printf(" ");
			}	
			printf("A\n"); //baris 3
	
				for (baris = 4; baris < 5; baris++)
				{
					printf(" ");
				}	
				printf("A");
				
				for (int a1= 4; a1 < 8; a1++)
				{
					printf(" A");
				}	
				printf("\n"); //baris 4
	
	printf("A");
	for (baris = 5; baris < 14; baris++)
	{
		printf(" ");
	}
	printf("A\n\n"); //baris 5
	
	//huruf K
	for (baris=1; baris< 3;baris++)
	{
		printf(" K");
		for (int k1 = 3 ; k1 > baris; k1--)
		{
			printf(" ");
		}
		printf(" K\n");
	}
	
	for (baris = 3; baris < 5; baris++)
	{
		printf(" K");
	}
	printf("\n");
	
	for (baris= 4; baris < 6; baris++)
	{
		printf(" K");
		for (int k1a =  3;k1a < baris; k1a++)
		{
			printf(" ");
		}
		printf(" K\n");
	}	
	printf("\n\n");
	
	//huruf R
	for (baris= 1 ; baris < 3 ;  baris++)
	{
		printf(" R");
		for (int r1 = 1; r1 < baris; r1++)
		{
			printf(" ");
		}
		printf(" R\n");
	}
	
	for (baris= 4 ; baris < 7 ;  baris++)
	{
		printf(" R");
		for (int r1 = 4; r1 < baris; r1++)
		{
			printf(" ");
		}
		printf(" R\n");
	}
	printf("\n\n");
	
		//huruf A
	for (baris = 1; baris < 6; baris++)
	{
		printf(" ");
	} 
	printf("A\n");  //baris 1
	
		for (baris= 2; baris < 5; baris++)
		{
			printf(" ");
		}	
		printf("A");
		
		for (int a1 = 1; a1 < 4; a1++)
		{
			printf(" ");
		}	
		printf("A\n"); //baris 2
	
			for (baris= 3; baris < 5; baris++)
			{
				printf(" ");
			} 
			printf("A"); 
			
			for (int a1= 3; a1 < 8; a1++)
			{
				printf(" ");
			}	
			printf("A\n"); //baris 3
	
				for (baris = 4; baris < 5; baris++)
				{
					printf(" ");
				}	
				printf("A");
				
				for (int a1= 1; a1 < 5; a1++)
				{
					printf(" A");
				}	
				printf("\n"); //baris 4
	
	printf("A");
	for (baris = 5; baris < 14; baris++)
	{
		printf(" ");
	}
	printf("A\n\n"); //baris 5


}

	
