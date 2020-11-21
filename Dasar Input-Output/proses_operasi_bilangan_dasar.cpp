#include <iostream>
using namespace std ; 										//digunakan sehingga tidak perlu menuliskan std di setiap variabel

main (){
	int x,y;												//mendeklarasikan variabel int x dan y
	int penjumlahan,pengurangan,perkalian,pembagian;		//mendeklarasikan variabel int penjumlahan, pengurangan, perkalian dan pembagian
	cout << "Masukkan Operator Pertama : "; 				//monitor akan menyatakan perkataan disamping
		cin >> x;											//meminta input yang akan dimasukkan dalam variabel x
	cout << "Masukan Operator Kedua : "; 					//monitor akan menyatakan perkataan disamping
		cin >> y;											//meminta input yang akan dimasukkan dakam variabel y
	
	/*rumus dari setiap operasi yang ada*/
	penjumlahan = x+y;										//menkalkulasi nilai penjumlahan dari x+y
	pengurangan = x-y;										//menkalkulasi nilai pengurangan dari x-y
	perkalian = x*y;										//menkalkulasi nilai perkalian dari x*y
	pembagian = x/y;										//menkalkulasi nilai pembagian dari x/y
	cout << "Hasil Penjumlahan : " << penjumlahan << endl; 	//monitor akan memasukkan hasil dari operasi yang ditentukan
	cout << "Hasil Pengurangan : " << pengurangan << endl; 	//monitor akan memasukkan hasil dari operasi yang ditentukan
	cout << "Hasil Perkalian : " << perkalian << endl; 		//monitor akan memasukkan hasil dari operasi yang ditentukan
	cout <<"Hasil Pembagian : " << pembagian << endl; 		//monitor akan memasukkan hasil dari operasi yang ditentukan
}
