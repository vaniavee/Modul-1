# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 4 - Searching</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
Algoritma Searching merupakan algoritma yang digunakan untuk mencari lokasi dari sebuah data yang diberikan pada kumpulan data yang ada (database). Setelah  proses  pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successfull) atau tidak ditemukan (unsuccessfull)[1].

### 1. Sequential Search
`Sequential Search` adalah sebuah teknik pencarian yang membandingkan setiap elemen data dengan data yang dicari.   Pencarian dilakukan dengan membandingkan sebuah elemen data yang dicari dengan elemen pertama sampai dengan terakhir jika data yang dicari ditemukan maka pencarian akan dihentikan. Berbeda dengan `binary search` pada metode ini data tidak perlu diurutkan terlebih dahulu karena elemen dalam array akan dicari satu persatu baik dari depan maupun belakang[2].

Meskipun sederhana, tapi `sequential search` memiliki kinerja yang kurang efisien terutama untuk kumpulan data yang banyak. Hal ini dikarenakan `sequential search` memiliki kompleksitas waktu O(n) dimana n adalah jumlah elemen dalam kumpulan data. Oleh karena itu meskipun cocok untuk kumpulan data kecil dan tidak terurut namun sangat tidak efisien jika digunakan untuk data yang besar.

### 2. Binary Search
`Binary search` adalah algoritma pencarian untuk data yang  terurut. Pencarian dilakukan dengan cara menebak apakah data yang dicari berada ditengah-tengah data, kemudian membandingkan data yang dicari dengan data yang ada ditengah. Jika data yang ditengah sama dengan data yang dicari, maka data ditemukan. Tapi, jika data yang ditengah lebih besar dari data yang dicari, maka dapat dipastikan bahwa data yang  dicari berada disebelah kiri data tengah dan data disebelah kanan  data  tengah  dapat  diabai. Begitu juga sebaliknya[1].  

Algoritma ini hanya bisa digunakan pada data yang elemenya sudah terurut baik secara ascending maupun descending.

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data. 

```C++
#include <iostream>
using namespace std;

// Main Program
int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10; //deklarasi angka yg ingin dicari
    bool ketemu = false;
    int i;

    // Algoritma sequential search
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Seguential Search Sederhana\n" << endl;
    cout << " Data: { 9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0; 
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/ee2962ac-31aa-4bda-a9d8-5a83a76d4353)

Program diatas merupakan implementasi dari sequential search. Variabel `n` menunjukkan jumlah elemen dalam array dan bertipe data integer. `data[n]` adalah array yang memiliki panjang 10 elemen integer yang akan dicari nanti. `cari` adalah variabel yang menyimpan data nilai yang ingin dicari di dalam array. `ketemu` merupakan variabel boolean untuk menandai apakah nilai yang dicari sudah ditemukan atau belum.

Pertama, program akan menggunakan loop `for` unruk melakukan sequential search melalui array `data`. Lalu program akan memeriksa pada setiap iterasi apakah elemen array ke-i sama dengan nilai `cari`. Jika iya maka `ketemu` menjadi `true` dan program akan menyimpan indeks elemen yang ditemukan dalam variabel `i`.

Setelah itu program akan mencetak judul "Program Sequential Search Sederhana" dan daftar data yang akan dicari. Jika nilai `cari` ditemukan di dalam array maka program akan mencetak pesan bahwa 'nilai tersebut ditemukan beserta indeksnya'. Jika tidak, maka program akan mencetak pesan 'nilai tersebut tidak dapat ditemukan pada data'. 

#### Full code Screenshot:
![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/4f68900b-f9e8-45c0-908d-877bb9a7bf61)

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search 

```C++
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
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/fd3a408d-99ca-45a9-93f5-a34a85a8492a)

Kode diatas merupakan sebuah program untuk mencari letak data dalam suatu array menggunakan binary search.

Program akan mendeklarasikan array `bil_data` yang berisi angka-angka yang belum diurutkan bertipe data integer. Variabel `cari` memuat angka inputan yang ingin diketahui posisinya bertipe data integer. Variabel `awal`, `akhir`, `tengah`, `b_flag` juga bertipe data integer. 

Pertama program akan menampilkan data yang yang belum diurutkan, lalu user akan diminta untuk memasukkan nilai yang ingin dicari posisinya. Lalu program akan mengurutkan data terlebih dahulu secara ascending menggunakan algoritma `selection sort` dan menampilkan hasilnya.

Lalu melalui fungsi `binary_search` program akan mencari nilai yang disimpan dalam variabel `cari` di dalam array `bil_data` yang sudah diurutkan. Algoritma binary search ini bekerja dengan membagi dua array, lalu di cek apakah nilai yang dicari lebih kecil / lebih besar dari nilai tengah. Jika nilai yang dicari berada di `nilai tengah` maka program akan selesai dan menampilkan hasil pencariannya. Jika tidak, maka pencarian akan dilanjutkan ke setengah bagian yang sesuai berdasarkan nilai yang dicari, jika `cari` < `nilai tengah` maka program akan mencari ke sebelah kiri `nilai tengah`, jika `cari` > `nilai tengah` maka program akan mencari ke sebelah kanan `nilai tengah`. Proses ini berulang sampai nilai yang dicari ditemukan.

#### Full code Screenshot:
![Fullcode Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e6e5c1c5-5997-4624-8759-3eb6d373b9b3)


## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search! 

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Fungsi untuk melakukan pencarian huruf dalam kalimat
vector<int> search_Letter(const string & kalimat, char huruf) {
    vector<int> indeks; // untuk menyimpan posisi huruf yang ditemukan

    // Melakukan pencarian huruf secara sequential
    for (int i = 0; i < kalimat.length(); ++i) {
        // Jika huruf ditemukan, maka posisinya akan ditambahkan ke dalam vektor
        if (kalimat[i] == huruf) {
            indeks.push_back(i);
        }
    }
    // Jika huruf tidak ditemukan, kembalikan indeks
    return indeks;
}
// Main program
int main() {
    // Input kalimat dari user
    string kalimat;
    cout << "Input kalimat: ";
    getline(cin, kalimat);

    // Input huruf yang ingin dicari
    char huruf;
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> huruf;

    // Cari huruf dalam kalimat
    vector<int> indeks = search_Letter(kalimat, huruf);

    // Output hasil pencarian
    if (indeks.empty()) {
        // huruf tidak ditemukan 
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    } else {
        // huruf ditemukan
        cout << "Huruf '" << huruf << "' ditemukan pada indeks berikut:" << endl;
        for (int i = 0; i < indeks.size(); ++i){
            cout << "Indeks ke" << ": " << (indeks[i]) << endl; 
        }
    }
    return 0;
}
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/377a7100-21b7-46fb-b551-746485e52937)

### Interpretasi: 
Program dimulai dengan user memasukkan kalimat menggunakan `getline()`. Lalu pengguna diminta untuk memasukkan huruf yang ingin dicari di dalam kalimat. Setelah itu melalui fungsi `search_Letter()` akan dicari posisi indeks dari huruf yang dimasukkan pengguna dalam kalimat. Fungsi ini akan melakukan iterasi pada setiap karakter dalam `kalimat`. Jika karakter dalam kalimat sama dengan huruf yang ingin dicari, maka posisi indeks karakter tersebut akan ditambahkan ke dalam vektor indeks.

Setelah itu program akan mencetak dan menampilkan posisi indeks huruf dalam kalimat. Jika huruf tidak ditemukan maka akan dicetak "Huruf tidak ditemukan dalam kalimat"

#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e5d54f39-08f8-4eaa-a99d-4a452a0cebd6)


### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat! 

```C++
#include <iostream> // untuk input-output
#include <string> // untuk bekerja dengan tipe data string
#include <vector> // untuk menyimpan indeks huruf vokal
using namespace std;

// Fungsi untuk mengecek apakah suatu karakter adalah huruf vokal
bool isVowel(char huruf) {
    string vokal = "aiueoAIUEO";
    // untuk mencari apakah huruf tersebut terdapat dalam string vokal
    return vokal.find(huruf) != string::npos; 
}
// Main Program
int main() {
    string kalimat;
    cout << "=================================================";
    cout << "\n Program untuk Mencari Huruf Vokal dalam Kalimat" << endl;
    cout << "=================================================" << endl;
    cout << "Masukkan kalimat: "; // input kalimat menggunakan getline
    getline(cin, kalimat);
    // Mencari huruf vokal dalam kalimat dan menambahkan kedalam jumlah_vokal
    cout << "Huruf vokal dalam kalimat: ";
    int jumlah_vokal = 0;
    for (int i = 0; i < kalimat.length(); ++i) {
        if (isVowel(kalimat[i])) {
            cout << kalimat[i] << " ";
            jumlah_vokal++;
        }
    }
    // Mencari dan mencetak posisi indeks huruf vokal
    cout << endl;
    cout << "Posisi indeks huruf vokal dalam kalimat: ";
    for (int i = 0; i < kalimat.length(); ++i) {
        if (isVowel(kalimat[i])) {
            cout << i << " ";
        }
    }
    // Mencetak total huruf vokal yang ada dalam kalimat
    cout << endl;
    cout << "Total: " << jumlah_vokal << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0; // akhir dari program
}
```
#### Output:
![Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/4326663e-68d3-4821-af1e-806cb8f51083)

### Interpretasi :
Kode diatas merupukan program untuk mencari dan menghitung frekuensi huruf vokal dalam suatu kalimat yang diinputkan user. Program akan memeriksa apakah karakter dalam kalimat tersebut huruf vokal dengan fungsi `isVowel`. Jika karakter tersebut adalah huruf vokal maka fungsi akan mengembalikan `true`, jika tidak maka `false`.

Pertama program akan mendeklarasikan variabel `kalimat` untuk menyimpan inputan kalimat dari user. Setelah user memasukkan kalimat melalui `getline()` yang memungkinkan input berisi spasi maka program akan mendeklarasikan variabel `jumlah_vokal` untuk menghitung jumlah huruf vokal. 

Loop `for` digunakan untuk mengecek pada setiap iteraasi apakah terdapat huruf vokal, jika iya maka akan ditambahkan ke `jumlah_vokal`. Setelah semua iterasi selesai program akan mencetak jumlah total huruf vokal dan posisi indeksnya.

#### Full code Screenshot:
![Fullcode Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/3ba10edc-883c-4f1a-a2bf-d11be79f11fa)


### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search! 

```C++
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
```
#### Output:
![Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/7c0b084f-ee31-4932-ae31-9e18676d092a)

### Interpretasi :
Kode diatas merupakan program untuk menghitung frekuensi angka 4 dalam array. Pertama program akan mendeklarasikan array `data ` yang berisi 10 elemen bertipe integer. Lalu variabel `cari` yang merupakan elemen yang ingin dicari didalam array. Variabel `ketemu` yang bertipe boolean akan menjadi `true` jika elemen yang dicari ditemukan dan akan dihitung jumlah kemunculannya dan `false` jika tidak. 

Setelah selesai iterasi, program akan mencetak array, nilai yang dicari beserta indeksnya, dan jumlah kemunculan nilai tersebut.

#### Full code Screenshot:
![Fullcode Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/66162dcf-07b3-49ef-971e-9f3bfcaf6fb9)


## Kesimpulan
Pada praktikum kali ini membahas tentang algoritma searching yaitu sequential search dan binary search. Perbedaan dari kedua metode ini yaitu efisiensi dan efektivitasnya dalam pencarian. Sequential search memerlukan waktu yang lebih lama daripada binary search karena harus mencari satu-satu. Berbeda dengan binary search yang langsung mencari dengan menentukan nilai tengahnya dulu.

Pada ketiga unguided ini kita belajar bagaimana mengimplementasikan algoritma searching yaitu binary dan sequential search untuk mencari huruf tertentu dalam sebuah kalimat, mencari dan menghitung frekuensi huruf vokal pada kalimat, serta menghitung frekuensi angka tertentu.


## Referensi
[1] Y. Afrillia and S. Ramadani, “Sistem Informasi Pencarian Tata Letak Buku Pada Perpustakaan Menggunakan Metode Binary Search,” J. Inform. Kaputama, vol. 6, no. 1, pp. 31–35, 2022, doi: 10.59697/jik.v6i1.132.

[2] H. F. Nasution, D. Suranti, and J. Fredricka, “Application of sequential searching method in searching case data at the office Prosecutor’s office,” J. Komput. Indones., vol. 2, no. 2, pp. 79–90, 2023, [Online]. Available: http://jurnalunived.com/index.php/JKI/article/view/291%0Ahttp://jurnalunived.com/index.php/JKI/article/download/291/150 [diakses 25 April 2024].