#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
	int matriks1[3][3];
	int matriks2[3][3];
	int matriks3[3][3];
	int matriks4[3][3];
	int pilihan;
	int x,y;

	
	printf("Program Penjumlahan dan Penggurangan Array 2D\n");
	printf("=============================================\n\n");
	
	for(x=0; x < 3; x++)
	{
		for(y=0; y < 3; y++)
		{
			printf("Matriks 1 [%d][%d] = ",x,y);
				scanf("%d",&matriks1[x][y]);
		}
	}
	
	for(x=0; x < 3; x++)
	{
		for(y=0; y < 3; y++)
		{
			printf("Matriks 2 [%d][%d] = ",x,y);
				scanf("%d",&matriks2[x][y]);
		}
	}
	
	for(x=0; x < 3; x++)
	{
		for(y=0; y < 3; y++)
		{
			printf("Matriks 3 [%d][%d] = ",x,y);
				scanf("%d",&matriks3[x][y]);
		}
	}
	
	printf("\n\nSilahkan Memilih:\n 1. Penjumlahan\n 2. Pengurangan\n\n");
	printf("Pilihan Anda (1/2) : ");
		scanf("%d",&pilihan);
	
	for(x=0; x < 3; x++)
	{
		for(y=0; y < 3; y++)
		{
			switch(pilihan)
			{
				case 1:
					{
						matriks4[x][y] = matriks1[x][y] + matriks2[x][y] + matriks3[x][y];
						break;
					}
				case 2:
					{
						matriks4[x][y] = matriks1[x][y] - matriks2[x][y] - matriks3[x][y];
						break;	
					}
				
				default :
					{
						printf("Pilihan Tidak Tersedia! Aplikasi akan Menutup..\n");
						system("pause");
						system("cls");
						break;
					}
			}
			printf("%d \t",matriks4[x][y]);
		}
		printf("\n");	
	}
		
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
	
}
