#include <stdio.h>

int main()
{
	int array[4][4] ={{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {1,0,0,0}}; //deklarasi array yang dimaksud
	int n, x, y, z; //integer untuk menunjukkan posisi dan letaknya
	int i=3, sementara=0; //integer yang memiliki nilai tetap
	
	printf("SEBELUM : \n\n");
	//matriks awal
	for (x=0; x < 4; x++) //looping untuk mencetak baris matriks 1
	{
		for(y=0; y < 4; y++) //looping untuk mencetak  kolom matriks 1
		{
				printf("%d ", array [x][y]); //mencetak matriks 1
		}
		printf("\n");
	}
	
	printf("==================\nSESUDAH KEKANAN :\n");


	//matriks 2 (yang kekanan)
	printf("\n\n");
	for (y=0; y< i; y++) //looping untuk increment pada kolom matriks 2 (sekaligus rumus dari perpindahan)
	{
	sementara = array[i][y+1];
	array[i][y+1] = array[i][y];
	array[i][y]=sementara;
	
		for(z=0; z <4; z++) //looping untuk mencetak baris pada matriks  2
		{
			for(n=0; n < 4; n++) //looping untuk mencetak kolom pada matriks 2
			{
				printf("%d ", array[z][n]); //mencetak matriks 2
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("==================\nSESUDAH NAIK :\n");	
	//matriks 3 (yang keatas)
	printf("\n\n");
	for (x= i; x > 0; x--) //looping untuk decrement pada baris matriks 3 (sekaligus rumus dari perpindahan)
	{
		sementara = array[x-1][i];
		array[x-1][i] = array[x][i];
		array[x][i]=sementara;		
		
		for(z=0; z < 4;z++) //looping untuk mencetak baris pada matriks 3
		{
			for(n=0; n < 4; n++) //looping untuk mencetak kolom pada matriks 3
			{
				printf("%d ", array[z][n]); //mencetak matriks 3
			}
			printf("\n");
		}
		printf("\n");
	}
	
 	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
