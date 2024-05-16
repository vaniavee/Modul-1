// JUMAT, 10 MEI 2024
// MODUL 7 - STACK
// GUIDED 1 

#include <iostream>
using namespace std;

string arrayBuku[5]; // inisiasi panjang array
int maksimal = 5, top = 0; // top adl. indeks posisi teratar dari stack

bool isFull() { // jika stack penuh
    return (top == maksimal);
}

bool isEmpty() { // jika stack kosong
    return (top == 0);
}
// menambah data
void pushArrayBuku(string data) {
    if (isFull()) { // jika penuh
        cout << "Data telah penuh" << endl;
    } else { // jika stack tidak penuh maka data akan ditambahkan
        arrayBuku[top] = data;
        top++;
    }
}
// menghapus data
void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else { // jika stack tidak kosong, elemen teratas akan dihapus 
        arrayBuku[top - 1] = ""; // posisi top akan turun.
        top--;
    }
}
// melihat data
void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}
// menghitung jumlah elemen
int countStack() {
    return top;
}
// mengubah data pada posisi t
void changeArrayBuku(int posisi, string data) {
    if (posisi > top) { // jika posisi melebihi jumlah elemen stack
        cout << "Posisi melebihi data yang ada" << endl; // maka program akan menampilakan error message
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}
// Menghapus seluruh data dalam array
void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}
// menampilkan array
void cetakArrayBuku() {
    if (isEmpty()) { // jika kosong datanya
        cout << "Tidak ada data yang dicetak" << endl;
    } else { // jika ada datanya
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}
// Main program
int main() {
    // Menambahkan data ke stack
    pushArrayBuku("Kalkulus"); // posisi baling bawah, karena yg pertama kali di push]
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");
    // Mencetak seluruh isi stack
    cetakArrayBuku();
    cout << "\n";
    // Memeriksa apakah stack penuh/ kosong
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2); // Melihat data pada posisi ke-2
    popArrayBuku(); // Menghapus elemen teratas stack
    cout << "Banyaknya data = " << countStack() << endl; // Menghitung jumlah data
    changeArrayBuku(2, "Bahasa Jerman"); // Mengubah data posisi ke-2 menjadi "Bahasa Jerman"
    cout << endl;
    cetakArrayBuku(); // Menampilkan stack
    cout << "\n";
    destroyArraybuku(); // Menghapus seluruh data dalam stack
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
