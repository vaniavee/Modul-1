// JUMAT, 26 JUMAT 2024
// MODUL 5 - STRUCT
// GUIDED 1

#include<iostream>
#include<string>
using namespace std;
// deklarasi atribut struct Buku
struct Buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
}; Buku buku1, buku2;
// Main program
int main(){
// Memasukkan data buku1 dan buku2
    buku1.judul_buku = "Hunger Games: The Ballad of Songbirds & Snake";
    buku1.pengarang = "Suzanne Collins";
    buku1.penerbit = "Gramedia Pustaka Utama";
    buku1.tebal_halaman = 656;
    buku1.harga_buku = 149000;

    buku2.judul_buku = "Fantastic Beasts And Where To Find Them";
    buku2.pengarang = "J.K. Rowling";
    buku2.penerbit = "Gramedia Pustaka Utama";
    buku2.tebal_halaman = 320;
    buku2.harga_buku = 100000;

// Menampilkan informasi data
    // Buku 1
    cout << "Informasi Buku 1:" << endl;
    cout << "Judul Buku: " << buku1.judul_buku << endl;
    cout << "Pengarang: " << buku1.pengarang << endl;
    cout << "Penerbit: " << buku1.penerbit << endl;
    cout << "Tebal Halaman: " << buku1.tebal_halaman << endl;
    cout << "Harga Buku: " "Rp " <<  buku1.harga_buku << endl;
    cout << endl;
    // Buku 2
    cout << "Informasi Buku 2:" << endl;
    cout << "Judul Buku: " << buku2.judul_buku << endl;
    cout << "Pengarang: " << buku2.pengarang << endl;
    cout << "Penerbit: " << buku2.penerbit << endl;
    cout << "Tebal Halaman: " << buku2.tebal_halaman << endl;
    cout << "Harga Buku: " "Rp " << buku2.harga_buku << endl;
    // Mencetak nama pembuat program
    cout << endl;
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0; 
} // akhir dari main program