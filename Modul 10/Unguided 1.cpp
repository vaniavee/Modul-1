#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 
using namespace std;

// main program
int main() {
    int numCities; // deklarasi variabel untuk menyimpan jumlah kota
   
    // Input jumlah kota 
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> numCities;
    cin.ignore();  // Ignore newline character left in the input buffer

    vector<string> cities(numCities); // untuk menyimpan nama-nama kota
    vector<vector<int>> distanceMatrix(numCities, vector<int>(numCities, 0)); // untuk menyimpan jarak antar kota

    // Memasukkan dan menyimpan nama kota
    for (int i = 0; i < numCities; ++i) {
        cout << "Simpul " << i + 1 << ": "; // setiap iterasi nama kota ke-i akan dimasukkan
        getline(cin, cities[i]);
    }
    // Memasukkan dan menyimpan jarak antar simpul0
    
    cout << "\nSilahkan masukkan bobot antar simpul : Vania Noverina_2311110031\n";
    // 
    for (int i = 0; i < numCities; ++i) {
        for (int j = 0; j < numCities; ++j) {
            cout << cities[i] << "-->" << cities[j] << " = ";
            cin >> distanceMatrix[i][j];
        }
    }

    // Menampilkan jarak matriks
    cout << "\n     ";
    for (const auto& city : cities) {
        cout << setw(7) << city << "  "; // setw untuk mengatur jarak / lebar tampilan
    }
    cout << endl;
    // Menampilkan setiap baris matriks jarak dengan nama kota 
    for (int i = 0; i < numCities; ++i) {
        cout << setw(7) << cities[i] << "  ";
        for (int j = 0; j < numCities; ++j) {
            cout << setw(4) << distanceMatrix[i][j] << "  ";
        }
        cout << endl;
    }
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl; 
    return 0;

    return 0;
} // akhir dari program 
