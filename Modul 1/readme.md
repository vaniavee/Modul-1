# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data/h1>
# <h1 align="center">Modul Tipe Data</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori

Tipe data adalah suatu memori atau media pada komputer yang digunakan untuk menampung informasi atau data sementara [3]. Dalam C++, terdapat 3 tipe data yang dijelaskan yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi.

### 1. Tipe Data Primitif
Sama seperti namanya, tipe data primitif ini sendiri merupakan tipe data sederhana yang bawaan dari sistem dan sudah tersedia dalam bahasa pemrograman. Pada tipe ini, data yang bisa dijangkau relatif sedikit dan memiliki tingkat kerumitan rendah. Meskipun demikian, tipe data ini bisa menyimpan satu nilai seperti digit, byte, atau karakter. [3] Macam tipe data primitif:

- Int adalah tipe data yang digunakan untuk menyimpan bilangan bulat seperti 23, 17, 2, dan sebagainya
- Float adalah tipe data yang digunakan untuk menyimpan bilangan desimal seperti 7.8, 2.6, 3.14, dan sebagainya
- Char berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya digunakan untuk simbol seperti A, B, C dan seterusnya
- Bool tipe data ini digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false

### 2. Tipe Data Abstrak
Tipe data abstrak atau yang biasa disebut Abstrak Data Tipe(ADT) merupakan tipe data yang dibentuk oleh programer itu sendiri, sehingga lebih beragam dan nilainya lebih dari satu. 
- Fitur Class adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota. Menurut learn.microsoft.com perbedaan antara Struct dan Class adalah pada akses defaultnya dimana Struct bersifat public dan Class bersifat private.

### 3. Tipe Data Koleksi
Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Berbeda dengan tipe data primitif, pada tipe ini dapat mengelola data yang memerlukan tingkat pengelolaan rumit.Sehingga tipe data koleksi memungkinkan kita untuk  menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur. 

Ada beberapa tipe data koleksi yang umum digunakan dalam pemrograman, dan di antaranya adalah:
- Array adalah struktur data statis yang menyimpan elemen-elemen dengan tipe data yang sama. Elemen-elemen tersebut dapat diakses dengan menggunakan indeks. Array memiliki ukuran tetap yang ditentukan saat deklarasi.
- Vector adalah Standard Template Library (STL) jika di dalam C/C++ memiliki bentuk std::vector . Umumnya, vector mirip seperti array yang memiliki kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan. Kemampuan vector bukan hanya pada jumlah elemen yang dinamis, vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers.
- Map terasa mirip dengan array namun dengan index yang memungkinkan untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree. Selain itu map juga sering digunakan untuk pencarian cepat berdasarkan kunci.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;

// Main program
int main()
{
    char op; // op : operator
    float num1, num2; // operan/bil. yg akan digunakan

    // Memungkinkan user untuk memasukkan operan exp: +, -, * /
    cout << "Masukkan operator: ";
    cin >> op;
    cout <<"\n Masukkan Bilangan ke-1 dan ke-2: ";
    cin >> num1 >> num2;

    switch(op) // pengkondisian untuk memilih case yg akan dijalankan
    {
    case '+': // if user enter +
        cout << num1 + num2;
        break;
    case '-': // if user enter -
        cout << num1 - num2;
        break;
    case '*': // if user enter *
        cout << num1*num2;
        break;
    case '/': // if user enter /
        cout << num1/num2;
        break;
    default: // jika tdk ada kondisi yg terpenuhi
        cout << "Error! Operator is not correct";
    } // switch statement ends
return 0;
}
```
### Output :
![Screenshot 2024-03-21 181358](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/c316f116-9870-4188-b951-c87e272d7d48)

Kode diatas merupakan program untuk menampilkan kalkulator sederhana (penjumlahan, pengurangan, perkalian, dan pembagian).

Variabel `op` adalah variabel bertipe `char` yang dapat dimasukkan satu karakter.
Variabel `num1, num2` adalah varibel bertipe data float (angka, bisa desimal) dan berisi operan/bilangan yang akan digunakan.

Setelah menginputkan operator maka user akan diminta untuk memasukkan angka pertama dan angka kedua.Lalu program akan menjalankannya sesuai dengan inputan user.

Program ini menggunakan `switch-case` untuk menjalankan operasinya. `Switch` dan `case` digunakan untuk pengambilan keputusan. Program akan menjalankan kode sesuai dengan inputan operator yang dimasukkan. Kemudian jika user menginputkan tidak sesuai dengan operator yang sudah ditentukan, maka program akan menampilkan pesan error.

### 2. Tipe Data Abstrak

```C++
#include <iostream>
#include <stdio.h>
using namespace std;
struct Mahasiswa{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2; // menulis nama struct untuk dipanggil nanti
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // Mencetak isi struct
    cout << "Mahasiswa 1\n";
    cout << "Nama: " << mhs1.name << endl;
    cout << "Alamat: " << mhs1.address << endl;
    cout << "Umur: " << mhs1.age << endl;
    cout << "\nMahasiswa 2\n";
    cout << "Nama: " << mhs2.name << endl;
    cout << "Alamat: " << mhs2.address << endl;
    cout << "Umur: " << mhs2.age << endl;
    return 0;
}
```
## Output :
![Screenshot 2024-03-21 181555](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/a89c37f7-ccf1-414e-b5e3-9191c580ca14)

Program diatas menggunakan struktur `struct` bernama `Mahasiswa` yang memuat tiga nilai yaitu `name` dan `address` yang bertipe data character, dan `age` yang bertipe data integer. 

Nilai `name` dan `address` dideklarasikan sebagai `const`, agar tidak dapat diubah setelah diberikan nilai awal.
Dalam program ini kita membuat dua variabel yang bertipe data struct `Mahasiswa`, yaitu `mhs1` dan `mhs2`. Setelah itu kita tinggal mengisi data tersebut ke masing-masing variabel dan memanggilnya menggunakan fungsi `cout`.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;
int main()
{
    // deklarasi dan inisiasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Output :
![Screenshot 2024-03-21 181714](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/29ebc21f-4652-47be-9ed8-621e10b19d37)

Kode diatas adalah contoh penggunaan tipe data koleksi yaitu array. Pertama kita mendeklarasikan dan menginialiasikan array `nilai` yang bertipe data integer dan memiliki panjang 5. 

Untuk mengisi nilai ke dalam array dapat dengan cara menentukan indeks nya, seperti `nilai[2]` dst dan mengisinya denngan nilai yang sesuai. Setelah semua elemen dalam array terisi, kita bisa menampilkan 

Lalu kita bisa mengisikan data ke dalam variabel `nilai`, seperti `nilai[0]` atau elemen pertama dalam array kita isi dengan angka 23, lalu untuk elemen ke dua kita isi dengan angka 50, untuk elemen ketiga kita isi dengan angka 34, untuk elemen keempat kita isi dengan angka 78, dan elemen ke lima kita isi dengan angka 90. Setelah kita selesai mengisikan nilai ke setiap elemen dalam array, nilai dapat ditampilkan menggunakan fungsi `cout`.


## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung Volume Prisma Segitiga
float HitungVolumePrisma(float alas, float tinggi, float tinggiPrisma){
    return ((alas * tinggi)/2 * tinggiPrisma);
} 

// Fungsi untuk menghitung Keliling Prisma Segitiga
float HitungLuasAlasPrisma(float alas, float tinggi){
    return (alas*tinggi/2);
}

// Main Program
int main(){
    int PilihanMenu;
    float alas, tinggi, tinggiPrisma; // operator yang akan digunakan

    // Halaman menu untuk memilih menu yang ingin digunakan
    cout << "\n =====Pilih yang mau dihitung=====:\n";
    cout << "1. Hitung Volume Prisma Segitiga\n";
    cout << "2. Hitung Luas Alas Prisma Segitiga\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihanMenu;

    // Memilih case yang akan dijalankan
    switch(PilihanMenu){
        case 1:
            cout << "Masukkan alas:"; // menginputkan panjang alas dalam cm
            cin >> alas;
            cout << "Masukkan tinggi: "; // menginputkan tinggi segitiga dalam cm
            cin >> tinggi;
            cout << "Masukkan tinggi prisma: "; // menginputkan tinggi prisma dalam cm
            cin >> tinggiPrisma;
            // Mencetak Output
            cout << "Volume Prisma Segitiga adalah: " << HitungVolumePrisma(alas, tinggi, tinggiPrisma) << endl;
            break;
        case 2:
            cout << "Masukkan alas:"; // menginputkan panjang alas dalam cm
            cin >> alas;
            cout << "Masukkan tinggi: "; // menginputkan tinggi segitiga dalam cm
            cin >> tinggi;
            // Mencetak Output
            cout << "Luas Alas Prisma Segitiga adalah: " << HitungLuasAlasPrisma(alas, tinggi) << endl;
            break;
        default: // jika tidak ada kondisi yg terpenuhi, error message jika menginputkan selain angka 1 dan 2
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0; // end of main function
}
```
#### Output:
![Screenshot 2024-03-21 141404](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/4c5f6619-ae09-4db1-a6ff-f38f94132e2a)

Kode tersebut merupakan program untuk menghitung volume dan luar alas prisma segitiga. Pertama kita mendeklarasikan variabel yang akan digunakan untuk memilih menu, menginputkan panjang alas-tinggi-tinggi prisma dalam cm, dan menampilkan volume dan luar alas prisma. Untuk variabel `PilihanMenu` menggunakan tipe data integer. `alas`, `tinggi`, dan `tinggi prisma` yang digunakan untuk menginputkan panjang dalam cm memakai tipe data float. 

Buat fungsi dengan variabel `HitungVolumePrisma` dan memiliki parameter alas, tinggi, dan tinggi prisma yang bertipe data float. Ketika fungsi tersebut dipanggil maka akan mengembalikan rumus dari Volume Prisma Segitiga yaitu ((alas*tinggi)/2 * tinggi prisma).

Membuat fungsi dengan variabel `HitungLuasAlasPrisma` serta memiliki parameter alas dan tinggi. Lalu ketika fungsi tersebut dipanggil maka akan menggembalikan rumus dari Luas Alas Prisma Segitiga yaitu (alas*tinggi/2).

Main Program `PilihanMenu` digunakan untuk menentukan apakah ingin menghitung volume prisma segitiga atau luas alas prisma segitiga.

Kesimpulan dari materi tipe data primitif ini adalah tipe data ini merupakan tipe data bawaan yang tersedia secara langsung pada bahasa pemrograman

tipe data ini merupakan tipe data yang sederhana, karena tipe data ini merupakan tipe data bawaan dari bahasa pemrograman. Tipe data ini bisa menyimpan niali seperti digit, byte, ataupun karakter. Namun, tipe data primitif tidak bisa menjangkau data kompleks yang memiliki tingkat kerumitan tinggi.

#### Full code Screenshot:
![Screenshot 2024-03-21 142644](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/de3d07e0-79c4-4ccf-867a-6a16718bd4bb)

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
using namespace std;

struct Film { // Membuat struct film
    string judul; // Berisi variabel judul yang bertipe data string
    string genre;
    int tahun_terbit; // dan variabel tahun terbit yang bertipe data int
};

class Film_favorit { // Membuat class film favorit
    public: 
    string pengarang; // Berisi variabel pengarang yang bertipe data string
    string actor; // variabel actor bertipe data string
    string peran; // variabel peran bertipe data string
};

// Main Program
int main() { 
    struct Film film_1; // menulis nama struct untuk dipanggil nanti
    
    // Mengisi nilai kedalam struct
    film_1.judul = "Percy Jackson and The Olympians";
    film_1.genre = "Adventure";
    film_1.tahun_terbit = 2010;

    // Mencetak isi struct film 1
    cout << "=====STRUCK=====";
    cout << "\nJudul: " << film_1.judul;
    cout << "\nGenre: " << film_1.genre;
    cout << "\nTahun Terbit: " << film_1.tahun_terbit << endl;

    // Memanggil class Film favorti
    Film_favorit film_2;

    // Memasukkan data kedalam class
    film_2.pengarang = "J.K Rowling";
    film_2.actor = "Tom Felton";
    film_2.peran = "Draco Malfoy";
    
    // Menampilkan data class yang sudah dimasukkan
    cout << "=====CLASS=====";
    cout << "\nPengarang: " << film_2.pengarang;
    cout << "\nActor: " << film_2.actor;
    cout << "\nPeran " << film_2.peran;

    return 0;
}
```
#### Output:
![Screenshot 2024-03-21 141644](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/04b61816-cada-4523-b471-3a451e63b204)

Struct mirip dengan class. Keduanya sama – sama mengelompokkan data dan fungsi. Perbedaan antara keduanya, yaitu: default member access struct adalah public ini memungkinkannya untuk dapat diakses dimana saja sedangkan default member access class adalah private, struct tidak dapat digunakan sebagai parent di pewarisan sedangkan class dapat digunakan sebagai parent di pewarisan dan masih banyak lagi. [2].

Program diatas mengandung tipe data `struct` dengan variabel `Film`. Di dalam variabel `Film`, terdapat variabel `judul` dan `genre` yang mempunyai tipe data string dan `tahun` yang bertipe data integer. Lalu kita membuat `class` dengan variabel `Film_favorit` yang berisikan variabel `judul`, `actor`, dan `peran` yang bertipe data string dengan akses public. Lalu kita masukkan nilainya pada main program dengan cara membuat variabel baru yang dinamakan `film_1` untuk memasukkan data pada struct dan `film_2` untuk variabel untuk memasukan data ke dalam `class`. Setelah dimasukan kita bisa menampilkannya menggunakan variabel `cout`.

#### Full code Screenshot:
![Screenshot 2024-03-21 142353](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/696987d2-a383-4ce0-a05c-1fc5c2120656)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
#include <iostream> // input processor directive
#include <map> // input map
using namespace std;

// Main Program
int main() {
    map <int, string> cast; // membuat map dengan key int dan bertipe data string

    // Menginputkan cast
    cast[0] = "Harry Potter";
    cast[1] = "Hermione Granger";
    cast[2] = "Ron Weasley";
    cast[3] = "Draco Malfoy";
    cast[4] ="Sirius Black" ;

    // Menampilkan cast yang sudah dibuat
    cout << "=======CAST LIST======" << endl;
    cout << "Cast Pertama: " << cast[0] << endl;
    cout << "Cast Kedua: " << cast[1] << endl;
    cout << "Cast Ketiga: " << cast[2] << endl;
    cout << "Cast Keempat: " << cast[3] << endl;
    cout << "Cast Kelima: " << cast[4] << endl;

    return 0;
}
```
#### Output:
![Screenshot 2024-03-21 141849](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/2328ad00-e833-4300-aaf2-0a7513e3a55b)

Pada program diatas kita menggunakan fungsi map. Pertama kita deklarasikan dulu map nya dengan menggunakan `#include <map>`, lalu pada main program kita menggunakan fungsi map dengan menginputkan `<int, string> character`. Code tersebut digunakan untuk membuat map dengan key int yang bertipe data string dengan nama variabel `cast`. Lalu kita tinggal menambahkan datanya ke dalam variabel `cast` dan menampilkannya menggunakan fungsi `cout`.

Perbedaan antara map dan array adalah array digunakan untuk menyelesaikan masalah matriks, mudah dalam menerapkan algoritma sorting karena data yang diinputkan tidak harus urut seperti dalam array yang membuat map lebih fleksibel, penjadwalan CPU, diterapkan sebagai tabel pencarian di komputer. Map digunakan ketika kita ingin menghasilkan array baru berdasarkan array asli.

#### Full code Screenshot:
![Screenshot 2024-03-21 142831](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/bca5ada8-4f0d-4f9b-ba55-140b02d88298) 

## Kesimpulan
Dalam modul 1 guided ini ada beberapa jenis tipe data yang digunakan dalam bahasa C++, yaitu tipe data primitif, abstrak, dan koleksi. Pada tipe data primitif, tipe data yang ada sudah ditentukan oleh sistem/ bawaan yang tersedia secara langsung oleh bahasa pemrograman itu sendiri. Untuk tipe data abstrak karena ia dibentuk oleh programer itu sendiri sehingga nilainya beragam dan dapat berasal dari banyak tipe data. Lalu untuk tipe data koleksi sendiri biasanya digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan.

Lalu pada modul 1 unguided kita menerapkan apa yang sudah dipelajari pada guided 1. Tentang membuat program menggunakan tipe data primitif minimal dua fungsi, membuat program yang menggunakan fungsi class dan struct, dan yang terakhir membuat program yang menggunakan fungsi map.

## Referensi
[1] Binus University, Class and Object : Object Oriented Programming using C++, diakses dari https://socs.binus.ac.id/2016/12/13/class-and-object-object-oriented-programming-using-c/

[2] Josi Kie, Apa Itu Struct di C++?, diakses dari https://josikie.com/apa-itu-struct-di-c/

[3] Revou, Apa itu Tipe Data dalam Pemrograman? diakses dari https://revou.co/kosakata/tipe-data
