#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {

		cout << "========== TAMBAH MAHASISWA ==========" << endl;

		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();

		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);

		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();


		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};


void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Data mahasiswa masih kosong" << endl;
		return;
	}

	for (int i; i < jumlahMahasiswa; i++) {
		cout << NIM[i] << endl;
		cout << nama[i] << endl;
		cout << tahunMasuk[i] << endl;

	}
	cout << endl;
};

void algorithmacariMahasiswaByNIM() {
	if (jumlahMahasiswa == 0) {
		cout << "data mahasiswa masih kosong" << endl;
		return;
	}
	for (int i = 0; i < jumlahMahasiswa; i++) {
		int idx;

		cout << NIM[idx] << " : found at position" << (i + 1) << endl;
	}


}

void algorithmaSortByTahunMasuk() {
	int a[MAX_MAHASISWA];
	for (int i = 1; i < jumlahMahasiswa; i++) {
		for (int j = 0; j < jumlahMahasiswa - i; j++) {
			if (tahunMasuk[a[i]] > tahunMasuk[a[j + 1]]) {
				swap(a[i], a[j + 1]);
			}
		}
	}
	cout << "data berdasarkan tahun masuk" << endl;

};
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
};



/* jawaban:
2. Linear seacrh dan bubble sort 
3. stack adalah cara menyimpan data yang berupa tumpukan dan biasanya menggunakan dasar LIFO (last in First Out), sedangkan queue adalah cara menyimpan data berupa antrian dan biasanya menggunakan dasar FIFO(First In First Out)
4. ketika tempat penyimpanannya kecil dan hanya memiliki 1 tempat keluar, maka harus menggunakan stack(tumpukan) agar bisa ditambahkan dan dikurangi.
5. a. level 4 
5. b. inorder = salah, karena setelah 8 harusnya 10 bukan 12
	  preorder = benar, karena sesuai dengan caranya
	  postorder = benar, karena sesuai dengan caranya
*/