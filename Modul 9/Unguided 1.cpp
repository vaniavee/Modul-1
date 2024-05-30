// UNGUIDED 1 - MODUL 9 REKURSIF & HASH TABLE

#include <iostream>
using namespace std;
// Fungsi untuk mengitung faktorial
long faktorial(int n) {
    if (n == 0 || n == 1) { // jika nilai n = 0 atau 1
        return 1; // maka fungsi akan mengembalikan 1
    } else {
        return n * faktorial(n-1); // rekursif langsung
    }
}
// Main program
int main() {
    int bilangan;
    cout << "Masukkan bilangan bulat positif: "; // input bil. bulat positif
    cin >> bilangan;
    // Faktorial dari bil. yg diinputkan
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}