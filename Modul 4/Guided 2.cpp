// MODUL 4 - SEARCHING
// JUMAT, 19 APRIL 2024
// GUIDED 2 - Binary Searching
// Vania Noverina - 231110031

#include <iostream>
#include <iomanip> // manipulator >> merapikan
using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

// fungsi untuk sorting data secara ascending
void selection_sort(){ 
    int tmp, min, i, j;
    for (i =0; i < 7; i++){
        min = i;
        for (j = i + 1; j < 7; j++){
            if (bil_data[j] < bil_data[min]){
                min = j;
            }
        }
        tmp = bil_data[i];
        bil_data[i] = bil_data [min];
        bil_data[min] = tmp;
    }
}

// fungsi untuk mencari data menggunakan binary search
void binary_search(){
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir){
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari){ // jika data yg dicari berada ditengah maka program akan selesai
            b_flag = 1;
            break;
        } else if (bil_data[tengah] < cari) { // jika data yg dicari nilainya kurang dari nilai tengah
            awal = tengah + 1; 
        } else {
            akhir = tengah -1;
        }
    }

    // Output hasil searching 
    if(b_flag == 1){
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}
// Main Program
int main(){
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";

    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";

    // urutkan data dengan selection sort
    selection_sort();

    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}