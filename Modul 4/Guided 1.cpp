// MODUL 4 - SEARCHING
// JUMAT, 19 APRIL 2024
// GUIDED 1 - Sequential Search
// Vania Noverina - 231110031

#include <iostream>
using namespace std;

// Main Program
int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10; //deklarasi angka yg ingin dicari
    bool ketemu = false;
    int i;

    // Algoritma sequential search
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Seguential Search Sederhana\n" << endl;
    cout << " Data: { 9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0; 
}