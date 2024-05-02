# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 5 - Struct dan Implementasi</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
Struct merupakan fitur yang memungkinkan user untuk membuat deklarasi yang di dalamnya dapat terdapat banyak variabel, hasil deklarasi ini akan menghasilkan user-defined data type yaitu tipe structure yang berguna untuk mendirikan object[1].

Berbeda dari array, struct dapat berisi banyak tipe data yang berbeda (int, bool, string, double, dll.). Variabel-variabel yang membentuk suatu struktur ini selanjutnya disebut dengan elemen atau anggota struktur[2]. Elemen ini bisa memiliki panjang maupun tipe data yang berbeda. Variabel ini nantinya memungkinkan kita untuk mengatur dan mengelola data agar lebih terstruktur.

## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
#include<iostream>
#include<string>
using namespace std;
// deklarasi atribut struct Buku
struct Buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
}; Buku buku1, buku2;
// Main program
int main(){
// Memasukkan data buku1 dan buku2
    buku1.judul_buku = "Hunger Games: The Ballad of Songbirds & Snake";
    buku1.pengarang = "Suzanne Collins";
    buku1.penerbit = "Gramedia Pustaka Utama";
    buku1.tebal_halaman = 656;
    buku1.harga_buku = 149000;

    buku2.judul_buku = "Fantastic Beasts And Where To Find Them";
    buku2.pengarang = "J.K. Rowling";
    buku2.penerbit = "Gramedia Pustaka Utama";
    buku2.tebal_halaman = 320;
    buku2.harga_buku = 100000;

// Menampilkan informasi data
    // Buku 1
    cout << "Informasi Buku 1:" << endl;
    cout << "Judul Buku: " << buku1.judul_buku << endl;
    cout << "Pengarang: " << buku1.pengarang << endl;
    cout << "Penerbit: " << buku1.penerbit << endl;
    cout << "Tebal Halaman: " << buku1.tebal_halaman << endl;
    cout << "Harga Buku: " "Rp " <<  buku1.harga_buku << endl;
    cout << endl;
    // Buku 2
    cout << "Informasi Buku 2:" << endl;
    cout << "Judul Buku: " << buku2.judul_buku << endl;
    cout << "Pengarang: " << buku2.pengarang << endl;
    cout << "Penerbit: " << buku2.penerbit << endl;
    cout << "Tebal Halaman: " << buku2.tebal_halaman << endl;
    cout << "Harga Buku: " "Rp " << buku2.harga_buku << endl;
    // Mencetak nama pembuat program
    cout << endl;
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0; 
} // akhir dari main program
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/782430bb-8d53-4943-a0e0-e9b74b433fea)

Kode diatas merupakan program yang menggunakan struct untuk menyimpan informasi tentang 2 buku. Struct `Buku` memiliki atribut/ variabel `judul buku`, `pengarang`, `penerbit`, `tebal halaman`, dan `harga buku`. Lalu program akan mendeklarasikan variabel objek `buku1` dan `buku2` dari `Buku`.

Kemudian program akan memasukkan informasi dari kedua buku kedalam variabel objek. Setiap atribut dari struct diisi dengan nilai yang sesuai dan menggunakan operator `.`. Setelah data dimasukkan program akan mencetak informasi buku dengan menggunakan perintah `cout`. Untuk harga buku dicetak dengan menambahkan string 'Rp' sebelum nilai harga.

#### Full code Screenshot:
![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/a8c69fd5-ac3a-46ae-938e-f3da3df1aaa0)


### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan. 

![Soal Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/58314e2c-9016-4246-87f6-8e0de2ae174c)


```C++
#include<iostream>
#include<string>
using namespace std;

// Mendeklarasikan atribut yang berkaitan dengan hewan
struct Hewan{
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; Hewan info_hewan;

// Mendeklarasikan atribut tambahan khusus hewan darat
struct Hewan_drt{
    Hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
}; 
Hewan_drt hewan1;

// Mendeklarasikan atribut tambahan khusus hewan laut
struct Hewan_lt{
    Hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
Hewan_lt hewan2;

// Main program
int main(){
// Memasukkan data hewan1 dan hewan2
    hewan1.info_hewan.nama_hewan = "Kucing";
    hewan1.info_hewan.jenis_kelamin = "J";
    hewan1.info_hewan.kembangbiak = "Menyusui";
    hewan1.info_hewan.pernafasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = true; 
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";
    
    hewan2.info_hewan.nama_hewan = "Penyu";
    hewan2.info_hewan.jenis_kelamin = "B";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernafasan = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "Sirip dan Ekor";
    hewan2.pertahanan_diri = "Cangkang yang kuat";

// Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama Hewan : " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Pernafasan : "<< hewan1.info_hewan.pernafasan << endl;
    cout << "Tempat Hidup : " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah  Karnivora? : " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah Kaki : " << hewan1.jumlah_kaki << endl; 
    cout << "Apakah Menyusui? : " << hewan1.apakah_menyusui << endl;
    cout << "Suara : " << hewan1.suara << endl;
    cout << endl;

    cout << "\tHewan Laut" << endl;
    cout << "Nama Hewan : " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Kembangbiak : " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Pernafasan : "<< hewan2.info_hewan.pernafasan << endl;
    cout << "Tempat Hidup : " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah  Karnivora? : " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk Sirip : " << hewan2.bentuk_sirip << endl; 
    cout << "Pertahanan Diri : " << hewan2.pertahanan_diri << endl;

// Mencetak nama pembuat program
    cout << endl;
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    
    return 0;
} // akhir dari main program
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b568fd1f-4d29-4d4f-8391-4c6af774dc89)

Pertama program mendeklarasikan atribut yang berkaitan dengan hewan seperti `nama hewan`, `jenis kelamin`, `kembangbiak`, `pernafasan`, `tempat hidup`, dan `apakah hewan tersebut karnivora?` kedalam `struct Hewan`. Lalu program akan mendefinisikan informasi tambahan khusus untuk hewan darat dan laut. Seperti `jumlah kaki`, `apakah hewan tersebut menyusui`, dan `suara yang dihasilkan` untuk hewan darat. Dan `bentuk sirip` dan `mekanisme pertahanan diri` untuk hewan laut.

Setelah itu program akan membuat 2 variabel objek dari masing-masing struct, yaitu `hewan1` dan `hewan2`. Kemudian data akan dimasukkan kedalam variabel-variabel objek menggunakan operator `.` . Setelah data dimasukkan maka program akan mencetak dan menampilkan informasi tentang kedua hewan ke layar menggunakan perintah `cout`. 

#### Full code Screenshot:
![Fullcode Guided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/f4361363-4489-4a90-8cfc-9e6b0723133f)

![Fullcode Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/7725195e-d18a-4210-825b-5b5cbd32e4bb)


## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan. 

```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi atribut struct Buku  
struct Buku {
    string JudulBuku;        
    string pengarang;         
    string penerbit;          
    int TebalHalaman;        
    double HargaBuku;           
};
// Main program
int main() {
    const int JumlahBuku = 5; // ukuran array
    Buku book[JumlahBuku]; // Deklarasi array book dengan tipe Buku

    // Data buku
    string JudulBuku[] = {"Hunger Games: The Ballad of Songbirds & Snake", "Fantastic Beasts And Where To Find Them", "Pulang", "Moby Dick", "Pembunuhan di Nihonbashi (The Newcomer)"};
    string pengarang[] = {"Suzanne Collins", "J.K. Rowling", "Tere Liye", "Herman Melville", "Keigo Higashino"};
    string penerbit[] = {"Gramedia Pustaka Utama", "Gramedia Pustaka Utama", "Sabak Grip Nusantara", "Perseus Distribution", "Gramedia Pustaka Utama"};
    int TebalHalaman[] = {656, 320, 404, 729, 308};
    double HargaBuku[] = {149000, 100000, 89000, 139000, 79000};

    // Mengisi data pada array struct `Buku` 
    for (int i = 0; i < JumlahBuku; ++i) {
        book[i].JudulBuku = JudulBuku[i];
        book[i].pengarang = pengarang[i];
        book[i].penerbit = penerbit[i];
        book[i].TebalHalaman = TebalHalaman[i];
        book[i].HargaBuku = HargaBuku[i];
    }

    // menampilkan informasi buku
    cout << " ===== INFORMASI BUKU =====" << endl;
    for (int i = 0; i < JumlahBuku; ++i) {
        cout << "Buku ke-" << i + 1 << ":" << endl;
        cout << "Judul: " << book[i].JudulBuku << endl;
        cout << "Pengarang: " << book[i].pengarang << endl;
        cout << "Penerbit: " << book[i].penerbit << endl;
        cout << "Tebal Halaman: " << book[i].TebalHalaman << " halaman"<< endl;
        cout << "Harga Buku: Rp " << book[i].HargaBuku << endl;
        cout << endl;
    }
    // Mencetak nama pembuat program
    cout << "By Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
} // akhir dari main program
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/931df8a0-5ab0-4404-b7a3-1a548573c9b4)

### Interpretasi: 
Pertama program akan mendeklarasikan struktur `Buku` yang memiliki 5 array untuk menyimpan informasi tentang judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Lalu program akan mendeklarasikan array `book` dengan tipe `Buku` untuk menyimpan informasi kelima buku yang ukurannya sudah ditentukan oleh `JumlahBuku` yaitu 5. 

Setelah itu program akan memasukkan setiap data buku seperti judul pengarang, penerbit, tebal halaman, dan harga buku kedalam array terpisah untuk setiap atribut.

Selanjutnya, program menggunakan loop `for` untuk memasukkan data buku ke dalam array `book` yang telah dideklarasikan sebelumnya. Lalu program akan menampilkan informasi untuk setiap buku menggunakan loop `for` untuk mengakses setiap elemen array dan mencetak informasinya. Harga buku ditampilkan dalam format mata uang `Rupiah`.

#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/fedf2910-fe86-4764-b547-112d0414f513)


### 2.  Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ? 

-  Jika kita mendeklarasikan struct `Buku` sebagai array maka kita bisa mengisi berapa banyak objek `Buku` dalam satu array. Sehingga memungkinkan untuk menyimpan banyak data dengan tipe data yang sama dalam satu struct. Misalnya, `Buku book[5]` maka akan membuat array `book` yang dapat menyimpan data buku dari 5 buku yang berbeda.

- Pengisian data ke dalam array dapat menggunakan loop `for` untuk memasukkan data buku ke dalam array `book` yang telah dideklarasikan sebelumnya. Dimana pada setiap kali iterasi kita akan diminta untuk memasukkan informasi setiap atribut yang sudah ditentukkan seperti misal pada unguided 1, yaitu judul buku, pengarang, penerbit, tebal halaman, dan harga buku sebanyak array. 

- Untuk menampilkan data dapat digunakan perulangan `loop  for` untuk mengakses setiap elemen array dan mencetak informasinya(atribut-atributnya) menggunakan fungsi `cout`.

## Kesimpulan
Struct merupakan pengelompokkan dari variabel-variabel yang berada dalam satu nama yang sama. Struct memungkinkan kita untuk mengelompokkan data menjadi satu unit. Suatu struktur dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama tetapi berkaitan. Variabel-variabel yang membentuk suatu struktur ini selanjutnya disebut dengan elemen atau anggota struktur. Dengan demikian suatu struktur dimungkinkan dapat berisi dengan elemen-elemen data bertipe int, float, char dan lainnya.


## Referensi
[1] Fajar. (2018), Penjelasan dan Cara Mendirikan Struct [Online]. https://www.belajarcpp.com/tutorial/cpp/struct/ [diakses 2 Mei 2024]. 

[2] T. Uch, “Pemrograman C++ Bab 14 Struct”, pp. 116–121. https://www.academia.edu/35362131/Pemograman_C_Bab_14_Struct_pdf [diakses 2 Mei 2024]. 