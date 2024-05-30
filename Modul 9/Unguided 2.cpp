// UNGUIDED 2 - MODUL 9 REKURSIF & HASH TABLE
#include <iostream>
using namespace std;

// Deklarasi awal fungsi faktorial1
long faktorial2(int n);

// Fungsi untuk menghitung faktorial
long faktorial1(int n) {
    if (n == 0 || n == 1) { // basis kasus
        return 1; 
    } else {
        return n * faktorial2(n-1); // memanggil fungsi faktorial2
    }
}
// Fungsi untuk memanggil fungsi faktorial1
long faktorial2(int n) {
    return faktorial1(n); // memanggil fungsi faktorial1
}
// Main program
int main() {
    int bilangan;
    cout << "Program Rekursif Tidak Langsung" << endl;
    cout << "================================" << endl;
    cout << "Masukkan bilangan bulat positif: "; // input bilangan bulat positif yg ingin dicari
    cin >> bilangan;
    // faktorial dari bil. bulat yg diinputkan
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial1(bilangan) << endl; 
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl; 
    return 0;
}
