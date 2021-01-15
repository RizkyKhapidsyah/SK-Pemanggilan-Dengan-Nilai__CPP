/* ------------------------ */
/* Penggunaan Call By Value */
/* Program Tambah Nilai */
/* ------------------------ */

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int tambah(int m, int n);

int main() {
	int a, b;

	a = 7;
	b = 13;

	cout << "Nilai Sebelum Fungsi Digunakan ";
	cout << "\na = " << a << " b = " << b;

	tambah(a, b);

	cout << "\nNilai Setelah Fungsi Digunakan";
	cout << "\na = " << a << " b = " << b;

	_getch();
	return 0;
}

int tambah(int m, int n) {
	m += 2;
	n += 3;

	cout << "\n\nNilai di dalam Fungsi Tambah()";
	cout << "\nm = " << m << " n = " << n;
	cout << endl;

	return 0;
}