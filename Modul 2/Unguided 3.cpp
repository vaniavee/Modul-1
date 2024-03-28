// VANIA NOVERINA - 2311110031
// MODUL - ARRAY
// UNGUIDED 3
// VANIA NOVERINA - 2311110031
#include <iostream>
using namespace std;

int main() {
    // Deklarasi tipe data variabel
    int maks, min, a, lokasiMax, lokasiMin, jumlah = 0, rata;
    int choices;

    // Input panjang array
    cout << "Masukkan panjang array: ";
    cin >> a;
    // Validasi panjang array harus lebih besar dari 0
    if (a <= 0) {
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk indikasi error
    }

    // Deklarasi panjang array
    int array[a];
    // Input elemen array
    cout << "Masukkan " << a << " angka\n";

    // Fungsi perulangan untuk menjumlahkan nilai array
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        jumlah += array[i];

        // Mencari nilai maksimum
            if (array[i] > maks) { // Jika nilai array lebih kecil dari variabel maksimum
                maks = array[i]; // maka nilai  maksimum diubah menjadi nilai array
                lokasiMax = i;
            }
            // Mencari nilai minimum
            if (array[i] < min) { // Jika nilai array lebih besar dari variabel minimum
                min = array[i]; // maka nilai minimum diubah menjadi nilai array
                lokasiMin = i;
            }
        }   
do
{ 
    // Menampilkan menu
    cout << " ============= " << endl;
    cout << "     MENU:  " << endl;
    cout << " ============= " << endl;
    cout << "1. Nilai Maksimum\n";
    cout << "2. Nilai Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "4. Exit\n";
    cout << "Masukkan pilihan Anda: "; 
    cin >> choices;
    switch (choices) {
        case 1:
            cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasiMax << endl;
            break;
        case 2:
            cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasiMin << endl;
            break;
        case 3:
            // Menghitung rata-rata
            rata = jumlah / a;
            cout << "Nilai rata-ratanya adalah " << rata << endl;
            break;
        case 4:
            cout << "\n Thank you and see u again" << endl; 
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }
    } while (choices != 0);
    return 0;
}