#include <stdio.h>

int main ()
{
	int h, h1, h2, pilihan;
	
	printf("Silahkan Masukkan Angka ");
		scanf("%d",&pilihan);
	for (h = 0; h < pilihan ; h++)
	{
		printf("##");
		for (h1 = 0;  h1 < pilihan ; h1++)
		{
			printf(" ");
		}
		printf("##");
		printf("\n");
	}
	
	for (h2 = 0; h2< pilihan+4	;h2++)
	{
		printf("#");
	}
	
	printf("\n");
	
	for (h = 0; h< pilihan; h++)
	{
		printf("##");
		for (h1 = 0;h1< pilihan;h1++)
		{
			printf(" ");
		}
		printf("##");
		printf("\n");
	}
}
