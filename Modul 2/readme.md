# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 2 - Array</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
Dalam ilmu komputer, array berfungsi sebagai struktur data untuk penyimpanan elemen yang berdekatan dengan tipe data yang sama. Karena bersifat homogen array hanya  bisa melalukan penggabungan beberapa nilai dengan tipe data yang seragam dalam satu variabel. Setiap jenis array memiliki ketentuan penyimpanan nilai yang berbeda. [1]

### 1. Array Satu Dimensi
Array ini merupakan array yang paling sederhana karena setiap elemen yang diinputkan akan tersimpan secara linear dan dapat dipanggil secara individual dengan memberikan nilai indeksnya. [1]

```C++
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
    cout << arr[1] << endl;
    cout << arr[4];
}
```

### 2. Array Dua Dimensi
Array dua dimensi yaitu suatu kumpulan elemen yang dapat dilakukan penyimpanan secara terurut di suatu tempat yang terbagi menjadi dua 2 unsur yakni baris dan kolom [2].Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.

### 3. Array Multidimensi
Array multidimensi memiliki kesamaan dengan array satu dimensi dan dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array inI digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya.


## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Array
    int arr [2] [3] [3];

    //Input Elemen
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << "Input Array[" << x << "] [" << y << "] [" << z << "] = ";
                cin >> arr [x] [y] [z];
            }
        }
        cout << endl; 
    }
    //Output Array
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << "Data Array[" << x << "] [" << y << "] [" << z << "] = " << arr [x] [y] [z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan Array
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << arr[x] [y] [z] << ' '; // di modul pakai ends tapi gak bisa :D 
            } 
            cout << endl; 
        }
        cout << endl;
    }
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/fd78dd26-8766-4b0e-830f-b5aa891eac6c)
![Guided 1 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/56b2c4a3-6149-4a17-a183-36db99cc02a8)

Kode diatas merupakan program yang digunakan untuk mencetak array 3 dimensi. Pertama membuat variabel `arr` dan mengisi `panjang/ matriks (x)`, `lebar/ kolom (y)`, dan `tinggi/ baris(z)` dengan `[2][3][3]`. Setelah itu akan ada penginputan nilai menggunakan nested looping. Setelah semua nilai dimasukkan maka program akan menampilkan nilai dari setiap elemen yang sudah diinputkan tadi beserta dengan indeksnya. Lalu program akan menggunakan nested loop lagi untuk menampilkan nilai setiap elemen dalam format matriks tiga dimensi.

#### Full code Screenshot:
![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/c3928582-ef08-4522-a07a-338474e4bb1c)


### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main() {
    int maks, a, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    if (a <= 0) {
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; // Return 1 to indicate error
    }

    int array[a];
    cout << "Masukkan " << a << "angka\n";

    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array[i] > maks){
            maks = array[i];
            lokasi = i;
        }
    }

    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi + 1) << endl;

    return 0; // return 0 to indicate successful execution
}
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b05356af-ff01-4511-a46e-5b3849e466ab)

Kode diatas adalah program untuk mencari nilai maksimum/ paling besar dalam sebuah array yang dimasukkan oleh user. Pertama deklarasikan variabel dan tipe datanya. 

User akan diminta untuk memasukkan panjang array yang diinginkan. Panjang array yang dimasukkan oleh user dicek. Jika panjang array kurang dari atau sama dengan 0, program akan menampilkan pesan kesalahan dan mengembalikan nilai 1 untuk menandakan kesalahan. Selanjutnya, program mendeklarasikan array `array` dengan panjang `a` yang telah dimasukkan oleh user. Kemudian, user akan diminta untuk memasukkan nilai untuk setiap elemen array. Program akan menggunakan sebuah loop untuk mencari nilai maksimum dalam array. Setelah nilai maksimum ditemukan, program akan mencetak nilai tersebut.

- Variabel maks >> untuk menyimpan nilai maksimum.
- Variabel lokasi >> untuk menyimpan indeks dimana nilai maksimum ditemukan.

#### Full code Screenshot:
![Fullcode Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/601a5f5b-8bd1-4caa-9bc1-f611ad03e1b8)


## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
![Soal Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/2455552e-f91d-4de2-bd85-ed1335bf6ab9)

```C++
#include <iostream>
using namespace std;

int main(){
    // Mendeklarasikan array dengan 10 elemen
    int data[10];

    // Input Elemen Array
    cout << "Masukkan 10 angka yang diinginkan: ";
    for (int i = 0; i < 10; ++i){
        cin >> data[i];
    }

    // Menampilkan output array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i){
        cout << data[i] << " ";
    }

    // Memisahkan Angka Ganjil dan Genap.

    cout << "\nNomor Genap: ";
    // Menampilkan bilangan genap 
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 == 0){  // jika angka habis dibagi 2 dan hasilnya akhirnya nol.
            cout << data[i] << " ";
        }
    }

    cout << "\nNomor Ganjil: ";
    // Menampilkan bilangan ganjil
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 != 0){ // jika angka tidak habis dibagi 2
            cout << data[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/7b0f03f8-9160-4901-ab63-fadbddb1fe1e)

### Interpretasi: 
Program diatas merupakan sebuah program yang memungkinkan user untuk menginputkan 10 angka kedalam array dan mengelompokkannya menjadi angka ganjil dan genap. 

Pertama program akan mendeklarasikan array `data` dengan 10 elemen bertipe integer. Lalu user akan diminta untuk memasukkan 10 angka yang diinginkan menggunakan looping. Setelah itu program akan menampilkan semua elemen array yang telah diinputkan oleh user dan memisahkannya berdasarkan kategori angka ganjil dan genap.

Untuk bilangan genap menggunakan pengkondisian 'bilangan yang habis dibagi 2'. Sedangkan ganjil menggunakan pengkondisian 'bilangan yang tidak habis dibagi 2'. Terakhir, program akan mencetak bilangan genap dan ganjil yang telah ditemukan


#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/0c43c339-1f88-43bb-9be6-9f2ab3eeacdd)


### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
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
                cout << "Input array[" << i << "] [" << j << "] [" << k <<"] = ";
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

```
#### Output:
![Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b8502226-2d7c-44fd-8beb-7ed2bdc7938a)
![Unguided 2_1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/08322fb8-4af3-40a0-8174-46afd0ae708d)

### Interpretasi :
Kode diatas merupakan program untuk membuat, mengisi dan menampilkan array tiga dimensi berdasarkan ukuran elemen yang dimasukkan user.

Pertama program akan mendeklarasikan variabel `i_size`, `j_size`, `k_size` untuk menyimpan ukuran array. Lalu user akan diminta untuk memasukkan ukuran matriks dalam 3 dimensi yaitu `panjang(i_size)`, `lebar(j_size)`, `tinggi(k_size)`. 

Setelah semua nilai dimasukkan maka program akan menampilkan array tiga dimensi dengan menggunakan `loop` untuk mengakses setiap elemen dalam array. Lalu setiap elemen tersebut akan ditampilkan dengan indeksnya.

Setiap baris matriks direpresentasikan oleh `loop` pertama (`i`), kolom direpresentasikan `loop` kedua (`j`), dan setiap elemen dalam baris matriks direpresentasikan dengan `loop` ketiga (`k`). Lalu program akan menampilkan aray dalam format 3 dimensi.


#### Full code Screenshot:
![Fullcode Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6eb68eb4-d63f-4da1-a35c-fe49dc6b987f)


### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai
 rata– rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream> // input processor directive
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
        case 1: //Jika memilih 1 maka akan mencari nilai maksimum
            cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasiMax << endl;
            break;
        case 2:// jika memilih 2 maka akan mencari nilai minimum
            cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasiMin << endl;
            break;
        case 3: // jika memilih 3 maka akan mencari rata-rata
            // Menghitung rata-rata
            rata = jumlah / a;
            cout << "Nilai rata-ratanya adalah " << rata << endl;
            break;
        case 4:// jika memilih 4 maka akan mengakhiri looping
            cout << "\n Thank you and see u again" << endl; 
            break;
        default: // error message jika menginputkan angka yang tidak sesuai.
            cout << "Pilihan tidak valid." << endl;
            break;
        }
    } while (choices != 0);
    return 0;
}
```
#### Output:
![Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/3e59c006-a67b-4632-b9d1-258ea6a0ee75)

### Interpretasi :
Program diatas merupakan program yang memungkinkan pengguna untuk menginputkan panjang dan elemen array kemudian mencari nilai maksimum, minimum, dan rata-rata sesuai inputan nilai yang mereka berikan.

Mendeklarasi variabel `maks`, `min`, `lokasiMaks`, `lokasiMin`, `rata`, dan `choices`yang bertipe data integer untuk menyimpan nilai tertentu. Lalu user akan diminta untuk memasukkan panjang array (akan disimpan dalam variabel `a`). Lalu program akan mengecek apakah panjang array lebih dari 0. Program akan mendeklarasikan array dengan panjang `a` yang telah diinputkan user selain itu program juga akan menghitung total jumlah elemen array selama proses berlangsung yang nantinya digunakan untuk mencari nilai maksimum, minimum, dan rata-rata.

Struktur `switch-case` digunakan untuk menentukan tindakan yang akan dilakukan oleh program sesuai dengan pilihan pengguna. 

- Jika mencari nilai maksimum >> program akan mencetak nilai maksimum dan lokasinya dalam array
- Jika mencari nilai minimum >> program akan mencetak nilai maksimum dan lokasinya dalam array
- Jika mencari nilai rata-rata >> program akan mencetak nilai rata-rata

#### Full code Screenshot:
![Fullcode Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/4aa4b298-d37d-4f08-9294-735a49676659)

## Kesimpulan
Ada 3 Jenis Array, yaitu satu dimensi yang mana merupakan jenis array paling sederhana dan dikenal karena kemudahan penggunaan dan definisinya dalam pemrograman. Lalu ada array dua dimensi yaitu suatu kumpulan elemen yang dapat dilakukan penyimpanan secara terurut di suatu tempat yang terbagi menjadi dua 2 unsur yakni baris dan kolom. dan terakhir ada multidimensi yang digunakan untuk digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya.

Lalu pada modul 2 unguided kita belajar bagaimana implementasi dari array tiga dimensi menggunakan fungsi input, memisahkan atau mengkategorikan nilai array berdasarkan dengan angka ganjil atau angka genap, dan membuat program menu untuk mencari nilai maksimum, minimum, dan rata-rata dari suatu array dengan menggunakan fungsi inputan.

## Referensi
[1] K, Ankit. (2023), One-Dimensional Array [Online]. diakses dari https://www.prepbytes.com/blog/arrays/one-dimensional-array/

[2] Zein, A. dan Eriana, E.S., Algoritma dan Struktur Data. Edisi Pertama. Tangerang Selatan : Unpam Press, 2022.
