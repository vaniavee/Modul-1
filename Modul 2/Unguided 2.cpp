// VANIA NOVERINA - 2311110031
// MODUL - ARRAY
// UNGUIDED 2

#include <iostream>
using namespace std;

// Main Programm
int main(){
    // Deklarasi variabel
    int i_size, j_size, k_size; // Menggunakan tipe data integer

    // Menu untuk input jumlah dan ukuran elemen array
    cout << "   Program Array tiga dimensi " << endl;
    cout << "----------------------------------" << endl;
    cout << "\nMasukkan ukuran matriks array: ";
    cin >> i_size;
    cout << "\nMasukkan panjang baris array: ";
    cin >> j_size;
    cout << "\nMasukkan panjang kolom array: ";
    cin >> k_size;

    
    // Deklarasi Array
    int arr[i_size][j_size][k_size]; // Menggunakan tipe data integer

    // Input elemen
    for (int i=0; i < i_size; i++)
    {
        for (int j=0; j < j_size; j++)
        {
            for (int k=0; k < k_size; k++)
            {
                cout << "Input array[" << i << "] [" << j << "] [" << k <<"] = ";4
                cin >> arr[i][j][k];
            }
        }
        cout << endl;
    }


    // Output Array
    for (int i = 0; i < i_size; i++)
    {
        for (int j = 0; j < j_size; j++)
        {
            for (int k = 0; k < k_size; k++)
            {
                cout << "Data array[" << i << "] [" << j << "] [" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
    cout << endl;


    //Tampilan array
    for (int i = 0; i < i_size; i++)
    {
        for (int j = 0; j < j_size; j++)
        {
            for (int k = 0; k < k_size; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
} // Akhir dari Main Program