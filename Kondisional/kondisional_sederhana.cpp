#include <stdio.h>
#include <string.h>

int	main()	{
	
	char nama[50] = "Cakra Bhirawa",input[50];
	int	x = 5, nim = 175150307111037, b;
	
	printf("Selamat Datang di Laporan 2 Conditional Assignment \n\n");
	
	printf("Silahkan memasukkan nama anda : ");
		gets(input);
		((strcmp (input,nama) == 0)) ? printf("Input NAMA Benar \n") : printf("Input NAMA Salah \n");		
		
	printf("Silahkan memasukkan NIM anda : ");
		scanf("%d",&b);
		((b == nim)) ? printf("Input NIM Benar \n") : printf("Input NIM Salah \n");		
			
	printf("Apakah nilai X itu 5 ? ");
	((x == 5)) ? printf("Benar \n") : printf("Salah \n");
	
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0; 
}
