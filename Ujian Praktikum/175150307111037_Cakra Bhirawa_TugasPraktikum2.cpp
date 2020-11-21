#include <stdio.h>


int main (){
	char a[50], b[50];
	char c1 [100], c2[100], c3[100], c4[100], c5[100],c6 [100], c7[100], c8[100], c9[100], c0[100];
	
	
	printf("============================================== \n");
	printf("         Percakapan Jurusan Manakah? \n");
	printf("============================================== \n");
	printf("Nama Anda : ");
		gets(a);
	printf("Nama Lawan Bicara Anda : ");
		gets(b);
	printf("============================================== \n\n");
	
	
	printf("%s : %s",a,b);	
	printf("Halo! Perkenalkan nama saya %s.", a ) ;
		printf(" Bagaimana dengan anda? \n\n");
 	
	printf("%s :",b);
	printf("Hai! Perkenalkan juga nama saya adalah %s.", b);
		printf(" Darimanakah asalmu %s?\n\n",a);
	
	printf("%s :",a);
	printf("Saya berasal dari ");
		gets (c1);
		printf("\n");
		
	printf("%s :",b);
	printf("Oh! kamu berasal dari %s? kebetulan soalnya aku juga berasal dari %s juga! kamu berada di jalan manakah?\n\n",c1,c1);
	
	printf("%s :",a);
	printf("Saya berada di Jalan ");	
		gets (c2);
			printf("\n");
		
	printf("%s :",b);	
	printf("Wah ternyata kita hampir dekat yak!");
		printf("Bagaimanakan denganmu %s, sekarang kau tinggal dimana di Malang? \n\n", a);
			
	printf("%s :",a);	
	printf("Saya sekarang tinggal di ");
		gets (c3);
	printf("%s :",a);	
	printf("Bagaimana denganmu %s? kau tinggal dimanakah sekarang? \n\n ",b);
	
	printf("%s :",b);	
	printf("Saya tinggal di ");
		gets (c4);
	printf("%s :",b);	
	printf("Kebetulan disana ada kerabat dekat soalnya. Kalau kamu %s, apakah ada kerabat disana?\n\n",a);
	
	printf("%s :",a);	
	printf("Wah sepertinya tidak ada, saya merantau kesini soalnya.");
		printf(" Sekarang kamu kuliah di fakultas apakah %s?\n\n",b);
	
	printf("%s :",b);	
	printf("Saya berada di fakultas ");
		gets (c5);
		printf("\n");
	
	printf("%s :",a);	
	printf("wow, sepertinya kita juga satu fakultas juga nih! karena saya juga berada di fakultas %s.",c5);
		printf(" wkwkwkwkwkwk, coba-coba. Kamu berada di jurusan manakah sekarang %s?\n\n",b);
		
	printf("%s :",b);	
	printf("Saya mengambil jurusan ");
		gets (c6);
		printf("\n");
		
	printf("%s :yah kita beda jurusan. saya tidak memilih jurusan %s. karena kebetulan saya ingin menjadi ",a,c6);
		gets (c7);
		printf("\n");
	
	printf("%s :",b);
	printf("Wah serius kamu ingin menjadi %s? karena bukannya disini jurusan %s, lebih mendukung untuk cita-citamu menjadi %s? \n\n",c7,c6,c7);
	
	printf("%s :",a);	
	printf("Wah seriuskah %s?!?!\n\n",b);
	
	printf("%s :",b);
	printf("Ya, betul karena saya ke Universitas Brawijaya untuk mencapai cita-cita saya menjadi %s.",c7);	
		printf("Kebetulan disini lengkap fasilitasnya oleh karena itu saya memilih jurusan %s. Selain itu faktor lainnya adalah ",c6);
		gets (c8);
		printf("\n");
		
	printf("%s :Wah sepertinya saya harus mengikuti SBMPTN lagi tahun depan. Namun saya sudah mengenal %s, jadinya saya merasa tidak ingin menghilangkan kesempatan kita bersama di satu angkatan.\n\n",a,b);
	
	printf("%s :",b);
	printf("Daripada mengulang lagi %s, bagaimana jika kau menikmati jurusan itu dengan meluangkan waktu untuk belajar sampingan untuk mengapai %s. Seperti ",a,c7);	
		gets (c9);
		printf("\n");
	
	printf("%s :Oh ya, saya lupa jika ada hal seperti %s, baiklah saya akan mencoba menggapai cita cita saya sebaik mungkin %s!!\n\n",a,c9,b);

	printf("%s :Semangat %s, walau berbeda jurusan hal seperti itu tidak dapat membatasi saya untuk menggapai dengan cara lainnya!\n\n",b,a);
	
	printf("%s :",a);	
	printf("Wah Sudah Mulai waktunya nih! Yuk kita berangkat ke Open House Fakultas \n\n",c5);
	
	printf("%s :",b);	
	printf("Baik karena saya penasaran dengan ");
		gets (c0);
			printf("\n");
	
				
 	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037 \n");
}
