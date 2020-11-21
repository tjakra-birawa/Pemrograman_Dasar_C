#include <stdio.h>


int main ()
{
	int jam, jamkerja, upah = 0, total, denda = 0, lembur = 0;
	int max = 60, min = 50;
	
	printf("Jam Kerja\t: ");
		scanf("%d", &jamkerja);

	
	if (jamkerja < min)
	{
		jam= jamkerja-min;
		upah = jamkerja*5000;
		denda = jam*1000;	
	}
	
	else if ( jamkerja >= min && jamkerja <= max)
	{
		upah = jamkerja*5000;	
	}
		
	else
	{
		jam = jamkerja-max;
		upah = 60*5000;
		lembur =  jam*6000;		
	}
		total= upah + lembur + denda;
		printf("Upah\t= Rp. %d \n",upah);		
		printf("Lembur\t= Rp. %d \n", lembur);
		printf("Denda\t= Rp. %d \n",denda);
		printf("----------------------- \n");
	printf("Total\t= Rp. %d \n",total);
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
}
