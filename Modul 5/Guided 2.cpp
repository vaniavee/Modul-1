// JUMAT, 26 JUMAT 2024
// MODUL 5 - STRUCT
// GUIDED 2

#include<iostream>
#include<string>
using namespace std;

// Mendeklarasikan atribut yang berkaitan dengan hewan
struct Hewan{
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; Hewan info_hewan;

// Mendeklarasikan atribut tambahan khusus hewan darat
struct Hewan_drt{
    Hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
}; 
Hewan_drt hewan1;

// Mendeklarasikan atribut tambahan khusus hewan laut
struct Hewan_lt{
    Hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
Hewan_lt hewan2;

// Main program
int main(){
// Memasukkan data hewan1 dan hewan2
    hewan1.info_hewan.nama_hewan = "Kucing";
    hewan1.info_hewan.jenis_kelamin = "J";
    hewan1.info_hewan.kembangbiak = "Menyusui";
    hewan1.info_hewan.pernafasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = true; 
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";
    
    hewan2.info_hewan.nama_hewan = "Penyu";
    hewan2.info_hewan.jenis_kelamin = "B";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernafasan = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "Sirip dan Ekor";
    hewan2.pertahanan_diri = "Cangkang yang kuat";

// Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama Hewan : " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Pernafasan : "<< hewan1.info_hewan.pernafasan << endl;
    cout << "Tempat Hidup : " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah  Karnivora? : " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah Kaki : " << hewan1.jumlah_kaki << endl; 
    cout << "Apakah Menyusui? : " << hewan1.apakah_menyusui << endl;
    cout << "Suara : " << hewan1.suara << endl;
    cout << endl;

    cout << "\tHewan Laut" << endl;
    cout << "Nama Hewan : " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Pernafasan : "<< hewan2.info_hewan.pernafasan << endl;
    cout << "Tempat Hidup : " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah  Karnivora? : " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk Sirip : " << hewan2.bentuk_sirip << endl; 
    cout << "Pertahanan Diri : " << hewan2.pertahanan_diri << endl;

// Mencetak nama pembuat program
    cout << endl;
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    
    return 0;
} // akhir dari main program

