#include <stdio.h>

int	main()	{
	int	uang;
	int	pilihan;

	printf("Tipe Mata uang yang tersedia \n");	
	printf("1. Dolar- USA (kurs USD 1 =	Rp. 13000,-) \n");	
	printf("2. Yen - Jepang ( kurs JPY 1 = Rp. 4000,-) \n");
	printf("3. Poundsterling - Inggris( kurs 1 Poundsterling = Rp. 10.500,-) \n");
	printf("4. Euro - MEE ( kurs EUR 1 = Rp. 8.900,-) \n");
	printf("5. Riyal - Arab Saudi ( kurs 1 Riyal = Rp. 1100,-) \n");
	printf("Masukkan jenis mata uang anda : ");					
		scanf("%d",	&pilihan);

	switch(pilihan)
	{
		case 1:
		{
			printf("Data diterima, jenis valuta Anda : Dolar Amerika Serikat \n");
			printf("Masukkan banyak uang anda (dalam dolar) : ");
			scanf("%d", &uang);
			printf("uang yang diterima : Rp. %d ,- \n\n",uang*13000); break;
		}
	
			
		case 2:
		{
			printf("Data diterima, jenis valuta Anda : Yen Jepang \n");
			printf("Masukkan banyak uang anda (Yen Jepang) : ");
			scanf("%d", &uang);
			printf("uang yang diterima : Rp. %d ,- \n\n",uang*4000); break;			
		}

			
		case 3:
		{
			printf("Data diterima, jenis valuta Anda : Poundsterling Inggris \n");
			printf("Masukkan banyak uang anda (Poundsterling Inggris) : ");
			scanf("%d", &uang);
			printf("uang yang diterima : Rp. %d ,- \n\n",uang*10500); break;				
		}

			
		case 4:
		{
			printf("Data diterima, jenis valuta Anda : Euro MEE \n");
			printf("Masukkan banyak uang anda (Euro MEE) : ");
			scanf("%d", &uang);
			printf("uang yang diterima : Rp. %d ,- \n\n",uang*8900); break;				
		}

			
		case 5:
		{
			printf("Data diterima, jenis valuta Anda : Riyal Arab Saudi \n");
			printf("Masukkan banyak uang anda (Riyal Arab Saudi) : ");
			scanf("%d", &uang);
			printf("uang yang diterima : Rp. %d ,- \n\n",uang*1100); break;				
		}

		default: printf("system not found \n");
		
	}
			
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return	0;
 }
