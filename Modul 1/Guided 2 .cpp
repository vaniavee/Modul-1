// TIPE DATA
// JUMAT, 15 MAR 24

// GUIDED 2 TIPE DATA ABSTRAK

#include <iostream>
#include <stdio.h>
using namespace std;
struct Mahasiswa{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2; // menulis nama struct untuk dipanggil nanti
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // Mencetak isi struct
    cout << "Mahasiswa 1\n";
    cout << "Nama: " << mhs1.name << endl;
    cout << "Alamat: " << mhs1.address << endl;
    cout << "Umur: " << mhs1.age << endl;
    cout << "\nMahasiswa 2\n";
    cout << "Nama: " << mhs2.name << endl;
    cout << "Alamat: " << mhs2.address << endl;
    cout << "Umur: " << mhs2.age << endl;
    return 0;
}
    
