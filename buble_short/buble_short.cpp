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
void buubleShortArray() {      // prosedur untuk mengurutkan array dengan metode buuble short 
	for (int i = 1; i < n; i++) {            // loping dengan i dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {    // jika nilai pada a [j] lebih besar dari 
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			};
		}
	}
}

void unsorted() {
	cout << endl;                             // output berisi kosong 
	cout << "========================" << endl; // output ke layar 
	cout << "ELEMENT ARRAY YANG BELUM TERSUSUN" << endl; // output ke latar
	cout << "=======================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {                // looping dengan j di mulai dari 0 hingga n-1
		cout << a[j] << endl;                  // output ke layar
	}
	cout << endl;
}

void display() {  //prosedur untuk menampilkan hasil 
	cout << endl;                          //output baris kosong 
	cout << "==========================" << endl; // output ke layar 
	cout << "ELEMENT ARRAY YANG BELUM TERSUSUN" << endl; // output ke layar
	cout << "==========================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {   // looping dengan j mulai deari 0 hingga n-1
		cout << a[j] << endl;        // output ke layar
	}
	cout << endl;                   // output baris kosong
}

int main() {              //memsnggil prosedur read 
	input();              //memanggil prosedur unsored() dari 
	unsorted();           //memanggil prosedur bubbelshortarray()
	buubleShortArray();
	display();

	return 0;
}

