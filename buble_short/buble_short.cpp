#include <iostream>
using namespace std;

int a[20];                  //Deklarasi array a dengan ukuran 20;;; 
int n;                     //Deklarasi variasi n untuk menyimpan banyak elemen pada aray 


void input() {            // prosedur untuk input 
	while (true) {           // loping
		cout << "masukan banyak elemen pada array : "; // Output ke larar 
		cin >> n;         // input dari pengguna 
		if (n <= 20)      // jika keluar dari atau sama dengan 20
			break;        // keluar dari 20 
		else {            // jika n lrbih dari 20
			cout << "\nAray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + i) << ": ";
		cin >> a[i];
	}
}

