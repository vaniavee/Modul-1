// MODUL 5 - STRUCT
// UNGUIDED 1
// Vania Noverina - 2311110031

#include <iostream>
#include <string>
using namespace std;

// Deklarasi atribut struct Buku  
struct Buku {
    string JudulBuku;        
    string pengarang;         
    string penerbit;          
    int TebalHalaman;        
    double HargaBuku;           
};
// Main program
int main() {
    const int JumlahBuku = 5; // ukuran array
    Buku book[JumlahBuku]; // Deklarasi array book dengan tipe Buku

    // Data buku
    string JudulBuku[] = {"Hunger Games: The Ballad of Songbirds & Snake", "Fantastic Beasts And Where To Find Them", "Pulang", "Moby Dick", "Pembunuhan di Nihonbashi (The Newcomer)"};
    string pengarang[] = {"Suzanne Collins", "J.K. Rowling", "Tere Liye", "Herman Melville", "Keigo Higashino"};
    string penerbit[] = {"Gramedia Pustaka Utama", "Gramedia Pustaka Utama", "Sabak Grip Nusantara", "Perseus Distribution", "Gramedia Pustaka Utama"};
    int TebalHalaman[] = {656, 320, 404, 729, 308};
    double HargaBuku[] = {149000, 100000, 89000, 139000, 79000};

    // Mengisi data pada array struct `Buku` 
    for (int i = 0; i < JumlahBuku; ++i) {
        book[i].JudulBuku = JudulBuku[i];
        book[i].pengarang = pengarang[i];
        book[i].penerbit = penerbit[i];
        book[i].TebalHalaman = TebalHalaman[i];
        book[i].HargaBuku = HargaBuku[i];
    }

    // menampilkan informasi buku
    cout << " ===== INFORMASI BUKU =====" << endl;
    for (int i = 0; i < JumlahBuku; ++i) {
        cout << "Buku ke-" << i + 1 << ":" << endl;
        cout << "Judul: " << book[i].JudulBuku << endl;
        cout << "Pengarang: " << book[i].pengarang << endl;
        cout << "Penerbit: " << book[i].penerbit << endl;
        cout << "Tebal Halaman: " << book[i].TebalHalaman << " halaman"<< endl;
        cout << "Harga Buku: Rp " << book[i].HargaBuku << endl;
        cout << endl;
    }
    // Mencetak nama pembuat program
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
} // akhir dari main program