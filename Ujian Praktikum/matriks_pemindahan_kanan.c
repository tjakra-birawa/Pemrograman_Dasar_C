#include <stdio.h>

int main()
{
	int array[4][4] ={{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {1,0,0,0}};
	int n, x, y, i=4, sementara;
	
	printf("Sebelum : \n");
	for (x=0; x < i; x++)
	{
		for(y=0; y < i; y++)
		{
				printf("%d ", array [x][y]);
		}
		printf("\n");
	}
	
	printf("==================\nsesudah :\n");
	for (n=0; n < 3; n++)
	{
		for (x=0; x < i; x++)
		{
			for (y=0; y <= i; y++)
			{
				
				sementara = array [x][y];
				array[x][y] = array[x][y-1];
				array[x][y-1]= sementara;
							
				
		
				printf("%d ", sementara);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	
}
