#include<stdio.h>						//memanggil library Standard Input/Output

int main (){
	int nilai1,nilai2,hasil,nim;		//mendeklarasikan variabel integer yang bernama nilai1,nilai2,hasil, dan nim
	char nama;							//mendeklarasikan variabel character yang bernama nama
	printf("Masukkan nama : ");			//mengeluarkan output "Masukkan nama : "
		scanf("%c",&nama);				//meminta input user yang berupa character dan dimasukkan dalam variabel char nama (hanya 1 huruf saja)
	printf("Masukkan NIM : ");			//mengeluarkan output "Masukkan NIM : "
		scanf("%d",&nim);				//meminta input user yang berupa desimal dan dimasukkan dalam variabel int nim
	printf("Masukkan nilai 1 : ");		//mengeluarkan output "Masukkan nilai 1 : "
		scanf("%d",&nilai1);			//meminta input user yang berupa desimal dan menyimpannya dalam variabel int nilai1
	printf("Masukkan nilai 2 : ");		//mengeluarkan output "Masukkan nilai 2 : "
		scanf("%d",&nilai2);			//meminta input user yang berupa desimal dan menyimpannya dalam variabel int nilai2
	hasil = nilai1 + nilai2 ;			//melaksanakan pemrosesan dari penjumlahan dua nilai variabel dari int nilai 1 dengan int nilai2, lalu memasukkannya dalam variabel int hasil
	printf("Nama Anda = %c\n",nama);	//mencetak output "Nama Anda = " dan memasukkannya nilai character yang ada dalam variabel char nama serta membuat baris baru
	printf("NIM = %d\n",nim);			//mencetak "NIM = " dan memasukkan nilai desimal dari variabel int nim serta membuat baris baru
	printf("Maka hasil = %d\n",hasil);	//mencetak "NIM = " dan memasukkan nilai desimal dari variabel int hasil serta membuat baris baru
	return 0;							//mengembalikan semua nilai menjadi 0 
}
