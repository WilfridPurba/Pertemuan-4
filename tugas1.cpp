#include <iostream>
using namespace std;

int main() {
  float quiz, uts, uas, nilai_akhir;
  string hurufmutu;

// Input 
  cout << "Masukkan nilai Quiz: ";
  cin >> quiz;
  cout << "Masukkan nilai UTS: ";
  cin >> uts;
  cout << "Masukkan nilai UAS: ";
  cin >> uas;

// Nilai Akhir
  nilai_akhir = 0.25 * quiz + 0.35 * uts + 0.4 * uas;
  cout << "Nilai akhir: " << nilai_akhir << endl;

// Rata rata
  float rata_rata = (quiz + uts + uas) / 3;
  cout << "Rata-rata nilai: " << rata_rata << endl;

// Menentukan Huruf Mutu dan Kelulusan
  if (nilai_akhir >= 80) {
    hurufmutu = "A";
  } else if (nilai_akhir >= 68) {
    hurufmutu = "B";
  } else if (nilai_akhir >= 55) {
    hurufmutu = "C";
  } else if (nilai_akhir >= 45) {
    hurufmutu = "D";
  } else {
    hurufmutu = "E";
  }

   cout << "Huruf Mutu: " << hurufmutu << endl;

  if (rata_rata >= 60) {
    cout << "LULUS" << endl;
  } else {
    cout << "GAGAL" << endl;
  }

  return 0;
}