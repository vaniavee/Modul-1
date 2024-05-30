// MODUL 9 - REKURSIF
// JUMAT, 24 MEI 2024
// GUIDED 1 - REKURSIF LANGSUNG (DIRECT RECURSION)

#include <iostream>
using namespace std;

// kode ini berfungsi untuk melakukan hitung mundur dari angka yg diinputkaan
// pengkondisian agar rekursif berhenti
void countdown (int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown (n-1);
}
// Main program
int main(){
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan inputnya
    cout << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
