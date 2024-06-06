// MODUL 10 - GRAPH AND TREE
// JUMAT, 31 MEI 24
// GUIDED 1 - GRAPH

#include<iostream>
#include<iomanip>
using namespace std;

// array `simpul` berisi nama" kota
string simpul[7] = {"Ciamis",
                    "Bandung",
                    "Bekasi",
                    "Tasikmalaya",
                    "Cianjur",
                    "Purwokerto",
                    "Yogyakarta"};

// Matriks jarak antar kota
int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0,},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0}
};
// Menampilkan grafik dari kota" tsb
void tampilGraph(){
    for (int baris = 0; baris < 7; baris++){
        cout << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++){
            if (busur[baris][kolom] != 0)
                cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
        }
        cout << endl;
    }
}
// main program
int main(){ 
    tampilGraph(); // Menampilkan grafik dari kota" tsb
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl; 
    return 0;
}