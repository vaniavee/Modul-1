// VANIA NOVERINA - 2311110031
// MODUL - ARRAY
// UNGUIDED 1

#include <iostream>
using namespace std;

int main(){
    // Mendeklarasikan array dengan 10 elemen
    int data[10];

    // Input Elemen Array
    cout << "Masukkan 10 angka yang diinginkan: ";
    for (int i = 0; i < 10; ++i){
        cin >> data[i];
    }

    // Menampilkan output array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i){
        cout << data[i] << " ";
    }

    // Memisahkan Angka Ganjil dan Genap.

    cout << "\nNomor Genap: ";
    // Menampilkan bilangan genap 
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 == 0){  // jika angka habis dibagi 2 dan hasilnya akhirnya nol.
            cout << data[i] << " ";
        }
    }

    cout << "\nNomor Ganjil: ";
    // Menampilkan bilangan ganjil
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 != 0){ // jika angka tidak habis dibagi 2
            cout << data[i] << " ";
        }
    }
    cout << endl;
    return 0;
}