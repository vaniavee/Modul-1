#include <iostream>
using namespace std;

struct Film { // Membuat struct film
    string judul; // Berisi variabel judul yang bertipe data string
    string genre;
    int tahun_terbit; // dan variabel tahun terbit yang bertipe data int
};

class Film_favorit { // Membuat class film favorit
    public: 
    string pengarang; // Berisi variabel pengarang yang bertipe data string
    string actor; // variabel actor bertipe data string
    string peran; // variabel peran bertipe data string
};

// Main Program
int main() { 
    struct Film film_1; // menulis nama struct untuk dipanggil nanti
    
    // Mengisi nilai kedalam struct
    film_1.judul = "Percy Jackson and The Olympians";
    film_1.genre = "Adventure";
    film_1.tahun_terbit = 2010;

    // Mencetak isi struct film 1
    cout << "=====STRUCK=====";
    cout << "\nJudul: " << film_1.judul;
    cout << "\nGenre: " << film_1.genre;
    cout << "\nTahun Terbit: " << film_1.tahun_terbit << endl;

    // Memanggil class Film favorti
    Film_favorit film_2;

    // Memasukkan data kedalam class
    film_2.pengarang = "J.K Rowling";
    film_2.actor = "Tom Felton";
    film_2.peran = "Draco Malfoy";
    
    // Menampilkan data class yang sudah dimasukkan
    cout << "=====CLASS=====";
    cout << "\nPengarang: " << film_2.pengarang;
    cout << "\nActor: " << film_2.actor;
    cout << "\nPeran " << film_2.peran;

    return 0;
}