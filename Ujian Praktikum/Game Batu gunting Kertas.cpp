/*
THE RANDOM HAND GENERATOR
Version 1.1.5
Hak cipta kode dimiliki oleh Cakra Bhirawa

Info:
30 Sep 2017 - Ver 0.0.1
	Error nilai komputer tidak random dengan memakai kertas terus menerus
	Error looping sederhana
	Gagal menggunakan batu vs kertas vs gunting

2 Okt 2017 - Ver 0.0.9
	Error looping kompleks terjadi
	penambahan fitur dialog antara pemain dan komputer

4 Okt 2017 - Ver 1.0.0
	Game diseleksaikan:
		Error looping teratasi
		Error Random number teratasi
		Penambahan beberapa menu untuk interaksi USER dengan game
		
5 Okt 2017 - Ver 1.1.5
	Penambahan fitur pengumuman hasil (Konsep awal highscore)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int pilihan, komputer; // input integer yang digunakan untuk menyimpan nilai pilihan user dan komputer
	int ulang; // input integer ulang digunakan untuk mengecek kondisi saat ingin mengulang permainan
	int SERI = 0; //input nilai seri dimulai dari 0
	int MENANG = 0; //input nilai menang dimulai dari 0
	int KALAH = 0; //input nilai kalah dimulai dari 0
	char user[50]; //input char NAMA digunakan untuk nama USER saat bermain
	
	//MENU UTAMA GAME
	printf("========================================================================================================================\n\n");
	printf("\t\t\t\t\t\tTHE RANDOM HAND GENERATOR \n\t\t\t\t\t\t      Version 1.1.5 \n\n\n\n\n\n\t\t\t\t\tCreated By: CAKRA BHIRAWA - COMPUTER ENGINEERING\n========================================================================================================================\n\n");
	system("pause");
	system("cls");
	
	//MENU INPUT NAMA USER
	printf("Silahkan masukkan NAMA anda : ");
		gets(user);
	printf("\n\nUSER telah diketahui bernama %s\n",user);
	system("pause");
	system("cls");
	
	//GAME DIMULAI
	printf("JURI\t: SELAMAT DATANG DI TURNAMEN THE RANDOM HAND GENERATOR 2017!!!!\n");
	printf("JURI\t: Saat ini, kita akan menyaksikan pertandingan %s vs KOMPUTER!\n",user);
		
	do //START AWAL DARI LOOPING
	{
	printf("\n\n==>SAAT INI PERTANDINGAN AKAN DIMULAI SILAHKAN PILIH INPUT TANGAN<==\n");
		printf("1. BATU \n2. GUNTING \n3. KERTAS\n");
		printf("Pilihan anda (1/2/3) ? ");
		scanf("%d",&pilihan);		
	
	srand(time(NULL)); 	//komputer akan mencetak nomor acak
	komputer = rand ()%3;  //komputer akan memilih angka berbeda dari jangkauan 0-2
	
		if (komputer == 0) //komputer memilih menggunakan BATU 
		{
				if (pilihan == 1 && komputer == 0){ //USER memilih BATU sedangkan KOMPUTER memilih BATU
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: Oh terlihat pertandingan yang sengit sekali BUNG!!!\n");
						printf("%s\t: Dengan kekuatan BATU maka saya akan......\n",user);
						printf("KOMPUTER: OMAE WA SHINDERU!!!\n");
					printf("JURI\t: OH PERTANDINGAN SERI BUNG!!!!\n\n");
					SERI++;
				} 
				else if (pilihan == 2 && komputer == 0){ //USER memilih GUNTING sedangan KOMPUTER memilih BATU
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: Kita akan......\n");
						printf("%s\t: GUNTING saya akan memotong seluruh isi BIMA SAKTI!!\n");
						printf("KOMPUTER: HAHAHAHA!!! Sudah kuduga ITU maka saya akan mengeluarkan BATU!\n");
					printf("JURI\t: PERTANDINGAN KALI INI DIMENANGKAN KOMPUTER, %s DINYATAKAN KALAH!\n\n",user);
					KALAH++;				
				} 
				else if (pilihan == 3 && komputer == 0){ //USER memilih KERTAS sedangkan KOMPUTER memilih BATU
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: WOW kali ini akan terjadi keseruan!\n",user);
						printf("%s\t: Apakah KAU sudah siap?!?\n");
						printf("KOMPUTER: SAYA MENUNGGU KAU!!!\n");
							printf("%s\t: KERTAS adalah pilihan saya!\n",user);
							printf("KOMPUTER: NANII!!!!!! SAYA MENGELUARKAN BATU!!!!!!\n");
					printf("JURI\t: Ronde ini dimenangkan oleh %s!!!!\n\n",user);
					MENANG++;
				}
		}
				
	
		if (komputer == 1) //KOMPUTER memilih menggunakan GUNTING
		{
	
				if (pilihan == 1 && komputer == 1){	//USER memilih BATU sedangkan KOMPUTER memilih GUNTING	
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");				
					printf("JURI\t: Kita lihat dan.......\n");
						printf("%s\t: Saya akan menggunakan BATU!!!\n",user);
						printf("KOMPUTER: TIDAKK!!!!! SAYA menggunakan GUNTING.... USOOOOO!!!!\n");
					printf("JURI\t: Pertandingan ini dimenangkan oleh %s!\n\n",user);
					MENANG++;
				} 
				else if (pilihan == 2 && komputer == 1){ //USER memilih GUNTING sedangkan KOMPUTER memilih GUNTING
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: Sayang sekali sepertinya saya sudah dapat menduga hasil sementara!\n");
						printf("%s\t: Ku akan menggunakan GUNTING!\n",user);
						printf("KOMPUTER: Tidak.... saya juga menggunakann GUNTING....\n");
					printf("JURI\t: Pertandingan tidak dimenangkan oleh siapapun dan dinyatakan SERI!\n\n");
					SERI++;
				} 
				else if (pilihan == 3 && komputer == 1){ //USER memilih KERTAS sementara KOMPUTER memilih GUNTING
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: Hoaam...... Capeknya jadi JURI....\n");
						printf("%s\t: Majulah KERTAS saya menjadi yang terbaik!\n");
						printf("KOMPUTER: HAHAHA! GUNTING saya memenangkan pertandingan kali ini!\n");
					printf("JURI\t: ZzZzZzZz.... Oh?!?! Pertandingan dimenangkan oleh KOMPUTER!!!!!\n\n");	
					KALAH++;
				}
		}
	
				
		if (komputer == 2) //KOMPUTER memilih menggunakan  KERTAS
		{
				if (pilihan == 1 && komputer == 2){ //USER memilih BATU sementara KOMPUTER memilih KERTAS
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: YA..... Tunggu sedang apa kita disini?\n");
						printf("%s\t: Ummmmm.... Sedang turnamen?\n",user);
						printf("JURI\t: Oh YA..... Baiklah LANJUTKAN!\n");
						printf("KOMPUTER: SUDAH?\n");
							printf("%s\t: Dengan BATU saya akan menghancurkan SEMUA PETTAN YANG ADA!\n",user);
							printf("KOMPUTER: TIDAK PETTAN IS FOR LYFE.... KERTAS saya akan menghancurkan BATU....\n");
					printf("JURI\t: %s KALAH TELAK!!!!!!\n\n",user);
					KALAH++;
				} 
				else if (pilihan == 2 && komputer == 2){ //USER memilih GUNTING sementara KOMPUTER memilih KERTAS
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: BAIKLAH kita lihat pertandingan kali ini....\n");
						printf("%s\t: Saya akan menggunakan......\n",user);
						printf("KOMPUTER: TELAT SAYA MENGGUNAKAN KERTAS!!!!!\n");
							printf("%s\t: Maaf tapi saya menggunakan GUNTING.....\n");
							printf("KOMPUTER: TIDAAKKKKK!!!\n");
					printf("JURI\t: Pertandingan kali ini dimenangkan oleh %s!!!!\n\n",user);
					MENANG++;
					
				} 
				else if (pilihan == 3 && komputer == 2){ //USER menggunakan KERTAS sementara KOMPUTER menggunakan KERTAS
					printf("\nJURI\t: Permainan dimulai!\n");
					printf("JURI\t: Saat ini kita akan melihat user akan memilih sesuatu yaitu....\n");					
					printf("JURI\t: Oh..... Pertandingannya selesai\n");
						printf("%s & KOMPUTER : KERTAS!!!!\n");
					printf("JURI\t: SERIIII!!!!\n\n");		
					SERI++;			
				}
		
		}

		printf("=========================\n");
		printf("DATA STATISTIK SEMENTARA: \n");
    	printf("Total MENANG  : %d\n",MENANG); //akan menampilkan jumlah seluruh win
    	printf("Total KALAH   : %d\n",KALAH); //akan menampilkan jumlah seluruh lose
    	printf("Total SERI    : %d\n\n",SERI); //akan menampilkan jumlah seluruh draw
    	printf("==========================\n\n");
		printf("JURI\t: Apakah %s ingin mengulang (Y/N) ? ",user);
		scanf ("%s",&ulang);
		system("cls");
	} while (ulang == 'y' || ulang == 'Y'); //mengulang do jika user menekan y/Y
	
	//MENU HASIL AKHIR
	printf("SELAMAT TELAH MENYELESAIKAN PERTANDINGAN INI\n\n\n"); 
		printf("==========================================\n ANDA DINYATAKAN........\n==========================================\n\n\n\n\n");
		system("pause");
		system("cls");
	
	if(MENANG>KALAH && SERI<MENANG) //KOMPUTER MENGECEK UNTUK MENGINPUT HASIL AKHIR USER
	{ 
		printf("KAMU MENANG MUTLAK!!!!\n\n");
			printf("Kemenangan %d", MENANG);
	} 
	else if(KALAH>MENANG && SERI<KALAH)  //KOMPUTER MENGECEK UNTUK MENGINPUT HASIL AKHIR USER
	{
		printf("MAAF KAMU KALAH!!!\n\n");
			printf("KALAH %d", KALAH);
	} 
	else //KOMPUTER MENGECEK UNTUK MENGINPUT HASIL AKHIR USER
	{ 
		printf("HASIL SERI!\n\n");
			printf("Skor %d", SERI);
	}
	return 0;	
}		
