#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int pilihan;
	int p, l, t, r;
	float phi = 3.14;
	char jawab;
	do
	{
	printf("MENU \n");
	printf("0.\t KELUAR \n");
	printf("1.\t HITUNG VOLUME BALOK \n");
	printf("2.\t HITUNG VOLUME BOLA \n");
	printf("3.\t HITUNG VOLUME KERUCUT \n");
	printf("4.\t HITUNG VOLUME SILINDER \n");
	printf("5.\t HITUNG VOLUME LIMAS SEGITIGA \n");
	printf("MASUKKAN PILIHAN ANDA : ");
		scanf("%d", &pilihan);
	
	switch(pilihan)
	{
		case 0:
			{
				printf("Program akan segera berhenti...");
				system("pause");
				system("cls");
				return 0; break;
			}
		
		case 1:
			{
			int vol;
			 printf("Anda memilih menghitung Balok! \nSilahkan masukkan angka:\n");
			 	printf("Nilai P = ");
			 		scanf("%d",&p);
			 	printf("Nilai L = ");
			 		scanf("%d",&l);
			 	printf("Nilai T = ");
			 		scanf("%d",&t);
			 	vol = p*l*t;
			 	printf("\nLUAS BALOK adalah %d \n",vol); break;
			}
			
		case 2:
			{
			float vol;
			 printf("Anda memilih menghitung Bola! \nSilahkan masukkan angka:\n");
			 	printf("Nilai r = ");
			 		scanf("%d",&r);
			 	vol = (4/3*phi*(r^3));
			 	printf("\nLUAS BOLA adalah %.2f \n",vol); break;		
			}
			
		case 3:
			{
			float vol;
			 printf("Anda memilih menghitung Kerucut! \nSilahkan masukkan angka:\n");
			 	printf("Nilai r = ");
			 		scanf("%d",&r);
			 	vol = (phi*(r^2)/3);
			 	printf("\nLUAS KERUCUT adalah %.2f \n",vol); break;
			}
			
		case 4:
			{
			float vol;
			 printf("Anda memilih menghitung Silinder! \nSilahkan masukkan angka:\n");
			 	printf("Nilai r = ");
			 		scanf("%d",&r);
			 	printf("Nilai r = ");
			 		scanf("%d",&t);
			 	vol = (phi*(r^2)*t);
			 	printf("\nLUAS SILINDER adalah %.2f \n",vol); break;
			}	
			
		case 5:
			{
			float vol;
			 printf("Anda memilih menghitung Limas Segitiga! \nSilahkan masukkan angka:\n");
			 	printf("Nilai p = ");
			 		scanf("%d",&p);
			 	printf("Nilai t = ");
			 		scanf("%d",&t);
			 	vol = ((p*1/2)*t);
			 	printf("\nLUAS SILINDER adalah %.2f \n",vol); break;
			}
		
		default: 
			printf("INPUT TIDAK DIKETAHUI \n");
			system("pause");
			system("cls");					
	}
	
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037\n");
	printf("Apakah ingin menghitung kembali (Y/N) )? ")	;
		scanf("%s",&jawab);	
	} while(jawab == 'Y' || jawab == 'y');

	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
