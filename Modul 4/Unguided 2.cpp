// VANIA NOVERINA - 2311110031
// MODUL 4 - SEARCHING 
// UNGUIDED 2

#include <iostream> // untuk input-output
#include <string> // untuk bekerja dengan tipe data string
#include <vector> // untuk menyimpan indeks huruf vokal
using namespace std;

// Fungsi untuk mengecek apakah suatu karakter adalah huruf vokal
bool isVowel(char huruf) {
    string vokal = "aiueoAIUEO";
    // untuk mencari apakah huruf tersebut terdapat dalam string vokal
    return vokal.find(huruf) != string::npos; 
}
// Main Program
int main() {
    string kalimat;
    cout << "=================================================";
    cout << "\n Program untuk Mencari Huruf Vokal dalam Kalimat" << endl;
    cout << "=================================================" << endl;
    cout << "Masukkan kalimat: "; // input kalimat menggunakan getline
    getline(cin, kalimat);
    // Mencari huruf vokal dalam kalimat dan menambahkan kedalam jumlah_vokal
    cout << "Huruf vokal dalam kalimat: ";
    int jumlah_vokal = 0;
    for (int i = 0; i < kalimat.length(); ++i) {
        if (isVowel(kalimat[i])) {
            cout << kalimat[i] << " ";
            jumlah_vokal++;
        }
    }
    // Mencari dan mencetak posisi indeks huruf vokal
    cout << endl;
    cout << "Posisi indeks huruf vokal dalam kalimat: ";
    for (int i = 0; i < kalimat.length(); ++i) {
        if (isVowel(kalimat[i])) {
            cout << i << " ";
        }
    }
    // Mencetak total huruf vokal yang ada dalam kalimat
    cout << endl;
    cout << "Total: " << jumlah_vokal << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0; // akhir dari program
}
