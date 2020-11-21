#include <stdio.h>

int main ()
{
	int n,x,y;
	
	printf("Masukkan Jumlah Array = ");
		scanf("%d", &n);
	int array[n];
	
	for (x=0; x < n; x++)
	{
		printf("Masukkan Angka = ");
		scanf("%d",&array[x]);
	}
	
	for (x = 0; x < n; ++x)
	{
		for(y=0; y < n-x-1;++y)
		{
			if (array[y] > array [y+1])
			{
				array[y] = array[y] + array[y+1];
				array[y+1] = array[y] - array[y+1];
				array[y] = array [y] - array [y+1];
			}
		}
	}
	
	printf("\n");
	for (x=0; x < n; x++)
	{
		printf("%d \t",array[x]);
	}
	
	printf("\n Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
