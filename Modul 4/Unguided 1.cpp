// VANIA NOVERINA - 2311110031
// MODUL 4 - SEARCHING 
// UNGUIDED 1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Fungsi untuk melakukan pencarian huruf dalam kalimat
vector<int> search_Letter(const string & kalimat, char huruf) {
    vector<int> indeks; // untuk menyimpan posisi huruf yang ditemukan

    // Melakukan pencarian huruf secara sequential
    for (int i = 0; i < kalimat.length(); ++i) {
        // Jika huruf ditemukan, maka posisinya akan ditambahkan ke dalam vektor
        if (kalimat[i] == huruf) {
            indeks.push_back(i);
        }
    }
    // Jika huruf tidak ditemukan, kembalikan indeks
    return indeks;
}
// Main program
int main() {
    // Input kalimat dari user
    string kalimat;
    cout << "Input kalimat: ";
    getline(cin, kalimat);

    // Input huruf yang ingin dicari
    char huruf;
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> huruf;

    // Cari huruf dalam kalimat
    vector<int> indeks = search_Letter(kalimat, huruf);

    // Output hasil pencarian
    if (indeks.empty()) {
        // huruf tidak ditemukan 
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    } else {
        // huruf ditemukan
        cout << "Huruf '" << huruf << "' ditemukan pada indeks berikut:" << endl;
        for (int i = 0; i < indeks.size(); ++i){
            cout << "Indeks ke" << ": " << (indeks[i]) << endl; 
        }
        cout << endl;
        cout << "By : Vania Noverina - 2311110031" << endl;
    }
    return 0;
}
