# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 3 - Sorting</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
Algoritma sorting adalah suatu metode atau teknik untuk mengurutkan data atau elemen-elemen dalam suatu struktur data, biasanya array secara teratur. Algoritma sorting merupakan salah satu konsep penting dalam pemrograman, tujuannya untuk mengubah data yang tidak teratur menjadi urutan yang teratur, misalnya dari data yang tidak terurut menjadi data yang terurut menaik atau menurun[1]. Berikut beberapa jenis algoritma sorting : 

### 1. Insertion Sort
Insertion Sort merupakan sebuah teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Algoritma insertion sort seperti proses pengurutan kartu yang berada di tangan kita[2][3]. 

![Ilustrasi Insertion Sort](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/36b8b221-a102-44ee-aba0-5f2cf7b2d771)

Insertion sort memiliki kode program sebagai berikut :
```C++
void insertion_sort(int arr[], int length) { 
    int i, j ,tmp; 
    for (i = 1; i < length; i++) { 
        j = i; while (j > 0 && arr[j - 1] > arr[j]) { 
            tmp = arr[j]; 
            arr[j] = arr[j - 1]; 
            arr[j - 1] = tmp; 
            j--; 
        }//end of while loop 
    }//end of for loop 
} 
```

### 2. Selection Sort Sort
Selection sort merupakan sebuah teknik pengurutan dengan cara mencari nilai tertinggi / terendah di dalam array kemudian menempatkan nilai tersebut di tempat semestinya. Algorithma ini dapat mengurutkan data dari besar ke kecil (Ascending) dan kecil ke besar (Descending). Algoritma ini tidak cocok untuk set data dengan jumlah besar karena kompleksitas dari algoritma ini adalah Ο(n^2) di mana n adalah jumlah item.[4]

![Ilustrasi Selection Sort](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/fbcc2506-2443-48d0-8297-998e0eb42f16)

```C++
void selectSort(int arr[], int n) {     
    int pos_min,temp;  
    for (int i=0; i < n-1; i++) {      
        pos_min = i;   
            for (int j=i+1; j < n; j++) {             
                if (arr[j] < arr[pos_min]) {
                    pos_min=j;
                }                   
            } 

        if (pos_min != i) {             
            temp = arr[i];             
            arr[i] = arr[pos_min];             
            arr[pos_min] = temp;         
        }  
    } 
} 
```

### 3. Bubble Sort
Bubble Sort merupakan algoritma pengurutan data dengan cara membandingkan elemen sekarang dengan elemen berikutnya, jika elemen sekarang lebih besar/kecil dari elemen berikutnya maka akan dilakukan penukaran posisi(index), jika tidak maka tidak perlu menukar posisi(index) datanya. Metode ini akan terus dilakukan oleh algoritma ini hingga tidak ada lagi data yang belum sesuai urutannya. [5]

![Simulasi Bubble Sort](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e42f3035-08c7-472d-b523-a66d35984f3d)

```C++
void bubble_sort(int arr[], int length){     
    bool not_sorted = true;     
    int j=0,tmp;          
    while (not_sorted){         
        not_sorted = false;         
        j++;         
        for (int i = 0; i < length - j; i++){             
            if (arr[i] > arr[i + 1]) { 
                 tmp = arr[i];                 
                 arr[i] = arr[i + 1];                 
                 arr[i + 1] = tmp;                 
                 not_sorted = true;             
            }//end of if         
        }//end of for loop   
    }//end of while loop  
}//end of bubble_sort 
```

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

// fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubble_sort(double arr[], int length){
    bool not_sorted =true;
    int j = 0;
    double tmp;

    // melakukan pengurutan hingga array sudah teurut
    while(not_sorted){
        not_sorted = false;
        j++;

        // membandingkan dan menukar eleman
        for (int i = 0; i < length - j; i++){
            if(arr[i] > arr[i+1]){
                //menukar elemen
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;

                // set not_sorted ke true karena ada perubahan posisi elemen
                not_sorted = true;

            } // end of if
        } // end of for loop
    } // end of while loop
} // end of bubble sort

// fungsi untuk mencetak isi array
void print_array(double a[], int length){
    for(int i=0; i<length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

// Main programm
int main(){
    int length = 6; // jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99,99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
    
    // memanggil fungsi bubble sort untuk mengurutkan array
    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/f8d97a81-1513-49dc-883e-5bd972a6e406)

Kode diatas merupakan program untuk mengurutkan data numerik bertipe double secara ascending menggunakan Algoritma Bubble Sort. 

Pertama program akan mendeklarasikan array bilangan pecahan yang diinisiasi dengan panjang 6 dan nilai-nilai yang sudah ditentukan. Kemudian array tersebut akan dicetak sebelum di sorting. Lalu program akan memanggil fungsi `bubble_sort`untuk mengurutkan array menggunakan algoritma Bubble Sort dengan cara membandingkan pasangan-pasangan elemen berurutan dan menukarnya jika perlu, sehingga elemen yang lebih besar bergerak ke arah akhir array. Setelah array diurutkan hasilnya akan dicetak kembali.

#### Full code Screenshot:
![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/7477d8fa-aa59-440c-bad4-776cc37be296)

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort 

```C++
#include <iostream>
using namespace std;

//fungsi untuk mengurutkan array secara descending menggunakan algortima insertion sort
void insertion_sort(char arr[], int length){
    int i, j;
    char tmp;

    for (i=1; i < length; i++){
        j=i;

        // membandingkan dan menukar elemen
        while (j > 0 && arr[j-1] < arr[j]){ //perubahan terjadi disini
            // Menukar elemen
            tmp = arr[j]; // variabel kosong untuk menyimpan data sementara
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
} // end of insertion sort

// Fungsi untuk mencetak isi array
void print_array(char a[], int length){
    for(int i=0; i<length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

// Main programm
int main(){
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    print_array(a, length);

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
    
    // Memanggil fungsi insertion sort untuk mengurutkan array secara descending
    insertion_sort(a, length);

    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);

    return 0;
} // end of main programm
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/02f1ded6-c811-4f1f-a1a6-7d000a6f9f85)

Kode diatas merupakan program untuk mengurutkan array karakter dengan tipe data `string` secara descending menggunakan algoritma insertion sort.

Pertama membuat variabel `arr` dan `tmp`  yang bertipe data char. Lalu variabel `length` `i` `j` bertipe data integer.

Array karakter dideklarasikan panjang dan isi karakternya. Lalu program akan memanggil fungsi `insertion_sort`  untuk mengurutkan array karakter secara descending menggunakan algoritma Insertion Sort. Algoritma ini akan membandingkan setiap elemen dengan elemen sebelumnya dan menukarnya jika diperlukan agar array menjadi terurut secara descending. Setelah diurutkan maka hasilnya akan ditampilkan. 

#### Full code Screenshot:
![Fullcode Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b6c9b06c-5374-443a-a7d4-b89ff42e9e62)


## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara descending menggunakan algoritma selection sort
void selection_sort(float arr[], int n){
    int pos_max;
    float tmp;

    for (int i = 0; i < n - 1; i++){
        pos_max = i;

        // Membandingkan dan menukar elemen
        for (int j = i +1; j < n ; j++){
            if (arr[j] > arr[pos_max]){
                pos_max = j;
            }
        } 

        //Menukar angka jika posisi maximum bukan di posisi saat ini
        if (pos_max != i){
            // Menukar elemen
            tmp = arr[i];
            arr[i] = arr[pos_max];
            arr[pos_max] = tmp;
            i--;
        } // end of if loop
    } // end of for loop
} // end of selection short

// Fungsi untuk mencetak isi array
void print_array(float arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Main programm
int main(){
    // Deklarasi array dan panjang elemen dalam array 
    int n = 5;
    float arr[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    // Menampilkan array sebelum diurutkan secara descending
    cout << "Urutan angka sebelum sorting secara descending: " << endl;
    print_array(arr, n);

    // Memanggil fungsi selection sort untuk mengurutkan array secara descending
    selection_sort(arr, n);

    // Menampilkan array setelah diurutkan secara descending
    cout << "Urutan angka setelah sorting secara descending: " << endl;
    print_array(arr, n);

    return 0;
} // end of main programm
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/8137822e-75d5-4d71-856c-b5717173e9ca)

### Interpretasi: 
Kode diatas merupakan sebuah program untuk mengurutkan IPS mahasiswa secara descending dari nilai terbesar ke terkecil menggunakan algoritma selection sort. 

Pertama program akan mendeklarasikan array `arr` dan variabel `tmp` yang digunakan untuk menyimpan nilai sementara bertipe float. `n` sebagai panjang elemen dan `pos_max` sebagai posisi nilai maksimum bertipe integer. 

Lalu program akan memproses array `arr` yang sudah dideklarasikan serta berisi angka desimal yang belum terurut yaitu `{3.8, 2.9, 3.3, 4.0, 2.4}` beserta panjangnya `n` yang sudah diberikan.   

Program akan mulai dengan array yang belum terurut. Lalu melalui fungsi `selection_sort` program akan memilih elemen terbesar (max) dari array yang belum diurutkan pada setiap iterasi dan menukarnya dengan elemen pertama dari sisa array yang belum diurutkan. Begitu seterusnya sampai semua angka dalam array sudah terurut.

Setelah itu program akan mengurutkannya secara descending, dan mencetak array tersebut sebelum dan setelah diurutkan.

#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/f4c712ae-edfb-4ce3-b635-91ab628bf7f8)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! 

```C++
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
```
#### Output:
![Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/ec95a518-1e84-405b-b8cd-5e41d4e31819)

### Interpretasi :
Kode diatas merupakan sebuah program untuk mengurutkan nama warga secara ascending, urut abjad menggunakan algoritma bubble sort. 

Pertama program akan mendeklarasikan variabel array `arr` dan `tmp` yang digunakan untuk menyimpan nilai sementara bertipe data string. Sebuah variabel boolean `not_sorted` digunakan untuk menandai apakah array masih belum terurut. Pada awalnya, nilai variabel ini diatur sebagai `true` agar program dapat masuk ke dalam loop pengurutan. Lalu variabel `j` yang digunakan sebagai penanda iterasi dalam algoritma bubble sort bertipe integer.

Program akan mendeklarasikan array `arr` yang berisi nama warga yang belum diurutkan sesuai abjad beserta panjangnya (`length`) yang telah diberikan. 

Program akan melakukan pengurutan dengan algoritma Bubble Sort dalam `loop while`. Loop ini akan berjalan hingga `not_sorted` bernilai `false`, yang berarti array sudah terurut.

Pada setiap iterasi, program akan membandingkan dua elemen dalam array berturut-turut. Jika elemen pertama lebih besar dari elemen kedua, maka keduanya akan ditukar. Ini dilakukan dengan menyimpan nilai elemen pertama ke dalam `tmp`, mengganti nilai elemen pertama dengan nilai elemen kedua, dan mengganti nilai elemen kedua dengan nilai `tmp`. Setelah pertukaran dilakukan, variabel `not_sorted` diatur kembali ke `true` untuk menandai bahwa masih ada perubahan yang dibuat dalam pengurutan. Proses ini akan berulang sampai seluruh nama dalam array sudah terurut secara ascending

Program kemudian mencetak array tersebut sebelum diurutkan, memanggil fungsi `bubble_sort` untuk mengurutkannya secara ascending. Setelah selesai diurutkan program akan menampilkan nama warga yang sudah diurutkan sesuai abjad.

#### Full code Screenshot:
![Fullcode Unguided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9bbf1b59-712e-41c5-8e88-673abf27fd86)

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! 

![Soal Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/5dac39a3-1028-4252-9bf8-6074127c73a3)

```C++
#include <iostream> // input processor directive
using namespace std;

//fungsi untuk mengurutkan array secara ASCENDING menggunakan algortima insertion sort
void insertion_sort_ascending(char arr[], int length){
    int i, j;
    char tmp;

    for (i=1; i < length; i++){
        j=i;
        // membandingkan dan menukar elemen
        while (j > 0 && arr[j-1] > arr[j]){ //perubahan terjadi disini
            // Menukar elemen
            tmp = arr[j]; // variabel kosong untuk menyimpan data sementara
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
} // end of insertion sort ascending

//fungsi untuk mengurutkan array secara DESCENDING menggunakan algortima insertion sort
void insertion_sort_descending(char arr[], int length){
    int i, j;
    char tmp;

    for (i=1; i < length; i++){
        j=i;

        // membandingkan dan menukar elemen
        while (j > 0 && arr[j-1] < arr[j]){ //perubahan terjadi disini
            // Menukar elemen
            tmp = arr[j]; // variabel kosong untuk menyimpan data sementara
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
} // end of insertion sort descending

// Fungsi untuk mencetak isi array
void print_array(char a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
} 

// Main Programm
int main(){
    // Meminta user untuk menginputkan panjang array
    int length;
    cout << "Masukkan jumlah karakter yang ingin di input: ";
    cin >> length;

    char a[length]; // Membuat array 'a' dengan panjang sesuai dengan jumlah karakter yang diinputkan user

    // Meminta user untuk memasukkan karakter sebanyak 'length' 
    cout << "Masukkan " << length << " karakter: ";
    for (int i = 0; i < length; i++){
        cin >> a[i];
    } 

    // Menampilkan array sebelum diurutkan secara descending
    cout << "Urutan nama sebelum sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion sort untuk mengurutkan array secara ASCENDING
    insertion_sort_ascending(a, length);

    // Menampilkan array setelah diurutkan secara ascending
    cout << "Urutan nama setelah ascending sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion sort untuk mengurutkan array secara DESCENDING
    insertion_sort_descending(a,length);

    // Menampilkan array setelah diurutkan secara descending
    cout << "Urutan nama setelah descending sorting: " << endl;
    print_array(a, length);
}
```
#### Output:
![Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/5501d3e9-e2ed-4ef0-853c-f0e64817ae23)

### Interpretasi :
Kode diatas merupakan sebuah program untuk mengurutkan array karakter (string) baik secara ascending maupun descending menggunakan algortima insertion sort.

Pertama program akan mendeklarasikan variabel array `arr` dan `tmp` bertipe character. Variabel `i` sebagai indeks untuk iterasi dan `j` sebagai indeks untuk membandingkan dan memindahkan elemen memiliki tipe data integer. 

Lalu program akan meminta user untuk menginputkan panjang array dan karakter-karakternya. Setelah itu program akan menampilkan array sebelum diurutkan dan memanggil fungsi `insertion_sort_ascending` untuk mengurutkan array secara ascending. Pada setiap iterasi, elemen pada indeks `i` dibandingkan dengan elemen sebelumnya pada indeks `j`. Jika elemen sebelumnya lebih besar dari elemen saat ini, kedua elemen tersebut ditukar posisinya. Proses ini diulangi untuk setiap elemen dalam array. Lalu program akan menampilkan hasilnya.

Setelah itu program akan memanggil Fungsi `insertion_sort_descending` mirip dengan `insertion_sort_ascending`, tetapi perbandingannya dibalik sehingga menghasilkan urutan descending. Kemudian hasil array setelah diurutkan secara descending akan ditampilkan.

#### Full code Screenshot:
![Fullcode Unguided 3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9dc9418b-e87f-4fa8-bd37-6193bf9b9450)

## Kesimpulan
Ada beberapa tipe algoritma sorting yaitu insertion sort yang merupakan algoritma sorting yang bekerja dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Lalu ada selection sort yang bekerja dengan cara mencari nilai tertinggi / terendah di dalam array kemudian menempatkan nilai tersebut di tempat semestinya. Terakhir ada bubble sort yang merupakan metode pengurutan algoritma dengan cara melakukan penukaran data secara terus menerus sampai bisa dipastikan dalam suatu iterasi tertentu tidak ada lagi perubahan/penukaran.

Pada unguided 3 ini kita belajar bagaimana implementasi dari algoritma sorting untuk mengurutkan nilai array secara ascending menggunakan algoritma Selection Sort, mengurutkan nama sesuai abjad menggunakan algoritma bubble sort, dan mengurutkan karakter secara ascending lalu descending menggunakan fungsi inputan.

## Referensi
[1] Annisa. (2023), Pengertian Algoritma Sorting (Pengurutan) Dalam Pemrograman [Online]. https://fikti.umsu.ac.id/pengertian-algoritma-sorting-pengurutan-dalam-pemrograman/ [diakses 7 April 2024].

[2] R. Maulid. (2021), Mengenal Algoritma Sorting Pada Algoritma Python [Online]. https://dqlab.id/mengenal-algoritma-sorting-pada-algoritma-python [diakses 7 April 2024].

[4] F. Tanzil. (2019), Selection Sort [Online].https://socs.binus.ac.id/2019/12/26/selection-sort/ [diakses 7 April 2024].

[3] Geeks for Geeks. (2024), Insertion Sort – Data Structure and Algorithm Tutorials [Online]. https://www.geeksforgeeks.org/insertion-sort/ [diakses 7 April 2024].

[5] D. R. Poetra, and N. Hayati, “Performa Algoritma Bubble Sort dan Quick Sort pada Framework Flutter dan Dart SDK(Studi Kasus Aplikasi E-Commerce),” JATISI (Jurnal Tek. Inform. dan Sist. Informasi), vol. 9, no. 2, pp. 806–816, 2022, doi: 10.35957/jatisi.v9i2.1886.