#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int a,b,r, luas, keliling;
	int pil;
	
	printf("Menu : \n");
	printf("1. Menghitung luas dan keliling persegi panjang \n2. Menghitung luas dan keliling lingkaran \n3. Menghitung luas dan keliling segitiga \n");
	printf("Pilihan anda : ");
	scanf("%d", &pil); 

	printf("Masukkan a : ");
		scanf("%d",&a); 
	printf("Masukkan b : ");
		scanf("%d",&b);	
	printf("Masukkan r : ");
		scanf("%d", &r);	
	
	switch(pil){
		case 1 :
		{
		keliling = (2*a)+(2*b) ;
		luas = a*b ;
		printf("Keliling Persegi Panjang   : %d cm \n", keliling);
		printf("Luas Persegi Panjang       : %d cm2 \n", luas); 
		break;	
		}
		case 2 :
		{
		float phi = 3.14;
		keliling = phi*r*r ;
		luas = 2*phi*r ;
		printf("Keliling Lingkaran   : %d cm \n", keliling);
		printf("Luas Lingkaran       : %d cm2 \n", luas); 
		break;	
		}
		case 3 :
		{
		keliling = a + b + r ;
		luas = (a*b)/2 ;
		printf("Keliling segitiga   : %d cm \n", keliling);
		printf("Luas Segitiga       : %d cm2 \n", luas); 
		break;	
		}
			
		default :
		printf("Data tak ditemukan, program diberhentikan\n"); 
		system("pause"); 
		system("cls");

	}
	
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
