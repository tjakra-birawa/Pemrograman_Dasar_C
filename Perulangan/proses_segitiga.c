#include<stdio.h>

int main(){
	int baris;
	int bintang;
	int jarak;
	int baris_total;
	
	printf("Silahkan Masukkan Jumlah Baris yang akan dibuat : ");
		scanf("%d",&baris_total);
	for (baris = 1; baris <= baris_total; baris++)
	{
		for (jarak = baris_total-baris; jarak >= 1; jarak--)
		{
			printf(" ");
		}
		for(bintang = 1; bintang <= (baris*2)-1 ; bintang++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
		return 0;
}
