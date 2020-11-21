#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>

/*	============================================================
               		PROGRAM RESERVASI HOTEL V0.2              
	============================================================
			Nama Program 		: PReservasiHotel.c                     
   			Tanggal Pembuatan   : 23/11/2017                          
     		Creator     		: CAKRA BHIRAWA
 			Keterangan      	: 
			 -Program dapat membuat Judul Pembuka (0.1)
			 -Program dapat menampilkan Data yang di Input (0.2)
			 
			BUG saat ini		:
			-          
	=========================================================== */

//Variabel Global
char pelanggan[30]; //menyimpan nama pelanggan
int nokamar; //menyimpan ruangan nomor berapa
int idpelanggan; //menyimpan identitas pelanggan
int tinggal; // memastikan berapa lama akan mengindap
int kamar; //untuk memastikan pilihan kamar (3 opsi saat ini (23/11/2017)
int orang; //menentukan jumlah pelanggan yang akan tinggal
int pilihan; //variabel untuk menentukan opsi yang akan dipilih
int ulang; //untuk mengulang looping nantinya
int total_tagihan, tagihan1, tagihan2; //untuk menghitung tagihan


void layar();
void pemesan();
void tagihan();
void keluar();
void datasaatini();
void penjelasan();
void i_kamar();



void layar() //method untuk mengeluarkan display layar utama
{
	printf("\n\t=========================================================== ");
	printf("\n\t		Youkoso to JAPARI HOTEL								");
	printf("\n\t=========================================================== ");
	printf("\n\t	(1) DAFTAR PEMESAN KAMAR								");
	printf("\n\t	(2) DATA SAAT INI										");
	printf("\n\t	(3) TAGIHAN												");	
	printf("\n\t	(4) INFORMASI KAMAR										");						
	printf("\n\t	(5) KELUAR												");
	printf("\n\t=========================================================== ");	
	printf("\n\tPilihan Anda :  ");
		scanf("%d", &pilihan);
}

void pemesan() //method untuk memesan kamar
{	
	system("cls");
	printf("\n\t=========================================================== ");
	printf("\n\t		DAFTAR PEMESAN KAMAR								");
	printf("\n\t=========================================================== ");
	printf("\n\t	Nama 			: ");
		fflush(stdin);
		gets(pelanggan);
	printf("\n\t	KTP/NIM			: ");
		scanf("%d", &idpelanggan);
	printf("\n\t	Tinggal	(Hari)		: ");	
		scanf("%d", &tinggal);
	printf("\n\t	Berapa Orang		: ");	
		scanf("%d", &orang);
	printf("\n\t	Kamar	: \n\t\t1. KING \n\t\t2. DELUXE \n\t\t3. NORMIES \n\t\tPilihan ");	
		scanf("%d", &kamar);
		if (kamar == 1)
		{
			printf("\n\t	Kamar Tersedia [101][102][202][301]");
			printf("\n\t	No Kamar	:");
				scanf("%d", &nokamar);
		}
		else if (kamar == 2)
		{
			printf("\n\t	Kamar Tersedia [103][104][201][303][302]");
			printf("\n\t	No Kamar	:");
				scanf("%d", &nokamar);			
		}
		else 
		{
			printf("\n\t	Kamar Tersedia [105][106][203][304]");
			printf("\n\t	No Kamar	:");
				scanf("%d", &nokamar);			
		}
	printf("\n\t	(0) Kembali ");
		scanf("%d", &ulang);							
	printf("\n\t													");
	printf("\n\t=========================================================== ");		
	system("cls");
}

void i_kamar() //method untuk melihat lihat kamar yang ada
{
	int jenis;
	system("cls");
	printf("\n\t=========================================================== ");
	printf("\n\t		INFORMASI KAMAR								");
	printf("\n\t=========================================================== ");
	printf("\n\tTersedia 3 Jenis Kamar	:\n\t1. KING\n\t2. DELUXE\n\t3. NORMIES\n\t Informasi	: ");	
		scanf("%d", &jenis);
	switch(jenis)
	{
		case 1:
			system("cls");
			printf("\n\t=========================================================== ");
			printf("\n\t		KING								");
			printf("\n\t=========================================================== ");
			printf("\n\tHarga Permalam		:Rp 450.000,00");
			printf("\n\tUkuran Kasur		: 1 KING SIZE");
			printf("\n\tKapasitas			: 3 Orang");
			printf("\n\tTersedia Sauna Gratis");
			printf("\n\t=========================================================== ");
			printf("\n\tKasur Tambahan dikenakan Biaya Rp 200.000,00");
			break;
			
		case 2:
			system("cls");
			printf("\n\t=========================================================== ");
			printf("\n\t		DELUXZE								");
			printf("\n\t=========================================================== ");
			printf("\n\tHarga Permalam		:Rp 350.000,00");
			printf("\n\tUkuran Kasur		: 2 Kasur");
			printf("\n\tKapasitas			: 2 Orang");
			printf("\n\t=========================================================== ");
			printf("\n\tKasur Tambahan dikenakan Biaya Rp 200.000,00");
			break;
		
		case 3:
			system("cls");
			printf("\n\t=========================================================== ");
			printf("\n\t		NORMIES								");
			printf("\n\t=========================================================== ");
			printf("\n\tHarga Permalam		:Rp 150.000,00");
			printf("\n\tUkuran Kasur		: 1 Kasur");
			printf("\n\tKapasitas			: 2 Orang");
			printf("\n\t=========================================================== ");
			printf("\n\tKasur Tambahan dikenakan Biaya Rp 200.000,00");
			break;
		
	}
	printf("\n\t	(0) Kembali ");
		scanf("%d", &ulang);								
	system("cls");
}

void datasaatini() //method untuk megeluarkan informasi pemesanan pelanggan
{
	system("cls");
	printf("\n\t=========================================================== ");
	printf("\n\t		DATA PEMESAN KAMAR								");
	printf("\n\t=========================================================== ");
	printf("\n\t	Nama 			: ");
		printf("%s", pelanggan);	
	printf("\n\t	KTP/NIM			: ");
		printf("%d", idpelanggan);
	printf("\n\t	Tinggal	(Hari)		: ");	
		printf("%d", tinggal);
	printf("\n\t	Berapa Orang		: ");	
		printf("%d", orang);
	printf("\n\t	Kamar			: ");
		if (kamar == 1)
		{
		printf("(%d) KING %d", kamar, nokamar);		
		}
		else if (kamar == 2)
		{
		printf("(%d) DELuXE %d", kamar, nokamar);		
		}		
		else if (kamar == 3)
		{
		printf("(%d) NORMIES %d", kamar, nokamar);		
		}		
	
	printf("\n\t	(0) Kembali");
		scanf("%d", &ulang);							
	printf("\n\t													");
	printf("\n\t=========================================================== ");	
	system("cls");	
}

void tagihan() //menghitung TAGIhAN
{
	system("cls");
	printf("\n\t=========================================================== ");
	printf("\n\t		TOTAL TAGIHAN								");
	printf("\n\t=========================================================== ");
	printf("\n\t	Nama 			: ");
		printf("%s", pelanggan);
	printf("\n\t	Kamar			: ");
		if (kamar == 1)
		{
		printf("(%d) KING [%d] %d Hari", kamar, nokamar, tinggal);	
		tagihan1 = 450000*tinggal;	
		}
		else if (kamar == 2)
		{
		printf("(%d) DELuXE [%d] %d Hari", kamar, nokamar, tinggal);	
		tagihan1 = 350000*tinggal;	
		}		
		else if (kamar == 3)
		{
		printf("(%d) NORMIES [%d] %d Hari", kamar, nokamar, tinggal);	
		tagihan1 = 150000*tinggal;	
		}

		
	if(orang >= 3 && kamar == 1)
	{
		tagihan2 = 200000;
	}
	else if (orang >=2 && kamar == 2)
	{
		tagihan2 = 200000;		
	}
	else if (orang >=2 && kamar == 3)
	{
		tagihan2 = 200000;		
	}
	
	total_tagihan = tagihan1+tagihan2;
	printf("\n\t	TOTAL 			: Rp %d", total_tagihan);
	printf("\n\t	(0) Kembali");
		scanf("%d", &ulang);							
	printf("\n\t													");
	printf("\n\t=========================================================== ");	
	system("cls");	
}

void keluar() //keluar dari aplikasi
{
	system("cls");
}

void penjelasan() //informasi awal mengenai hotel
{
	printf("\n\t             Jl. Jakarta no 153,Klojen-Malang,\n\t\t\t\t Jawa Timur 144001, INDONESIA");
   	printf("\n\n                              Call No.:081-5553-8824");
   	printf("\n\n\n                             YOUKOSO!!!!");
   	printf("\n\n\n\tJapari Hotel adalah hotel yang baru dibuat di Malang. Hotel ini dirancang untuk memenuhi permintaan para 'Friends'\tyang ingin melihat keindahan Kemono Friends. Dengan Posisi yang strategis, Japari Hotel adalah  Hotel paling Tanoshii di Malang.");
   	printf("\n\n\tSelain itu terdapat beragam fasilitas yang kami sediakan seperti: ");
   	printf("\n\n");
   	printf("\n\t\t\t1. WAIFU TAK TERBATAS SELAMA 24 JAM.\n");
   	printf("\t\t\t2. Kolam Renang.\n");
   	printf("\t\t\t3. Tempat Parkir yang Luas.\n");
   	printf("\t\t\t4. 24 Jam penjagaan.\n");
   	printf("\t\t\t5. Tersedia Air Panas.\n");
   	printf("\t\t\t6. Jasa Laundry.\n");
   	printf("\t\t\t7. 24 Jam Pelayanan Rumah.\n");
   	printf("\nSilahkan tekan tombol apapun untuk melanjutkan:");
   	getch();
   	system("cls");
}

int main()
{
	penjelasan();
	do //memulai looping
	{
	layar();						
		switch(pilihan)
		{
		case 1:
				pemesan();
				break;
			
		case 2:
				datasaatini();
				break;
				
			case 3:
				tagihan();
				break;
				
			case 4:
				i_kamar();
				break;
			
			case 5:
				keluar();
				return 0;
		}
	}while (ulang == 0); //mengulang do jika ulang == 0
}



