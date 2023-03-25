#include <iostream>
using namespace std;
int main(){
    // Deklarasi Variabel Input, Proses, Input
    string nama,bonus;
    int harga,jumlah,total;

    // Definisi Input
    cout <<"Masukkan Nama Barang: "; cin >> nama;
    cout <<"Masukkan Harga Satuan: "; cin >> harga;
    cout <<"Masukkan Jumlah Barang: "; cin >> jumlah;

    // Hitung Total = Harga x Jumlah
    total = harga * jumlah;

    // Proses Pengecekan Kondisi Total
    // Jika Total > 500rb, Bonus = Payung
    if (total > 500000) {
        bonus = "Payung";
    } else if (total > 300000) {
        bonus = "Tas Mini";
    } else if (total > 200000) {
        bonus = "Mug";
    } else if (total > 100000) {
        bonus = "Ballpoint";
    } else {bonus = "Tidak Ada";}

    // Cetakk Total Harga dan Bonus
    cout << "Total Harga = " << total << endl;
    cout << "Bonus = " << bonus << endl;
    return 0; 
}