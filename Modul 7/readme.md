# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 7 - Stack & Queue</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
### STACK
`Stack` atau `tumpukan` adalah suatu stuktur data yang penting dalam pemrograman dengan metode pemrosesan yang bersifat `LIFO (Last In First Out)` dimana objek/ data yang terakhir masuk ke dalam stack akan menjadi data pertama yang dikeluarkan dari stack. Dengan demikian, maka hanya bagian paling atas saja dari stack (TOP) yang bisa di akses. Salah satu kelebihan stack adalah bahwa struktur data tersebut dapat di implementasikan baik pada array maupun pada linked list.[1] [2]

Adapun operasi-operasi / fungssi pada stack yaitu[1] [2] :
1. `Push` : digunakan untuk menambah item pada stack pada posisi paling atas 
2. `Pop` : digunakan untuk mengambil item pada stack pada posisi paling atas 
3. `Clear` : digunakan untuk mengosongkan stack 
4. `IsEmpty` : fungsi yang digunakan untuk mengecek apakah stack sudah kosong 
5. `IsFull` : fungsi yang digunakan untuk mengecek apakah stack sudah penuh 
6. `Top (Atas)` : digunakan untuk mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa menghapusnya.
7.  `Size (Ukuran)` : Mengembalikan jumlah elemen yang ada dalam tumpukan.
8. `Peek (Lihat)` : digunakan untuk melihat nilai atau elemen pada posisi tertentu dalam stack tanpa menghapusnya.
9. `Clear (Hapus Semua)` : digunakan untuk mengosongkan atau menghapus semua elemen dari stack.
10. `Search (Cari)` : digunakan untuk mencari keberadaan elemen tertentu dalam tumpukan

#### - Ilustrasi Stack :

![Stack](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/cc490858-e542-4a13-b1bb-7ea0d62f3385)


### QUEUE
Kebalikan dari stack, `queue (antrian)` adalah suatu jenis struktur data yang dapat diproses dengan sifat `FIFO (First In First Out)`, dimana elemen yang pertama kali masuk ke antrian akan keluar pertama kalinya[1]. Ada beberapa jenis operasi yang bisa dilakukan di antrian : 

1. `enqueue` : memasukkan elemen baru ke dalam queue
2. `dequeue` : mengeluarkan satu elemen dari suatu antrian
3.  `peek()` : mengambil data dari queue tanpa menghapusnya.
4. `isEmpty()` : mengecek apakah queue kosong atau tidak.
5. `isFull()` : mengecek apakah queue penuh atau tidak.
6. `size()` : menghitung jumlah elemen dalam queue.

Antrian dapat dibuat dengan menggunakan: Liniear Array dan 
Circular Array.  

Implementasi queue dapat dilakukan dengan menggunakan array atau linked list. Struktur data queue terdiri dari dua pointer yaitu `front` dan `rear`. `Front/head` adalah pointer ke elemen pertama dalam queue dan `rear/tail/back` adalah pointer ke elemen terakhir dalam queue.[3]

#### Perbedaan Stack dan Queue :
#### Stack :
- Didasarkan pada prinsip LIFO (Last In First Out) 
- Terdapat operasi penyisipan (operasi push) dan operasi penghapusan (operasi pop) 
- Operasi push dan pop berlangsung dari salah satu ujung tumpukan data 
- Elemen paling atas adalah elemen yang paling mudah diakses, sementara elemen yang berada pada tumpukan paling bawah adalah elemen yang tidak dapat diakses 
- Penerapannya sederhana[4] 

#### Queue : 
- Didasarkan pada prinsip FIFO (First In First Out) 
- Terdapat teknik penyisipan (operasi enqueue) dan teknik penghapusan (operasi dequeue) 
- Operasi enqueue dan dequeue berlangsung dari ujung antrian yang berbeda
- Ujung penyisipan disebut dengan ujung belakang, sementara ujung penghapusan disebut ujung depan 
- Penerapannya lebih kompleks dibanding dengan struktur data stack[4]

#### - Ilustrasi Queue :
![Queue](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/953ddeb9-31fe-4fd1-8d8b-dc01139ceb91)

## Guided 

### 1. Stack

```C++
#include <iostream>
using namespace std;

string arrayBuku[5]; // inisiasi panjang array
int maksimal = 5, top = 0; // top adl. indeks posisi teratas dari stack

bool isFull() { // jika stack penuh
    return (top == maksimal);
}

bool isEmpty() { // jika stack kosong
    return (top == 0);
}
// menambah data
void pushArrayBuku(string data) {
    if (isFull()) { // jika penuh
        cout << "Data telah penuh" << endl;
    } else { // jika stack tidak penuh maka data akan ditambahkan
        arrayBuku[top] = data;
        top++;
    }
}
// menghapus data
void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else { // jika stack tidak kosong, elemen teratas akan dihapus 
        arrayBuku[top - 1] = ""; // posisi top akan turun.
        top--;
    }
}
// melihat data
void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}
// menghitung jumlah elemen
int countStack() {
    return top;
}
// mengubah data pada posisi t
void changeArrayBuku(int posisi, string data) {
    if (posisi > top) { // jika posisi melebihi jumlah elemen stack
        cout << "Posisi melebihi data yang ada" << endl; // maka program akan menampilakan error message
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}
// Menghapus seluruh data dalam array
void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}
// menampilkan array
void cetakArrayBuku() {
    if (isEmpty()) { // jika kosong datanya
        cout << "Tidak ada data yang dicetak" << endl;
    } else { // jika ada datanya
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}
// Main program
int main() {
    // Menambahkan data ke stack
    pushArrayBuku("Kalkulus"); // posisi baling bawah, karena yg pertama kali di push]
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");
    // Mencetak seluruh isi stack
    cetakArrayBuku();
    cout << "\n";
    // Memeriksa apakah stack penuh/ kosong
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2); // Melihat data pada posisi ke-2
    popArrayBuku(); // Menghapus elemen teratas stack
    cout << "Banyaknya data = " << countStack() << endl; // Menghitung jumlah data
    changeArrayBuku(2, "Bahasa Jerman"); // Mengubah data posisi ke-2 menjadi "Bahasa Jerman"
    cout << endl;
    cetakArrayBuku(); // Menampilkan stack
    cout << "\n";
    destroyArraybuku(); // Menghapus seluruh data dalam stack
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/8aa51c44-4500-43c4-9d63-186b56438623)

Kode diatas merupakan program operasi dasar pada stack, termasuk penambahan `(push)`, penghapusan `(pop)`, melihat data `(peek)`, menghitung elemen `(count)`, mengubah data `(change)`, dan menghapus seluruh data `(destroy)`.

Pertama program akan mendeklarasikan panjang array buku yaitu 5. Variabel `maksimal` sebagai batas maksimum stack diatur menjadi 5. Variabel `top` yang merupakan indeks posisi teratas dari stack diinisialisasi dengan 0.

Program ini memiliki beberapa fungsi utama, yaitu :

1. `isFull()` : untuk mengecek apakah stack penuh. Program akan mengembalikan true jika top sama dengan maksimal, sebaliknya false.
2. `isEmpty()` : untuk mengecek apakah stack kosong
3. `pushArrayBuku(string data)` : untuk menambahkan data ke stack. Jika stack penuh, program akan menampilkan pesan bahwa data penuh. Jika tidak, data disimpan di `arrayBuku[top]` dan top ditingkatkan.
4. `popArrayBuku()` : untuk menghapus data dari stack. Jika stack kosong, menampilkan pesan bahwa tidak ada data yang dihapus. Jika tidak, mengosongkan elemen teratas dan menurunkan top.
5. `peekArrayBuku(int posisi)` : untul melihat data pada posisi tertentu dari atas stack. Jika stack kosong, maka program akan menampilkan pesan bahwa tidak ada data yang bisa dilihat. Jika tidak, program akan menghitung indeks elemen yang diminta dan menampilkan data tersebut.
6. `countStack()` : untuk mengembalikan jumlah elemen dalam stack, yaitu nilai top.
7. `changeArrayBuku(int posisi, string data)` : untuk mengubah data pada posisi tertentu dari atas stack. Jika posisi melebihi jumlah elemen dalam stack, maka program akan menampilkan pesan kesalahan. Jika valid, indeks elemen yang diminta akan dihitung dan datanya diubah.
8. `destroyArraybuku()` : untuk menghapus semua data dalam stack dengan mengosongkan array dan mengatur nilai top menjadi 0.
9. `cetakArrayBuku()` : untuk menampilkan semua data dalam stack dari atas ke bawah. Jika stack kosong, maka program akan mencetak pesan bahwa tidak ada data yang dicetak.

Pada `Main`, program akan menambahkan data kelima buku `("Kalkulus", "Struktur Data", "Matematika Diskrit", "Dasar Multimedia", dan "Inggris")` ke stack. Selanjutnya melalui fungsi `cetakArrayBuku()` program akan mencetak seluruh isi stack. Lalu untuk mengecek apakah stack tersebut kosong atau tidak program akan memanggil fungsi `isNull` dan `isEmpty` dan mencetak hasilnya. Setelah itu program akan menampilkan buku pada posisi ke-2 dari atas stack dengan memanggil `peekArrayBuku(2)`. Untuk menghapus elemen teratas dari stack digunakan `popArrayBuku()`. Kemudian untuk mengetahui jumlah data dalam stack fungsi `countStack()` dipanggil. Data pada posisi ke-2 diubah menjadi "Bahasa Jerman" menggunakan `changeArrayBuku(2, "Bahasa Jerman")`. Terakhir program akan menghapus seluruh data dalam stack dengan memanggil fungsi `destroyArraybuku()`. Pada setiap operasi program akan menampilkan isi stack. 


#### Full code Screenshot:
![Fullcode Guided 1 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/66dd2f31-315b-4a63-a65c-b94257aaf786)
![Fullcode Guided 1 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/05ba5714-aa7e-4470-9a26-a111f97fb77a)


### 2. Queue

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

//Mengecek apakah antrian penuh atau tidak
bool isFull() { 
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}
// Mengecek apakah antrian kosong atau tidak
bool isEmpty() { 
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}
// Menambahkan antrian
void enqueueAntrian(string data) { 
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}
// Mengurangi antrian
void dequeueAntrian() { 
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}
// Menghitung jumlah antrian
int countQueue() { 
    return back;
}
// Menghapus semua antrian
void clearQueue() { 
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0; // tdk ada data
        front = 0; // tdk ada data
    }
}
// Melihat isi antrian
void viewQueue() { 
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else { // jika list kosong
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}
// main program
int main() {
    enqueueAntrian("Andi"); // menambahkan data kedalam queue
    enqueueAntrian("Maya"); // menambahkan data kedalam queue
    viewQueue(); // melihat antrian
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian(); // menghapus antrian paling awal
    viewQueue(); // melihat antrian
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue(); // menghapus semua antrian
    viewQueue(); // melihat antrian
    cout << "Jumlah antrian = " << countQueue() << endl;

    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e4462c3e-17b5-4e9a-ab54-df4bdc1f75f2)

Kode diatas merupakan program antrian (queue) teller menggunakan array. 

Pertama program akan mendeklarasikan konstanta `maksimalQueue` untuk menyimpan kapasitas maksimum dari antrian, yaitu 5. Variabel `front` dan `back` digunakan untuk menunjukkan indeks depan dan belakang antrian. `front` dan `back` diinisialisasi dengan 0. Array `queueTeller` yang memiliki panjang 5 elemen digunakan untuk menyimpan data dalam antrian.

Fungsi Utama:
1. `isFull()` : untuk mengecek apakah antrian kosong. Antrian dianggap kosong jika nilai `back` = `maksimalQueue`.
2. `isEmpty()` : untuk mengecek apakah antrian kosong. Antrian dianggap kosong jika `back` = 0.
3. `enqueueAntrian(string data)` : untuk menambahkan data ke antrian. Jika antrian penuh, maka progra akan menampilkan pesan bahwa antrian penuh. Jika antrian kosong, data ditempatkan di indeks 0, dan nilai front dan back ditingkatkan. Jika tidak kosong, data ditambahkan pada posisi back dan back ditingkatkan.
4. `dequeueAntrian()` : untuk menghapus data dari antrian. Jika antrian kosong, program akan menampilkan pesan bahwa antrian kosong. Jika tidak kosong, semua elemen antrian digeser satu posisi ke depan, dan nilai back diturunkan.
5. `countQueue()` : untuk mengembalikan jumlah elemen dalam antrian dengan mengembalikan nilai back.
6. `clearQueue()` : untuk menghapus semua data dalam antrian dengan mengosongkan array dan mengatur nilai front dan back menjadi 0.
7. `viewQueue()` : untuk menampilkan semua elemen dalam antrian. Jika elemen kosong, program akan menampilkan "(kosong)".

Pada main, program akan menambahkan nama 'Andi' dan 'Maya' kedalam queue, menampilkan seluruh isi queue. dan menghitung jumlah elemen dalam antrian setelah penambahan data, menghapus elemen terdepan dalam antrian, menampilkan lagi isi queue dan menghitung jumlah queue setelah penghapusan, menghapus semua data dalam antrian, menampilkan isi queue dan menghitung jumlah elemen setelah penghapusan total.


#### Full code Screenshot:
![Fullcode Guided 2#1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/d59ac937-620f-426a-ae89-89c598e7e823)
![Fullcode Guided 2#2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/69dd43c0-f019-4761-a515-74f0285b21e9)


## Unguided 

### 1.  Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

![Soal Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b04d2092-6923-4043-b658-0e11859b0a0c)


```C++
#include <iostream> // untuk input-output
#include <stack> // untuk menggunakan struktur data stack
#include <cctype> // fungsi-fungsi untuk karakter handling, seperti isalnum dan tolower
#include <string> // untuk manipulasi string
using namespace std;

// Fungsi untuk membersihkan kalimat dari karakter non-alfanumerik dan mengubah huruf menjadi kecil
string clean_sentence(const string& sentence) {
    string cleaned;
    for (char ch : sentence) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}
// Fungsi untuk memeriksa apakah kalimat adalah palindrom menggunakan stack
bool is_palindrome(const string& sentence) {
    string cleaned = clean_sentence(sentence);
    stack<char> char_stack;

    // Memasukkan karakter ke dalam stack
    for (char ch : cleaned) {
        char_stack.push(ch);
    }

    // Memeriksa apakah kalimat tersebut palindrom
    for (char ch : cleaned) {
        if (ch != char_stack.top()) {
            return false;
        }
        char_stack.pop();
    }
    return true;
}
// main program
int main() {
    string input_sentence;
    
    cout << "Masukkan kalimat: ";
    getline(cin, input_sentence);

    // Memeriksa apakah kalimat tersebut palindrom
    if (is_palindrome(input_sentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl; // jika kata/ kalimat adalah palindrom
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl; // jika kata/ kalimat bukan palindrom
    }
    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/95bed96c-1f05-4504-86c6-27b89c478dec)


### Interpretasi: 
Kode diatas merupakan program untuk menentukan apakah sebuah kata adalah polindrom atau bukan. 

Pertama program akan membersihkan kata/ kalimat dari karakter non-alfanumerik dan mengubah huruf menjadi huruf kecil. Lalu melalui `loop` setiap karakter akan dicek apakah alfanumerik menggunakan `isalnum`. Jika iya, maka program akan mengubahnya menjadi huruf kecil menggunakan `tolower` dan ditambahkan ke string `cleaned`. 

Selanjutnya program akan memeriksa melalui fungsi `is_palindrome` apakah kata inputan user merupakan polindrom atau bukan menggunakan stack. Kemudian, karakter dari kata/ kalimat dibandingkan dengan karakter dari top stack. Jika semua karakter cocok, maka kalimat tersebut adalah palindrom Jika ada perbedaan, maka kalimat tersebut bukan palindrom.

Pada `main` program akan meminta user untuk menginputkan kata menggunakan `getline`. Lalu kalimat tersebut akan diperiksa menggunakan fungsi `is_palindrome` dan hasilnya akan dicetak. Jika kata merupakan palindrom maka program akan mencetak `Kalimat tersebut adalah palindrom` jika bukan maka program akan menampilkan `Kalimat tersebut bukan palindrom`. Setelah selesai, program akan menampilkan nama pembuat program.

#### Full code Screenshot:
![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/96a3d132-98f8-4f54-b8ad-a757d82f8648)


### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu.

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Panjang array untuk menyimpan antrian

// Pengecekan antrian penuh atau tidak
bool isFull() { 
    if (back == maksimalQueue) {
        return true; // =1 // jika penuh
    } else {
        return false; // jika belum penuh
    }
}
// Memeriksa antrian kosong atau tidak
bool isEmpty() { 
    if (back == 0) { // antrian kosong
        return true;
    } else {
        return false; // antrian tidak kosong
    }
}
// Menambahkan antrian
void enqueueAntrian(string data) { 
    if (isFull()) { // jika antrian penuh
        cout << "Antrian penuh" << endl; // maka program mencetak "Antrian penuh"
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}
// Mengurangi antrian
void dequeueAntrian() { // menghapus elemen depan dari antrian
    if (isEmpty()) { // jika queue kosong
        cout << "Antrian kosong" << endl; 
    } else { // jika tidak kosong
        for (int i = 0; i < back - 1; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        queueTeller[back - 1] = "";
        back--;
    }
}
// Menghitung jumlah antrian
int countQueue() { 
    return back;
}
// Menghapus semua antrian
void clearQueue() { 
    if (isEmpty()) { // jika queue kosong
        cout << "Antrian kosong" << endl;
    } else { // jika tidak kosong
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0; // tdk ada data
        front = 0; // tdk ada data
    }
}
// Melihat isi antrian
void viewQueue() { 
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") { // mengulangi array dan mencetak setiap elemen
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else { // jika list kosong
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}
// Function untuk menampilkan menu
void displayMenu() { // opsi menu untuk dipilih user
    cout << "Program Menu:" << endl;
    cout << "=================" << endl;
    cout << "1. Tambah Antrian" << endl;
    cout << "2. Hapus Antrian" << endl;
    cout << "3. Lihat Antrian" << endl;
    cout << "4. Hitung Antrian" << endl;
    cout << "5. Hapus Semua Antrian" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
}
// main program
int main() {
    int choice; // menyimpan pilihan menu user
    string name; // menyimpan nama yang akan dimasukkan ke queue
    // perulangan
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // memasukkan nama
                cout << "Masukkan nama: ";
                cin >> name;
                enqueueAntrian(name);
                break;
            case 2: // menghapus elemen depan
                dequeueAntrian();
                break;
            case 3: // melihat queue
                viewQueue();
                break;
            case 4: // mencetak jumlah elemen
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5: // menghapus semua elemen dalam queue
                clearQueue();
                break;
            case 6: // keluar dari loop
                cout << "Keluar program" << endl;
                break;
            default: // error message jika pilihan tidak valid
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (choice != 6);

    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output
![Unguided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/bda5148c-41a9-4907-9f04-bef4cabfc20d)
![Unguided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e3ebc80f-ea0f-4c51-823e-c5aa4dc0a4d9)
![Unguided 2 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/0fc7a66f-1c81-42e6-957d-7facff85f1bf)
![Unguided 2 #4](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e1aa410d-c324-4292-a1e8-1ba2e32c81cd)

### Interpretasi: 
Pertama program akan menentukan ukuran maksimal queue pada `const int maksimalQueue` yaitu 5. `int front = 0`; dan `int back = 0` menandai posisi depan dan belakang dari queue. Elemen-elemen dalam queue disimpan dalam array `string queueTeller[5]`.

- Fungsi `bool isFull()` digunakan untuk mengecek apakah queue penuh atau tidak. 
- Fungsi `bool is Empty` digunakan untuk mengecek apakah queue kosong atau tidak.
- Fungsi `void enqueueAntrian(string data)` digunakan untuk menambahkan elemen baru ke dalam antrian. Jika antrian penuh maka program akan mencetak pesan "Antrian penuh". Jika 
ika antrian kosong, menambahkan elemen pada posisi pertama dan menaikkan `front` dan `back`
- Fungsi `void dequeueAntrian()` digunakan untuk menghapus elemen depan dari antrian.
- `int countQueue()` digunakan untuk mengembalikan jumlah elemen dalam antrian. 
- `void clearQueue` digunakan untuk menghapus semua elemen dalam queue. 
- `void viewQueue` digunakan untuk menampilkan isi queue.

Pertama program akan mendeklarasikan variabel `int choice` untuk menyimpan pilihan menu user dan `string name` yang menyimpan nama yang akan dimasukkan ke queue. Lalu program akan menampilkan opsi menu melalui `void displayMenu()`. Program dapat menambahkan, menghapus, menampilkan, atau menghapus semua elemen dalam antrian sesuai dengan pilihan pengguna. Melalui perulangan `(loop do-while)` program akan menampilkan menu dan memproses inputan user sampai user memilih untuk keluar (opsi 6). Setelah keluar dari loop,program akan mencetak nama pembuat program.


#### Full code Screenshot:
![Fullcode Unguided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/05f81172-6b93-4a1a-8a42-31e98040ae6c)
![Fullcode Unguided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b5c4273b-e566-4569-9506-f13d5aff1568)
![Fullcode Unguided 2 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9d20fccd-e0ce-4040-9f59-6fb7456d12d5)
![Fullcode Unguided 2 #4](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/44648ad0-a675-4096-8cca-8dd93ac77fa6)


## Kesimpulan
Pada Modul 7 ini kita mempelajari mengenai stack dan queue. Stack adalah struktur data yang mengikuti prinsip Last In First Out (LIFO). Ini berarti elemen terakhir yang ditambahkan ke stack adalah elemen pertama yang akan dihapus. Stack sangat berguna dalam berbagai situasi di mana kita perlu melacak urutan operasi dan memastikan bahwa operasi terakhir dilakukan pertama kali. Terdapat beberapa operasi dalam stack, antara lain push, pop, peek, isFull, dan isEmpty. 

Sedangkan Queue adalah struktur data yang mengikuti prinsip First In First Out (FIFO). Dimana elemen pertama yang dimasukkan ke dalam queue akan menjadi elemen pertama yang dikeluarkan. Queue sangat berguna dalam situasi di mana kita perlu mengelola data berdasarkan urutan masuknya. Operaso pada queue yaitu enqueue, dequeue, isFull, dan isEmpty. 

Perbedaan utama antara keduanya yaitu Stack menggunakan prinsip LIFO sedangkan Queue menggunakan prinsip FIFO.

Pada Unguided kita belajar untuk membuat program stack yang dapat menentukan apakah sebuah kata yang diinputkan adalah palindrom atau bukan, serta membuat queue teller berdasarkan inputan user dan program menu.

## Referensi
[1] J. Sihombing, “Penerapan Stack Dan Queue Pada Array Dan Linked List Dalam Java,” J. Ilm. Infokom, vol. 7, no. 2, pp. 15–24, 2019.

[2] G. M. Putri, K. A. Di Pradja, M. B. M. Azizi, P. Nurwahid, A. S. Perdana, and . M., “Implementasi Stack dan Array pada Pengurutan Lagu dengan Metode Selection Sort,” J. Teknol. Dan Sist. Inf. Bisnis, vol. 6, no. 2, pp. 286–296, 2024, doi: 10.47233/jteksis.v6i2.1192. 

[3] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications.

[4] S. Ranti. (2022). Pengertian Stack dan Queue serta Contoh Penerapannya [Online]. Available : https://tekno.kompas.com/read/2022/12/01/02150047/pengertian-stack-dan-queue-serta-contoh-penerapannya. 