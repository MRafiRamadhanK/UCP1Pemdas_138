// 1. a. Variabel umur dideklarasikan dengan tipe data int dan diberi nilai 25.
//    b. Variabel nama dideklarasikan dengan tipe data String dan diberi nilai "Budi".
//    c. Variabel tinggiBadan dideklarasikan dengan tipe data double dan diberi nilai 175.5.
// 2. untuk menentukan seorang mahasiswa dinyatakan lulus atau tidaknya dengan pernyataan/statement yang telah berlaku seperti lulus dengan jalur rerata atau dengan nilai salah satu matakuliah diatas nilai tertentu
// 3. salah satu contohnya adalah untuk menginput data atau rincian dari suatu e
// 4. prosedur hanya untuk melewatkan nilai, sedangkan fungsi u tuk mengembalikan nilai tersebut
// 5. diberikan suatu nilai atau kalimat, sesuai keinginan kita ingin memunculkan berapa kali nilai atau kalimat tersebut 
// 6.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	float nMat, nBinggris, rerata;
	string status;

	cout << "masukan nilai Matematika =";
	cin >> nMat;
	cout << "masukan nilai fisika =";
	cin >> nBinggris;

	rerata = (nBinggris + nMat) / 2;

	if (rerata >= 70) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 80) {
		status = "lulus jalur matematika";
	}
	else
	{
		status = "tidak lulus";
	}
	cout << "status kelulusan =" << status << endl;
}
