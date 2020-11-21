#include <stdio.h>
#include <string.h>

int	main()	{
	
	char id[50] = "Cakra Bhirawa", idinput[100];
	char password[25] = "Tj4Kr4B", passinput[50];
 
	printf("  DATABASE PUSAT Cakra Bhirawa \n");
	printf("===============================\n\n");
	
	printf("Silahkan Masukkan ID & PASSWORD: \n\n");
		printf("ID        : ");
			gets(idinput);
			((strcmp(idinput,id) == 0)) ? printf("ID BENAR \n") : printf("ID SALAH \n");
		printf("PASSWORD  : ");
			gets(passinput);
			((strcmp(passinput,password) == 0 && strcmp(idinput,id)==0)) 
			? printf("PASSWORD BENAR \n\n\nDATA DITEMUKAN! \n\nNAMA\t: CAKRA BHIRAWA \nTTL\t: JAKARTA, 24 JANUARI 2000 \nPENDIDIKAN :\n1. SD ALFALAH DARUSSALAM TROPODO 1, Sidoarjo\n2. SMPN 5 BOGOR\n3. SMAN 7 BOGOR\nDAFTAR PENNGALAMAN: \n1.KETUA EKSTRAKURIKULER JEPANG SMA 7 BOGOR\n\n")
			: printf("PASSWORD SALAH \n=========DATA TAK DITEMUKAN!========\n\n");
	
																																																																																
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0; 
}
