#include <iostream>
using namespace std; 																					//digunakan sehingga tidak perlu menuliskan std di setiap variabel

main (){
	char nama [125],lurah [60];
	int awal,akhir,biaya,ppj;
	int pemakaian,tarif,pajak,total;
		cout << " Program penghitung pemakaian listrik sederhana "<< endl;
			
	/*Pelanggan memasukkan nama lengkapnya*/
		cout << "Masukkan Nama : ";
			cin.getline (nama,125); 
			
	/*Pelanggan memasukkan lokasi kelurahannya*/
		cout << "Kelurahan : ";
			cin.getline(lurah,60) ;
	
	/*Pelanggan memasukkan posisi awal Kwh Meter*/
		cout << "Masukkan posisi awal Kwh Meter : ";
			cin >>awal;
			
	/*Pelanggan memasukkan posisi akhir Kwh Meter*/
		cout << "Masukkan posisi akhir Kwh Meter : ";
			cin >>akhir;
	
	/*Pelanggan memasukkan posisi awal Kwh Meter*/
		cout << "Masukkan biaya beban saat ini : ";
			cin >>biaya;
			
	/*Pelanggan memasukkan posisi awal Kwh Meter*/
		cout << "Masukkan PPJ (dalam persen) : ";
			cin >>ppj;
			
	/*kalkulasi akhir dari data pelanggan*/
	pemakaian = akhir-awal; 																			//rumus perhitungan pemakaian pelanggan
	tarif = biaya*pemakaian; 																			//rumus perhitungan tarif yang dikenakan pelanggan berdasarkan database beban biaya pelanggan
	pajak = tarif*ppj/100; 																				//rumus perhitungan pajak yang diterima pelanggan 
	total = tarif+pajak; 																				//rumus perhitungan total pembayaran pelanggan yang ditambah pajak
	
	cout << "==================="<<"PLN " << lurah << "===================" << endl;
		cout << "Nama : " << nama << endl;
		cout << "Kelurahan : " << lurah << endl;
		cout << "Pemakaian bulan ini : " << pemakaian << " Kwh Meter "<< endl;
		cout << "Tarif listrik : Rp " << tarif << ",-" << endl;
		cout << "PPJ " << ppj << "% : Rp" << pajak << ",-" << endl;
		cout << "Total bayar : Rp" << total << ",-" << endl; 
	cout << "==============================================" << endl;

}
