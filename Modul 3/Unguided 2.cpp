// VANIA NOVERINA - 2311110031
// UNGUIDED 2

#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara ascending menggunakan algoritma bubble sort
void bubble_sort(string arr[], int length){
    bool not_sorted = true;
    int j = 0;
    string tmp;

    // melakukan pengurutan hingga array sudah teurut
    while (not_sorted){
        not_sorted = false;
        j++;

        
        // membandingkan dan menukar eleman
        for (int i = 0; i < length -j; i++){
            if (arr[i] > arr[i + 1]){
                //menukar elemen
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;

                // set not_sorted ke true karena ada perubahan posisi elemen
                not_sorted =true;

            } // end of if loop
        } // end of for loop
    } // end of while loop
} // end of bubble sorting

// Fungsi untuk mencetak isi array
void print_array(string arr[], int length){
    for(int i = 0; i < length; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Main programm
int main(){

    // Deklarasi array dan panjang elemen dalam array 
    int length = 10;
    string arr[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    
    // Menampilkan array sebelum diurutkan secara descending
    cout << "Urutan nama sebelum sorting secara ascending: " << endl;
    print_array(arr, length);

     // Memanggil fungsi bubble sort untuk mengurutkan array secara ascending
    bubble_sort(arr, length);

    // Menampilkan array setelah diurutkan secara descending
    cout << "Urutan nama setelah sorting secara ascending: " << endl;
    print_array(arr, length);

    return 0;
}