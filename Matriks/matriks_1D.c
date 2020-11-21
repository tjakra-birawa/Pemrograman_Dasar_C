#include <stdio.h>

int main ()
{
	int i;
	int data[] = {11,3,4,7,24};
	int panjang = 7;
	
	
	printf("Sebelum\n");
	data[5]= 10;
	for (i = 0; i < panjang; i++)
	{
		printf("Index ke-%d adalah %d\n",i, data[i]);
	}
	
	for  (i = 0; i < panjang; i++)
	{
		data [i] = data [i]*2;
	}
	
	printf("\n\nSesudah\n");
	for ( i = 0; i <panjang; i++)
	{
		printf("Index ke-%d adalah %d\n",i,data[i]);
	}
	
	printf("\nCakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
}
