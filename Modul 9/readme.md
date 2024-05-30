# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 9 - Rekursif dan Hash Table</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori

## Rekursif 
Fungsi Rekursif merupakan sebuah fungsi yang memanggil dirinya sendiri secara langsung maupun tidak langsung. Rekursif juga dapat dikatakan sebagai fungsi yang mengembalikan nilai dirinya sendiri[1]. Pada rekursif masalah akan dipecah menjadi submasalah yang lebih kecil.[2]

Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi[3]

### Kelebihan & Kekurangan
- Kelebihan dari rekursif yaitu penyelesaian masalah yang lebih terstruktur karena masalah akan dibagi menjadi masalah yang lebih kecil lagi, memungkinkan kita untuk mengekspresikan solusi dengan cara yang lebih elegan dan lebih sederhana daripada solusi iteratif, serta mengurangi duplikasi kode
- Kekurangan dari rekursif yaitu terletak pada penggunaan memori yang cukup besar (overhead memori) kompleksitas waktu yang tinggi, serta kesulitan dalam debugging dan tracing [4]

### Implementasi Rekursif :
1. Faktorial
2. Fibonacci
3. Menghitung pangkat 
4. Binary search

### Jenis-jenis rekursif
- Rekursif langsung : dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung.
- Rekursif tidak langsung : jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain[3]

## Hash Table
Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai kunci menjadi rentang indeks array[3].

Array menyimpan data dalam slot-slot yang disebut bucket. Setiap bucket dapat menampung satu atau beberapa item data. Fungsi hash digunakan untuk menghasilkan nilai unik dari setiap item data, yang digunakan sebagai indeks array. Dengan cara ini, hash table memungkinkan pencarian data dalam waktu yang konstan (O(1)) dalam kasus terbaik[3].

Faktor muatan tabel hash ditentukan oleh berapa banyak elemen yang disimpan di sana sehubungan dengan seberapa besar tabel tersebut. Tabel mungkin berantakan dan memiliki waktu pencarian lebih lama serta tabrakan jika faktor muatannya tinggi. Faktor beban yang ideal dapat dipertahankan dengan penggunaan fungsi hash yang baik dan pengubahan ukuran tabel yang tepat[5].

![Hash Table](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/24a73d8d-c067-4b5e-a137-7a296e90e1e4)


## Guided 

### 1. Rekursif Langsung (DirectRecursion)

```C++
#include <iostream>
using namespace std;

// kode ini berfungsi untuk melakukan hitung mundur dari angka yg diinputkaan
// pengkondisian agar rekursif berhenti
void countdown (int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown (n-1);
}
// Main program
int main(){
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan inputnya
    cout << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/213cad17-75b8-4a8a-a5f9-01201eb7f4fb)

Kode diatas merupakan program untuk melakukan hitung mundur dari angka yang diinputkan menggunakan rekursif langsung (direct recursion). 

Fungsi `countdown` memiliki variabel/ parameter `n` yang merupakan angka untuk memulai hitung mundur. Ketika nilai `n` sama dengan `0` maka fungsi akan berhenti dan tidak memanggil dirinya sendiri lagi. `cout << n << " "; countdown (n-1);` berfungsi untuk mencetak angka `n` dan kemudian memanggil fungsi `countdown` lagi dengan parameter `n-1`. Dengan demikian fungsi `countdown` akan memanggil dirinya sendiri secara rekursif sampai kondisi berhenti tercapai. Pada main programm, fungsi `countdown` akan dipanggil dengan parameter `5` sehingga akan melakukan hitung mundur dari 5 sampai 0. 

#### Full code Screenshot:
![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/823f3a5f-d40f-4979-b4bf-d7ea72945fa7)


### 2.  Rekursif Tidak Langsung (IndirectRecursion)

```C++
#include <iostream>
using namespace std;
// deklarasi dan definisi fungsi
void functionB (int n);
void functionA (int n) { // fungsi pertama yg memulai rekursif tdk langsung
    if (n > 0) {
        cout << n << " ";
        functionB(n-1) ; // panggilan rekursif tidak langsung
    }
}

void functionB (int n){ // fungsi kedua yg melanjutkan rekursif tdk langsung
    if (n > 0){
        cout << n << " ";
        functionA (n/2); // panggilan rekursif tidak langsung
    }
}
// main program
int main()
{
    int num = 5; // deklarasi dan inisiasi variabel `num` dengan nilai 5
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    // Mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9647286b-bae7-4942-905d-2f256efe6755)

Program diataas menggunakan rekursif tidak langsung pada kedua fungsi. yaitu `functionA` dan `functionB` yang saling memanggil satu sama lain.

`FunctionA` memiliki parameter `n`. Pertama program akan memastikan apakah `n` lebih besar dari `0` sebelum memulai rekursif. Setekah itu melalui fungsi `functionB(n-1)` fungsi `functionB` akan dipanggil dengan parameter `n-1`.

`functionB` memiliki parameter `n`. Setelah mengecek apakah `n` lebih besar dari `0` maka program akan memanggil `functionA` dengan parameter `n/2` `functionA`

lalu program akan memanggil fungsi `functionA` dengan parameter `num` yang diinisialisasi dengan nilai `5`. Ini akan memanggil fungsi `functionB` dengan parameter `4` ->>  `(n-1 = 5-1=4)`, yang kemudian akan memanggil fungsi `functionA` dengan parameter `2` ->> `(n/2 = 4-2 = 2)`, dan seterusnya. `functionA(0)` tidak melakukan apa-apa karena `n` tidak lebih besar dari 0, sehingga rekursi berhenti.

#### Full code Screenshot:
![Fullcode Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/ac853a56-88c1-4452-887a-f281ea0c2d9f)


### 3.  HashTable

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11; 
string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;
    
    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) { // untuk menghitung indeks hash nama karyawan
    int hash_val = 0;
    for (char c : key) {
        hash_val += c;
    }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
}
// menambahkan data karyawan 
void insert(string name, string phone_number) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            node->phone_number = phone_number;
            return;
        }
    }
    table[hash_val].push_back(new HashNode(name, phone_number));
}
// menghapus data karyawan
void remove(string name) {
    int hash_val = hashFunc(name);
    for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
        if ((*it)->name == name) {
            table[hash_val].erase(it);
            return;
        }
    }
}
// mencari data karyawan berdasarkan nama
string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
    return "";
    }
// menampilkan data karyawan
void print() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": ";
            for (auto pair : table[i]) {
            if(pair != nullptr){
                cout << "[" << pair->name << ", " <<
                pair->phone_number << "]";
            }
        }
        cout << endl;
    }
}
};
// main program
int main() {
    HashMap employee_map;
    // menambahkan data karyawan
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");
    // mencari data karyawan
    cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") << endl;
    cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") << endl;
    // menghapus data Mistah
    employee_map.remove("Mistah");
    cout << "Nomer Hp Mistah setelah dihapus : " <<employee_map.searchByName("Mistah") << endl << endl;
    cout << "Hash Table : " << endl;
    // menampilkan seluruh data 
    employee_map.print();
    // Mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/072f383d-7273-49cc-ae8a-48bd8fcd4248)

Kode diatas merupakan program untuk menyimpan data karyawan menggunakan hash table. Pertama program akan mendeklarasikan kelas `HashNode` digunakan untuk menyimpan data karyawan, yang terdiri dari nama dan nomor telepon. Kelas `HashMap` digunakan untuk mengelola data karyawan dalam bentuk hash table. `HeasMap` memiliki beberapa fungsi, yaitu :

1. `hashFunc(string key)`: Fungsi ini digunakan untuk menghitung indeks hash dari nama karyawan.
2. `insert(string name, string phone_number)`: Fungsi ini digunakan untuk menambahkan data karyawan ke dalam hash table.
3. `remove(string name)`: Fungsi ini digunakan untuk menghapus data karyawan dari hash table berdasarkan nama.
4. `searchByName(string name)`: Fungsi ini digunakan untuk mencari data karyawan berdasarkan nama dan mengembalikan nomor teleponnya.
5. `print()`: Fungsi ini digunakan untuk menampilkan seluruh data karyawan dalam hash table

Pada main, program akan melakukan operasi seperti Menambahkan data karyawan dengan nama "Mistah", "Pastah", dan "Ghana" ke dalam hash table. Mencari data karyawan berdasarkan nama dan menampilkan nomor teleponnya. Menghapus data karyawan dengan nama "Mistah" dari hash table. Dan menampilkan seluruh data karyawan dalam hash table menggunakan fungsi print().

#### Full code Screenshot:
![Fullcode Guided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/3fd6fe00-bdc9-4e79-bc07-823ef38ee445)


## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

![Soal Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/0903e0e9-ca6f-4c6d-bd1c-d872e118209c)

```C++
// UNGUIDED 1 - MODUL 9 REKURSIF & HASH TABLE

#include <iostream>
using namespace std;
// Fungsi untuk mengitung faktorial
long faktorial(int n) {
    if (n == 0 || n == 1) { // jika nilai n = 0 atau 1
        return 1; // maka fungsi akan mengembalikan 1
    } else {
        return n * faktorial(n-1); // rekursif langsung
    }
}
// Main program
int main() {
    int bilangan;
    cout << "Masukkan bilangan bulat positif: "; // input bil. bulat positif
    cin >> bilangan;
    // Faktorial dari bil. yg diinputkan
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```

#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b6fd6f98-d87a-4a5a-8727-1fe8b4a68a35)

### Interpretasi: 
Kode diatas adalah program untuk mencari bilangan bulat positif menggunakan fungsi rekursif langsung.

Pertama program akan meminta user memasukkan bilangan bulat positif. Kemudian, program akan menghitung faktorial dari bilangan tersebut menggunakan fungsi `faktorial` dan mencetak hasilnya.

Fungsi `faktorial(int n)` adalah fungsi rekursif yang digunakan untuk menghitung faktorial dari bilangan bulat positif `n`. Jika `n` sama dengan 0 atau 1, maka fungsi akan mengembalikan nilai 1, karena faktorial dari 0 dan 1 adalah 1. Tetapi jika `n` lebih besar dari 1, maka fungsi akan mengembalikan hasil perkalian antara `n` dan hasil panggilan fungsi faktorial dengan argumen `n-1`.

#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/445b1a90-d0c1-4179-b0fc-bba1546f49d3)


### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
// UNGUIDED 2 - MODUL 9 REKURSIF & HASH TABLE
#include <iostream>
using namespace std;

// Deklarasi awal fungsi faktorial1
long faktorial2(int n);

// Fungsi untuk menghitung faktorial
long faktorial1(int n) {
    if (n == 0 || n == 1) { // basis kasus
        return 1; 
    } else {
        return n * faktorial2(n-1); // memanggil fungsi faktorial2
    }
}
// Fungsi untuk memanggil fungsi faktorial1
long faktorial2(int n) {
    return faktorial1(n); // memanggil fungsi faktorial1
}
// Main program
int main() {
    int bilangan;
    cout << "Program Rekursif Tidak Langsung" << endl;
    cout << "================================" << endl;
    cout << "Masukkan bilangan bulat positif: "; // input bilangan bulat positif yg ingin dicari
    cin >> bilangan;
    // faktorial dari bil. bulat yg diinputkan
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial1(bilangan) << endl; 
    // mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl; 
    return 0;
}
```
#### Output
![Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6151b231-8198-49d9-8782-a88b02524847)

### Interpretasi: 
Kode diatas merupakan program untuk mencari faktorial bilangan bulat positif menggunakan rekursif tidak langsung.

Pertama program akan mendeklarasikan fungsi `faktorial2` yang akan dipanggil oleh fungsi `faktorial1`. Setelah itu program akan meminta user untuk memasukkan nilai bilangan bulat positif yang ingin dicari faktorialnya. Program akan memanggil fungsi `faktorial1` dengan argumen bilangan yang diinputkan oleh user, dan mencetak hasilnya.

Fungsi `faktorial1` adalah fungsi rekursif yang menghitung faktorial sebuah bilangan bulat positif. Jika `n` sama dengan 0 atau 1, maka fungsi akan mengembalikan nilai 1. Tetapi jika `n` lebih besar dari 1, maka fungsi akan memanggil dirinya sendiri dengan argumen `n-1` dan mengalikan hasilnya dengan `n`. Fungsi `faktorial2` adalah fungsi yang memanggil fungsi faktorial1.

#### Full code Screenshot:
![Fullcode Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/28175302-041e-46d1-ac11-9f5776f3e4ee)


### 3.  Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
a. Setiap mahasiswa memiliki NIM dan nilai.
b. Program memiliki tampilan pilihan menu berisi poin C.
c. Implementasikan fungsi untuk menambahkan data baru menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80– 90).

```C++
//Vania Noverina
//2311110031

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11;

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    double nilai;
    Mahasiswa(string nim, string nama, double nilai) : nim(nim), nama(nama), nilai(nilai) {}
};

class HashMap {
private:
    vector<Mahasiswa*> table[TABLE_SIZE];

    // Fungsi hash untuk menghasilkan indeks dari sebuah NIM
    int hashFunc(string nim) {
        int hash_val = 0;
        for (size_t i = 0; i < nim.length(); ++i) {
            hash_val += nim[i];
        }
        return hash_val % TABLE_SIZE;
    }

public:
    // menambahkan data mahasiswa baru
    void insertData(string nim, string nama, double nilai) {
        int index = hashFunc(nim);
        table[index].push_back(new Mahasiswa(nim, nama, nilai));
    }

    // menghapus data mahasiswa berdasarkan NIM
    void removeData(string nim) {
        int index = hashFunc(nim);
        for (size_t i = 0; i < table[index].size(); ++i) {
            if (table[index][i]->nim == nim) {
                delete table[index][i];
                table[index].erase(table[index].begin() + i);
                return;
            }
        }
        cout << "Mahasiswa dengan NIM '" << nim << "' tidak ditemukan." << endl;
    }

    // mencari data mahasiswa berdasarkan NIM
    void searchByNIM(string nim) {
        int index = hashFunc(nim);
        for (size_t i = 0; i < table[index].size(); ++i) {
            if (table[index][i]->nim == nim) {
                cout << "Mahasiswa dengan NIM '" << nim << "' ditemukan. Nama: " << table[index][i]->nama << ", Nilai: " << table[index][i]->nilai << endl;
                return;
            }
        }
        cout << "Mahasiswa dengan NIM '" << nim << "' tidak ditemukan." << endl;
    }

    // mencari data mahasiswa berdasarkan rentang nilai
    void searchByRange(double minNilai, double maxNilai) {
        bool found = false;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            for (size_t j = 0; j < table[i].size(); ++j) {
                if (table[i][j]->nilai >= minNilai && table[i][j]->nilai <= maxNilai) {
                    found = true;
                    cout << "NIM: " << table[i][j]->nim << ", Nama: " << table[i][j]->nama << ", Nilai: " << table[i][j]->nilai << endl;
                }
            }
        }
        if (!found) {
            cout << "Mahasiswa dengan nilai antara " << minNilai << " dan " << maxNilai << " tidak ditemukan." << endl;
        }
    }

    // Destructor untuk membersihkan memori
    ~HashMap() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            for (size_t j = 0; j < table[i].size(); ++j) {
                delete table[i][j];
            }
        }
    }
};
// main programm
int main() {
    HashMap mahasiswa_map;
    int choice;
    string nim, nama;
    double nilai;

    do {
        cout << "Program Untuk Menyimpan Data Mahasiswa Menggunakan Hash Table" << endl;
        cout << "===============================================================" << endl; 
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa\n";
        cout << "3. Cari Mahasiswa Berdasarkan NIM\n";
        cout << "4. Cari Mahasiswa Berdasarkan Rentang Nilai (80 - 90)\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: // input data mahasiswa
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                cout << "Masukkan Nama Mahasiswa: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Nilai Mahasiswa: ";
                cin >> nilai;
                mahasiswa_map.insertData(nim, nama, nilai);
                break;
            case 2: // menghapus data mahasiswa
                cout << "Masukkan NIM Mahasiswa yang akan dihapus: "; // menggunakan NIM
                cin >> nim;
                mahasiswa_map.removeData(nim);
                break;
            case 3: // mencari data mahasiswa menggunakan NIM
                cout << "Masukkan NIM Mahasiswa yang ingin dicari: ";
                cin >> nim;
                mahasiswa_map.searchByNIM(nim);
                break;
            case 4: // mencaru data mahasiswa dengan rentang nilai 80-90
                mahasiswa_map.searchByRange(80.0, 90.0);
                break;
            case 5: // keluar dari menu
                cout << "Thankyou have a nice day!\n";
                break;
            default: // error message jika input angka yang salah
                cout << "Pilihan tidak valid. Masukkan pilihan yang benar.\n";
                break;
        }
    } while (choice != 5);
    
    return 0;
} // akhir dari program
```
#### Output
![Unguided 3 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/a275d2a8-26bb-484c-8572-08a225bd55de)
![Unguided 3 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/1aac5bd5-cc0e-47f7-81a3-ae876cb01fd3)

### Interpretasi: 
kode diatas merupakan program untuk menyimpan data mahasiswa menggunakan hash table. Pertama program akan mendeklarasikan struct `Mahasiswa` untuk menyimpan NIM, nama, dan nilai mahasiswa. Class `HashMap` memiliki ukuran 11.

Terdapat beberapa fungsi dalam `HeasMap` yaitu :
a. `hashFunc(string nim): Fungsi ini digunakan untuk menghitung indeks dari sebuah NIM mahasiswa.
b `insertData(string nim, string nama, double nilai)`: Fungsi ini digunakan untuk menambahkan data mahasiswa ke dalam hash table.
c. `removeData(string nim)`: Fungsi ini digunakan untuk menghapus data mahasiswa dari hash table berdasarkan NIM.
d. `searchByNIM(string nim)`: Fungsi ini digunakan untuk mencari data mahasiswa berdasarkan NIM.
e. `searchByRange(double minNilai, double maxNilai)`: Fungsi ini digunakan untuk mencari data mahasiswa berdasarkan rentang nilai.
f. `Destructor `: Fungsi ini digunakan untuk membersihkan memori yang telah digunakan.

Pada main() function, program akan meminta user untuk memilih menu yang tersedia dengan menginputkan angkanya. Menu yang tersedia adalah:
1. Tambah Data Mahasiswa
2. Hapus Data Mahasiswa
3. Cari Mahasiswa Berdasarkan NIM
4. Cari Mahasiswa Berdasarkan Rentang Nilai (80 - 90)
5. Keluar

- Jika user memilih menu `1`, user akan diminta untuk memasukkan NIM, nama, dan nilai mahasiswa. Data tersebut kemudian akan disimpan ke dalam hash table. 
- Jika user memilih menu `2`, program akan meminta user untuk memasukkan NIM mahasiswa yang akan dihapus. Data tersebut akan dihapus dari hash table. 
- Jika user memilih menu `3`, program akan meminta user untuk memasukkan NIM mahasiswa yang ingin dicari. Data tersebut akan dicari dan ditampilkan ke layar. 
- Jika user memilih menu `4`, program akan mencari data mahasiswa dengan nilai antara 80 dan 90 dan menampilkan data tersebut.
- Jika user memilih menu `5`, program akan keluar dari menu.

Program akan menampilkan pesan "Thankyou have a nice day!" sebelum keluar dari program. Jika user memasukkan pilihan yang salah, program akan menampilkan error message "Pilihan tidak valid. Masukkan pilihan yang benar."

#### Full code Screenshot:
![Fullcode Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9f8631ac-483d-4e19-b8ef-f677a319deb4)


## Kesimpulan
Pada materi kali ini kita mempelajari mengenai Rekursif dan Hash Table. Rekursif sendiri merupakan sebuah teknik di algoritma pemrograman dimana sebuah fungsi memanggil firinya sendiri secara berungkali baik secara langsung maupun tidak 
langsung, mirip seperti perulangan (loop). Pada rekursif masalah akan dipecah menjadi submasalah yang lebih kecil. Kelebihan dari rekursif yaitu penyelesaian masalah yang lebih terstruktur karena masalah akan dibagi menjadi masalah yang lebih kecil lagi, memungkinkan kita untuk mengekspresikan solusi dengan cara yang lebih elegan dan lebih sederhana daripada solusi iteratif, serta mengurangi duplikasi kode. Kekurangan dari rekursif yaitu terletak pada penggunaan memori yang cukup besar (overhead memori) kompleksitas waktu yang tinggi, serta kesulitan dalam debugging dan tracing. Rekursif sendiri terdiri dari 2 jenis yaitu rekursif langsung dimana fungsi memanggil dirinya sendiri secara langsung dan rekursif tidak langsung, dimana  jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain.

Hash table sendiri adalah struktur data yang digunakan untuk menyisipkan, mencari, dan menghapus pasangan nilai kunci dengan cepat. Dimana setiap kunci diterjemahkan oleh fungsi hash menjadi indeks berbeda dalam sebuah array. Indeks berfungsi sebagai lokasi penyimpanan nilai yang cocok. Secara sederhana hash table memetakan kunci dengan nilainya.


## Referensi
[1]S. H. M.T S. Kom and I. W. J. M.Cs S. Kom, Konsep Algoritme dan Aplikasinya dalam Bahasa Pemrograman C++. Penerbit Andi, 2020. Accessed: May 30, 2024. [Online]. Available: https://www.google.co.id/books/edition/Konsep_Algoritme_dan_Aplikasinya_dalam_B/BRQQEAAAQBAJ?hl=id&gbpv=0

[2]I. Irmawati et al., BUKU AJAR PEMROGRAMAN. PT. Sonpedia Publishing Indonesia, 2023. Accessed: May 30, 2024. [Online]. Available: https://www.google.co.id/books/edition/BUKU_AJAR_PEMROGRAMAN/trzlEAAAQBAJ?hl=id&gbpv=1&dq=rekursif+langsung&pg=PA75&printsec=frontcover

[3]  Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications.

[4]A. A. Youztima, “Fungsi Rekursif Dengan C++,” Medium, Jan. 02, 2023. https://medium.com/@anggaalhusaini/fungsi-rekursif-dengan-c-433c9250c73d

[5] Bibliography[1]“Hash Table Data Structure,” GeeksforGeeks, Apr. 24, 2023. https://www.geeksforgeeks.org/hash-table-data-structure/ 
