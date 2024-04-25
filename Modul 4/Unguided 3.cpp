// VANIA NOVERINA - 2311110031
// MODUL 4 - SEARCHING 
// UNGUIDED 3

#include <iostream>
using namespace std;

// Melakukan iterasi pada setiap elemen array
int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1; // jika tidak ditemukan maka kembalikan -1
}
// Main program
int main(){
    int n = 10; // deklarasi jumlah elemen array
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 4; //deklarasi angka yg ingin dicari
    bool ketemu = false;
    int i, count = 0;

    // Algoritma sequential search
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            ketemu = true;
            count++;
        }
    }
    // Mencetak array, nilai yang dicari dan indeksnya
    cout << "\t Program Sequential Search\n" << endl;
    // Menampilkan data 
    cout << " Data: { 9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    // Mencari posisi angka 4 di dalam array
    if (ketemu){
        cout << "\n Angka " << cari << " ditemukan pada indeks ke-";
        for (int j = 0; j < n; j++){
            if (data[j] == cari){
                cout << j << " ";
            }
        }
        // Menampilkan jumlah kemunculan angka 4
        cout << "\n Jumlah kemunculan: " << count << endl;
    } else {
        // jika tidak terdapat pada array
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    return 0; 
}