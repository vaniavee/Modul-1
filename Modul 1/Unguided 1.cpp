#include <iostream>
using namespace std;

// Fungsi untuk menghitung Volume Prisma Segitiga
float HitungVolumePrisma(float alas, float tinggi, float tinggiPrisma){
    return ((alas * tinggi)/2 * tinggiPrisma);
} 

// Fungsi untuk menghitung Keliling Prisma Segitiga
float HitungLuasAlasPrisma(float alas, float tinggi){
    return (alas*tinggi/2);
}

// Main Program
int main(){
    int PilihanMenu;
    float alas, tinggi, tinggiPrisma; // operator yang akan digunakan

    // Halaman menu untuk memilih menu yang ingin digunakan
    cout << "\n =====Pilih yang mau dihitung=====:\n";
    cout << "1. Hitung Volume Prisma Segitiga\n";
    cout << "2. Hitung Luas Alas Prisma Segitiga\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihanMenu;

    // Memilih case yang akan dijalankan
    switch(PilihanMenu){
        case 1:
            cout << "Masukkan alas:"; // menginputkan panjang alas dalam cm
            cin >> alas;
            cout << "Masukkan tinggi: "; // menginputkan tinggi segitiga dalam cm
            cin >> tinggi;
            cout << "Masukkan tinggi prisma: "; // menginputkan tinggi prisma dalam cm
            cin >> tinggiPrisma;
            // Mencetak Output
            cout << "Volume Prisma Segitiga adalah: " << HitungVolumePrisma(alas, tinggi, tinggiPrisma) << endl;
            break;
        case 2:
            cout << "Masukkan alas:"; // menginputkan panjang alas dalam cm
            cin >> alas;
            cout << "Masukkan tinggi: "; // menginputkan tinggi segitiga dalam cm
            cin >> tinggi;
            // Mencetak Output
            cout << "Luas Alas Prisma Segitiga adalah: " << HitungLuasAlasPrisma(alas, tinggi) << endl;
            break;
        default: // jika tidak ada kondisi yg terpenuhi, error message jika menginputkan selain angka 1 dan 2
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0; // end of main function
}