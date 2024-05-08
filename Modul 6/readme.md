# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 6 - Single and Double Linked List</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
### Linked List
Linked list atau yang biasa juga disebut sebagai `senarai berantai` merupakan salah satu metode dalam Algoritma dan Struktur Data yang  digunakan  untuk  mengorganisasi  struktur data dalam sebuah sistem[1]. Linked List berisi kumpulan data yang disebut `node` dan tersusun secara sekuensial serta saling sambung-menyambung, dinamis, dan terbatas. [2]

- Linked List saling terhubung dengan bantuan pointer variabel 
- Masing-masing data dalam Linked List disebut dengan node (simpul) yang menempati alokasi memori secara dinamis dan biasanya berupa struct yang terdiri dari beberapa field. 

####  Perbedaan Linked List dan Array :
- Berbeda dengan array yang juga merupakan struktur data linier dan tipe data komposit, linked list dibentuk secara dinamik.[3]
- Pada saat awal program dijalankan elemen linked list belum terdata. Elemen linked list (node) dibentuk sambil jalan sesuai instruksi. Apabila setiap elemen array dapat diakses secara langsung dengan menggunakan indeks, sebuah node linked list diakses dengan menggunakan pointer yang mengacu ke node tersebut. [3]



### Single Linked List Non-Circular
Single Linked List adalah suatu kumpulan elemen  data  (yang  disebut sebagai node) dimana urutannya ditentukan  oleh  suatu pointer. Single Linked List hanya memiliki 1 (satu) petunjuk/pointer (NEXT). Setiap elemen (node) dari suatu linked list terdiri  atas dua bagian, yaitu :[4]
- INFO: berisi informasi tentang elemen data yang bersangkutan.
- NEXT(link field/next pointer field) : berisi alamat dari elemen (node)selanjutnya yang dituju. 

#### Contoh Single Non-Circular Linked List :
![Contoh Single Linked List](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/823fa76c-5639-453d-b2fb-4d62fafec33f)



### Double Linked List Non-Circular
Double Linked List Circular adalah linked list dengan menggunakan pointer, dimana setiap node memiliki 3 field yaitu 1 field pointer yang menunjuk pointer berikutnya (next), 1 field menunjuk pointer sebelumnya (prev), serta sebuah field yang berisi, data untuk node tersebut. Double Linked List Circular pointer next dan prev-nya menunjuk ke dirinya sendiri secara circular.[3]

#### Contoh Double Non-Circular Linked List :
![Contoh Double Linked List](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9e7a243e-03cb-4e0f-bfe4-6218dd8d8fcb)



### Circular Linked List
Cirular Linked List adalah linked list yang di mana semua simpul terhubung membentuk lingkaran. Dalam sebuah daftar berantai melingkar, simpul pertama dan simpul terakhir terhubung satu sama lain sehingga membentuk sebuah lingkaran. Tidak ada NULL di bagian akhir.[5]

#### Contoh Circular Linked List : 
![Contoh Circular Linked List](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6dbfb962-ba42-4dfe-b53e-a6c8001b19b5)



### Constructor 
C() adalah anggota class yang bertugas melakukan inisialisasi obyek (instance) dari suatu class C. Constructor mempunyai nama yang sama dengan nama class, dan tidak mempunyai return value. Sebuah class dapat mempunyai lebih dari satu constructor. Constructor yang tidak mempunyai argumen, disebut default constructor, sebaliknya constructor yang mempunyai lebih dari satu argumen adalah non-default consructor[6].

Constructor adalah method khusus yang akan dieksekusi pada saat pembuatan objek (instance). Biasanya method ini digunakan untuk inisialisasi atau mempersiapkan data untuk objek[7].

## Guided 

### 1. Latihan Single Linked List Non-Circular

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next; // untuk pointer 
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL; // untuk mengecek apakah kosong/ tidak
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){ // insert nilai yg paling depan
    //Buat Node baru
    Node *baru = new Node; // membuat pointer baru
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru; // jika belum dibuat
        tail->next = NULL;
    }
    else{
        baru->next = head; // jika sudah dibuat link listed nya
        head = baru; // baru jadi head, head jadi tail
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru; // node paling baru akan jadi tail
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head; // perhitungan mulai dari awal
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++; // increment
        hitung = hitung->next; // hitung akan berlanjut ke setelahnya
    }
    return jumlah; // return jumlahnya berapa
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){ // linked list mulai dari 1
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){ // karena 1 bukan posisi tengah, maka
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{ // jika benar posisinya di tengah
        Node *baru, *bantu;
        baru = new Node(); 
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){ // mengeser posisi untuk menyelipkan angka yg baru
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){ // mengecek apakah ada linked list nya
            hapus = head; // pointer hapus akan berada di head, dan head akan bergeser kesebelahnya.
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){ // jika tidak kosong
        if (head != tail){
            hapus = tail; // bagian tail akan ditunjuk pointer hapus
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
// Main Program
int main(){
    init();
    insertDepan(3); // jadi head & tail karna masih kosong
    tampil();
    insertBelakang(5); // 5 jadi tail
    tampil();
    insertDepan(2); // posisi head awalnya 3 jadi 2, menggunakan pointer bantu (pointer sementara)
    tampil();
    insertDepan(1); // posisi head awalnya 2 jadi 1
    tampil();
    hapusDepan(); // 1 dilepaskan dari pointer next,
    tampil();
    hapusBelakang(); // 5 dilepaskan dari pointer
    tampil();
    insertTengah(7,2); // 7 dimasukkan ke posisi kedua
    tampil();
    hapusTengah(2); // menghapus 7
    tampil();
    ubahDepan(1); // ubah angka depan dari 2 jadi 1
    tampil();
    ubahBelakang(8); // ubah angka belakang 3 jadi 8
    tampil();
    ubahTengah(11, 2); // ubah posisi kedua dari 8 jadi 11
    tampil();

    insertTengah(7,1); // karena 1 bukan posisi tengah.,
    tampil(); // maka program akan mencetak "Posisi bukan posisi tengah", dan menampilkan list terakhir
    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/1193b4f4-6a89-4c39-a717-15b665e03316)

Pertama program akan mendeklarasikan struct `Node` yang akan menyimpan data integer `data` menjadi `NULL`. Setelah itu, melaui fungsi `init()` program akan diinisiasi dari `head` dan `tail` menjadi `NULL`. Setelah itu program akan memeriksa apakah linked list kosong atau tidak menggunakan fungsi `is Empty`. 

Operasi pada linked list :
a. Penambahan elemen di depan, belakang, dan tengah:
- `insertDepan(int nilai)` : digunakan untuk menambahkan node baru di depan. Jika linked list kosong maka node baru akan menjadi `head` dan `tail`. Jika tidak, maka node baru ditambahkan didepan dan akan menjadi `head`.
- `insertBelakang(int nilai)` : digunakan untuk menambahkan node baru di belakang. Jika linked list kosong, maka node baru menjadi `head` dan `tail`. Jika tidak, node baru ditambahkan di belakang dan `tail` diperbarui.
- `insertTengah(int data, int posisi`:digunakan untuk menambahkan node baru di posisi tertentu dalam linked list. Jika posisi di luar jangkauan atau merupakan posisi pertama, fungsi memberikan pesan kesalahan. Jika tidak, fungsi mencari posisi yang ditentukan, lalu menyisipkan node baru di antara dua node yang ada.

b. Perhitungan jumlah elemen :
- `hitungList()`: untuk menghitung jumlah elemen dalam linked list dengan mengiterasi melalui setiap node dari `head` hingga `tail`.

c. Penghapusan Elemen di Depan, Belakang, dan Tengah:
- `hapusDepan()`: Menghapus node pertama dari linked list.
- `hapusBelakang()`: Menghapus node terakhir dari linked list.
- `hapusTengah(int posisi)`: Menghapus node pada posisi tertentu dalam linked list. Jika posisi di luar jangkauan atau merupakan posisi pertama, fungsi memberikan pesan kesalahan.

d. Pengubahan Nilai Elemen di Depan, Belakang, dan Tengah:
- `ubahDepan(int data)` : untuk mengubah nilai data pada node pertama.
- `ubahBelakang(int data)` : untuk mengubah nilai data pada node terakhir.
- `ubahTengah(int data, int posisi)` : untuk mengubah nilai data pada node di posisi tertentu

e. Penghapusan Seluruh Elemen:
- `clearList()` : Menghapus semua elemen dalam linked list dengan mengosongkan memori dan mengembalikan `head` dan `tail` ke `NULL`.

f. Menampilkan Elemen Linked List:
- `tampil()` : Menampilkan semua elemen dalam linked list dari `head` hingga `tail`.

Pada main, program akan menginisiasi linked list dengan memanggil `init()`. Lalu program akan menambah, menghapus, mengubah, dan menampilkan elemen-elemen linked list menggunakan fungsi-fungsi yang sudah didefinisikan beserta nilainya. Seluruh operasi tersebut dilakukan dengan memanipulasi pointer dari satu node ke node lainnya. Terakhir program akan mencetak nama pembuat program.

#### Full code Screenshot:
![Fullcode Guided 1 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/3489f74d-764d-4cf7-a13d-7e3844b7ef0b)
![Fullcode Guided 1 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/9fa419d8-65e5-434d-90ad-c559cc4dccb9)
![Fullcode Guided 1 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/d11ed879-7775-441c-a231-362886094864)
![Fullcode Guided 1 #4](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/398fe5dd-84f2-4fe6-9172-8a4cd41fc9a7)
![Fullcode 1 #5](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/e164d0c7-0d22-4a68-88f2-0e9ae49720bc)

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;
// Deklarasi Struct Node
class Node {
    public:int data; // komponen/ member
    // untuk pointer
    Node* prev; 
    Node* next;
};
// Deklarasi class DoubleLinkedList
class DoublyLinkedList {
        public:
        Node* head; // pointer node pertama
        Node* tail; // pointer node terakhir
        DoublyLinkedList() { // menginisiasi head dan tail menjadi nullptr karena list awalnya kosong
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { // tambah depan
        Node* newNode = new Node; // membuat pointer baru
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) { // jika list tidak kosong
            head->prev = newNode; // maka node baru akan menjadi head
        } 
        else { // jika kosong 
            tail = newNode; // maka node baru akan menjadi tail
        }
        head = newNode; // dan head
    }
    void pop() { // hapus depan
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) { // jika linked list tidak kosong
            head->prev = nullptr; // maka posisi head akan diubah ke node berikutnya.
        } 
        else {
            tail = nullptr; // jika node yg dihapus adalah `tail` maka akan menjada nullptr
        }
        delete temp;
    }
    bool update(int oldData, int newData) { // mengubah data
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) { 
                current->data = newData;
                return true; // jika ditemukan
            }
            current = current->next;
        }
        return false; // jika tidak ditemukan
    }
    void deleteAll() { // hapus semua (clear)
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr; // menandakan linked list kosong
        tail = nullptr; // menandakan linked list kosong
    }
    void display() { // tampil data
        Node* current = head;
        while (current != nullptr) { // akan terus mengulang sampai data nya kosong
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
// Main Program
int main() {
    DoublyLinkedList list;
    while (true) { // program menu
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: { // menambah data
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: { // menghapus data
                list.pop();
                break;
            }
            case 3: { // update data
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: { // delete all
                list.deleteAll();
                break;
            }
            case 5: { // menampilkan data
                list.display();
                break;
            }
            case 6: { // exit
                return 0;
            }
            default: { // pilihan tidak valid (tidak ada)
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    // mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output :
![Guided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/adf4a6e4-4ff2-4466-902c-12da67d67203)
![Guided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6cc3d8e1-1456-495d-afb1-831cbd35ad97)


Pertama program akan mendeklarasikan struct `Node` yang memiliki 3 anggota, yaitu `data` untuk menyimpan nilai integer, `prev` untuk menujuk ke node sebelumnya, dan `next` untuk menunjuk node selanjutnya. Setelah itu program akan mendeklarasikan class `DoublyLinkedList` untuk menyediakan fungsi-fungsi untuk memanipulasi linked list. `ead` dan `tail` adalah pointer ke node pertama dan terakhir dalam linked list. Konstruktor `DoublyLinkedList()` digunakan untuk menginisialisasi `head` dan `tail` menjadi `nullptr` karena pada awalnya linked list kosong.

Operator :
a. `push(int data)` : digunakan untuk menambahkan node baru di depan linked list dengan nilai data. Jika `head` tidak kosong, maka node baru dihubungkan ke `head` dan `head->prev` diatur menjadi `node baru`. Jika `head` kosong, maka node baru akan menjadi `head` sekaligus `tail`.

b. `pop()`: untuk menghapus node pertama dari linked list.
Jika linked list tidak kosong, posisi `head` akan bergeser ke sebelah dari node yang dihapus. Jika node yang dihapus adalah node terakhir, maka `tail` akan diubah menjadi `nullptr`.

c. `update(int oldData, int newData)`: untuk mengubah nilai `oldData` menjadi `newData` dalam linked list. dalam linked list program akan mencari node dengan nilai `oldData`, jika ditemukan, maka nilai data akan diubah dan fungsi mengembalikan true. Jika tidak ditemukan, fungsi mengembalikan false.

d. `deleteAll()` : untuk menghapus semua node dalam linked list. `head` dan `tail` diatur kembali menjadi `nullptr` untuk menandakan linked list kosong.

e. `display()` : untuk menampilkan semua data dalam linked list dari head ke tail.

Pada main, program akan menampilkan list menu seperti menambah, menghapus, mengubah, membersihkan, menampilkan, dan keluar dari program. Setelah memilih menu yang diinginkan, program akan memproses inputan user dan memanggil fungsi yang sesuai berdasarkan pilihan tersebut. Program akan terus melakukan perulangan `(loop)` sampai user memilih menu `exit`. 

#### Full code Screenshot:
![Fullcode Guided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/220cfea6-e6b0-480b-a24e-1be5d4d3722b)
![Fullcode Guided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/296a57a8-0ce1-4dce-a994-e21e3cb7a116)
![Fullcode Guided 2 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/275f12bf-2a51-4610-8159-8862d54c81c1)


## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
a.	Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.

![Soal Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/d44401c0-17cc-4a52-a939-a83741fa63dc)

b.	Hapus data Akechi
c.	Tambahkan data berikut diantara John dan Jane : Futaba	18
d.	Tambahkan data berikut diawal : Igor	20
e.	Ubah data Michael menjadi : Reyn	18
f.	Tampilkan seluruh data

```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node* next;
};
// Deklarasi Class LinkedList
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
// Fungsi untuk memasukkan data di depan
void insertDepan(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;
}
// Fungsi untuk memasukkan data di belakang
void insertBelakang(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
// Fungsi untuk memasukkan data di tengah
void insertTengah(string nama, int usia, string namaSebelum) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;

    Node* temp = head;
    while (temp != nullptr && temp->nama != namaSebelum) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Nama " << namaSebelum << " tidak ditemukan" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
// Fungsi untuk menghapus data
void hapusData(string nama) {
    if (head == nullptr) {
        cout << "Linked list kosong" << endl;
        return;
    }
    if (head->nama == nama) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->nama != nama) {
        temp = temp->next;
    }
    if (temp->next == nullptr) {
        cout << "Nama " << nama << " tidak ditemukan" << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
// Fungsi untuk mengubah data
void ubahData(string nama, string namaBaru, int usiaBaru) {
    Node* temp = head;
    while (temp != nullptr && temp->nama != nama) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Nama " << nama << " tidak ditemukan" << endl;
        return;
    }

    temp->nama = namaBaru;
    temp->usia = usiaBaru;
}
// Fungsi untuk menampilkan seluruh data
void tampilkanData() {
    if (head == nullptr) {
        cout << "Linked list kosong" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->nama << "\t" << temp->usia << endl;
        temp = temp->next;
    }
}
};
// Main program
int main() {
    LinkedList list;
    string namaAnda;
    int usiaAnda;

    // Memasukkan data pertama
    cout << "Masukkan nama Anda: ";
    cin >> namaAnda;
    cout << "Masukkan usia Anda: ";
    cin >> usiaAnda;

    list.insertDepan(namaAnda, usiaAnda);

    // Masukkan data sesuai urutan
    list.insertBelakang("John", 19);
    list.insertBelakang("Jane", 20);
    list.insertBelakang("Michael", 18);
    list.insertBelakang("Yusuke", 19);
    list.insertBelakang("Akechi", 20);
    list.insertBelakang("Hoshino", 18);
    list.insertBelakang("Karin", 18);

    // Menampilkan seluruh data
    cout << "Data sebelum diubah:" << endl;
    list.tampilkanData();

    // Hapus data Akechi
    list.hapusData("Akechi");

    // Insert data Futaba diantara John dan Jane
    list.insertTengah("Futaba", 18, "John");

    // Tambahkan data di awal
    list.insertDepan("Igor", 20);

    // Ubah data Michael menjadi Reyn
    list.ubahData("Michael", "Reyn", 18);

    // Menampilkan seluruh data setelah operasi
    cout << "\nData setelah operasi:" << endl;
    list.tampilkanData();
    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}
```
#### Output:
![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6a8bbb50-5403-4b5b-a676-0ebcc8eac128)

### Interpretasi: 
Pertama program akan mendeklarasikan struct `Node` untuk menyimpan informasi nama dan usia, serta pointer `next` yang menunjuk ke node berikutnya dalam linked list. Setelah itu program akan mendeklarasikan class `LinkedList` untuk memanipulasi data pada linked list seperti `insertDepan`, `insertBelakang`, `insertTengah`, `hapusData`, `ubahData`, dan `tampilkanData`. Lalu `head` akan diinisiasi menjadi `nullptr` karena awalnya linked list kosong. 

Operator Linked List :
a. Penambahan elemen di depan, tengah, dan belakang :
- `insertDepan(string nama, int usia)` : untuk menambahkan node baru di depan linked list dengan nama dan usia yang diberikan.
- `insertBelakang(string nama, int usia)` : untuk menambahkan node baru di belakang linked list dengan nama dan usia yang diberikan.
- `insertTengah(string nama, int usia, string namaSebelum)` : untuk menambahkan node baru di tengah linked list setelah node dengan nama yang ditentukan.

b. `hapusData(string nama)` : untuk menghapus node dengan nama yang diberikan dari linked list.

c. `ubahData(string nama, string namaBaru, int usiaBaru)` : untuk mengubah data node dengan nama yang diberikan menjadi data baru yang diberikan.

d. `tampilkanData()`: menampilkan seluruh data dalam linked list, yaitu nama dan usia setiap mahasiswa.

Pada main program, objek `LinkedList` dibuat untuk menyimpan seluruh data mahasiswa. Lalu program akan meminta user untuk menginputkan nama dan usia user untuk data pertama. Lalu data mahasiswa akan diinputkan sesuai dengan urutan yang ditentukkan. Data sebelum operasi dilakukan akan ditampilkan terlebih dahulu. Setelah itu program akan melakukan operasi `menghapus data Akechi`, `menyisipkan data Futaba di antara John dan Jane`, `menambahkan data Igor di awal`, dan `mengubah data Michael menjadi Reyn`. Setelah selesai melakukan seluruh operasi, data akan ditampilkan.

#### Full code Screenshot:
![Fullcode Unguided 1 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/166ea22b-25fe-4942-ab83-c9ddc0624ff3)
![Fullcode Unguided 1 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/31de4a40-130e-44e7-b4d5-b07ff6247180)
![Fullcode Unguided 1 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/0873e843-2d04-4763-a958-5090eba93c32)


### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.

![Soal Unguided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6005e468-d65d-4e4f-a9d8-6c214a64364f)

Case:
1.	Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific
2.	Hapus produk wardah
3.	Update produk Hanasui menjadi Cleora dengan harga 55.000
4.	Tampilkan menu seperti dibawah ini
Toko Skincare Purwokerto
1.	Tambah Data
2.	Hapus Data
3.	Update Data
4.	Tambah Data Urutan Tertentu
5.	Hapus Data Urutan Tertentu
6.	Hapus Seluruh Data
7.	Tampilkan Data
8.	Exit
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :

![Soal Unguided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/a4e99e90-ae02-4033-9d1f-746b002782b3)

```C++
// MODUL 6 - SINGLE & DOUBLE LINKED LIST
// GUIDED 2 
// VANIA NOVERINA - 2311110031

#include <iostream>
#include <string>
#include <iomanip> // untuk maipulator setw()
using namespace std;

// Deklarasi Struct Node
struct Node { // memiliki 2 atribut
    string namaProduk; // untuk menyimpan nama produk
    int harga; // menyimpan harga produk
    Node* prev; // pointer untuk menunjuk ke sebelumnya
    Node* next; // pointer untuk menunjuk ke setelahnya
};

// Deklarasi Class LinkedList
class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambah data di belakang
    void tambahBelakang(string nama, int harga) {
        Node* newNode = new Node;
        newNode->namaProduk = nama;
        newNode->harga = harga;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = tail = newNode;
            newNode->prev = nullptr;
        } else {
            tail->next = newNode; // node paling baru akan jadi tail
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Fungsi untuk menambah data di tengah / urutan tertentu
    void tambahTengah(string nama, int harga, string namaSebelum) {
        Node* newNode = new Node;
        newNode->namaProduk = nama; // mengisi atribut `namaProduk`dengan nilai yang diberikan
        newNode->harga = harga; // mengisi atribut `harga` dengan nilai yang diberikan

        Node* temp = head; //  pointer sementara (temp) diinisiasi menjadi `head` untuk memulai iterasi
        while (temp != nullptr && temp->namaProduk != namaSebelum) {
            temp = temp->next;
        }
        if (temp == nullptr) { // jika pointer tidak menunjuk kemanapun 
            cout << "Produk " << namaSebelum << " tidak ditemukan" << endl; // maka akan ditampilkan error message
            return;
        }
        newNode->next = temp->next; // jika `namaSebelum` ditemukan, node baru akan ditambahkan setelah `temp`
        newNode->prev = temp; // `temp` menjadi node sebelum node baru
        if (temp->next != nullptr) { // jika linked list tidak kosong
            temp->next->prev = newNode; // maka pointer `prev` akan berpindah ke node baru
        } else {
            tail = newNode; // jika pointer tidak menunjuk kemanapun, maka pointer `tail` menunjuk ke node baru
        }
        temp->next = newNode; // pointer next dari temp akan menunjuk node baru.
    }

    // Fungsi untuk menghapus data
    void hapusData(string nama) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != nama) {
            current = current->next; // jika produk ditemukan, pointer `current` akan menunjuk node tersebut dan loop selesai
        }

        if (current == nullptr) { // jika linkedlist tidak menunjuk kemanapun
            cout << "Produk " << nama << " tidak ditemukan" << endl; // maka akan ditampilkan error message.
            return;
        }

        if (current == head) { // jika node yg ditemukan adalah node pertama
            head = head->next; // maka posisi head akan berubah menjadi node selanjutnya
            if (head != nullptr) {
                head->prev = nullptr;
            }
        } else if (current == tail) { // jika node yg ditemukan adalah node terakhir
            tail = tail->prev; // maka posisi tail akan berubah menjadi node sebelumnya
            tail->next = nullptr;
        } else {
            current->prev->next = current->next;
            current->next->prev = current->prev;
        }

        delete current;
    }

    // Fungsi untuk mengubah data
    void updateData(string nama, string namaBaru, int hargaBaru) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != nama) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Produk " << nama << " tidak ditemukan" << endl;
            return;
        }
        current->namaProduk = namaBaru;
        current->harga = hargaBaru;
    }

    // Fungsi untuk menghapus seluruh data
    void hapusAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menampilkan seluruh data
    void tampilkanData() {
        cout << setw(15) <<"Nama Produk" << setw(10) << "Harga" << endl; // Mengatur lebar kolom
        Node* current = head;
        while (current != nullptr) {
            cout << setw(15) << current->namaProduk << setw(10) << current->harga << endl;
            current = current->next;
        }
    }
};
// Main Program
int main() {
    LinkedList list;

    // Menambah data awal
    list.tambahBelakang("Originote", 60000);
    list.tambahBelakang("Somethinc", 150000);
    list.tambahBelakang("Skintific", 100000);
    list.tambahBelakang("Wardah", 50000);
    list.tambahBelakang("Hanasui", 30000);

    int choice;
    string namaProduk, namaSebelum, namaBaru;
    int harga, hargaBaru;

    //  Tampilan Menu utama
    do {
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Masukkan pilihan: ";
        cin >> choice;
        // Pengkondisian
        switch (choice) {
            case 1: // jika ingin menambah produk baru
                cout << "Masukkan nama produk baru: ";
                cin >> namaProduk;
                cout << "Masukkan harga produk baru: ";
                cin >> harga;
                list.tambahBelakang(namaProduk, harga);
                break;
            case 2: // jika ingin menghapus produk
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusData(namaProduk);
                break;
            case 3: // jika ingin mengupdate produk
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> namaProduk;
                cout << "Masukkan nama baru: ";
                cin >> namaBaru;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru;
                list.updateData(namaProduk, namaBaru, hargaBaru);
                break; 
            case 4: // jika ingin menambah produk di posisi tertentu
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> namaProduk;
                cout << "Masukkan harga produk: ";
                cin >> harga;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> namaSebelum;
                list.tambahTengah(namaProduk, harga, namaSebelum);
                break;
            case 5: // jika ingin menghapus produk di lokasi tertentu
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusData(namaProduk);
                break;
            case 6: // jika ingin menghapus seluruh data
                list.hapusAll();
                break;
            case 7: // jika ingin menampilkan data produk
                list.tampilkanData();
                break;
            case 8: // jika ingin mengakhiri program
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default: // jika inputan yang dimasukkan tidak sesuai
                cout << "Pilihan tidak valid." << endl; // maka akan ditampilkan error message 
                break;
        }
    } while (choice != 8); // jika memilih `8` maka program akan berhenti dan selesai

    return 0;
}
```
#### Output
![Unguided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6cb469b4-8fbc-48a7-ba85-2592e43ae339)
![Unguided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/7e252164-bc96-4468-8975-f2f7b5815394)
![Unguided 2 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/00098f78-8cd9-44e7-b705-65dc5bfb799f)

### Interpretasi: 
Program diatas merupakan implementasi dari double linked list yang berfungsi untuk meyimpan data nama dan harga produk skincare. Pertama program akan mendeklarasikan struct `Node` yang memiliki 2 atribut yaitu `namaProduk` dan `harga`. Serta terdapat 2 pointer yaitu `prev` untuk menunjuk data sebelumnya dan `next` untuk menunjuk ke node selanjutnya.

Lalu program akan mendeklarasikan class `LinkedList` untuk menyimpan data produk skincare.
- `head` dan `tail` : Pointer ke node pertama dan terakhir dalam linked list.
- `LinkedList()` : untuk menginisialisasi `head` dan `tail` menjadi `nullptr`.

Operator dalam linked list :
a. Penambahan elemen belakang dan tengah
- `tambahBelakang(string nama, int harga)` : digunakan untuk menambah data produk baru di posisi paling akhir dari linked list.
- `tambahTengah(string nama, int harga, string namaSebelum)` : digunakan untuk menambah data produk baru di posisi tengah linked list, setelah produk dengan nama tertentu.

b. `hapusData(string nama)`: untuk menghapus data produk dari linked list berdasarkan nama produk.

c. `updateData(string nama, string namaBaru, int hargaBaru)` : untuk mengubah data produk berdasarkan nama produk.

d. `hapusAll()` : untuk menghapus seluruh data produk dari linked list.

e. `tampilkanData()`:  untuk menampilkan seluruh data produk yang ada dalam linked list.

Pada bagian main program, objek `LinkedList` diinisiasi menjadi `List`. Data produk awal ditambahkan menggunakan fungsi `tambahBelakang()` dengan menggunakan nama dan harga yang sudah ditentukan. Menu akan ditampilkan menggunakan perulangan `do-while`. User dapat memilih untuk menambah, menghapus, atau mengubah data produk sesuai dengan inputan angka dan data yang dimasukkan. Setelah itu untuk menampilkan data produk, program akan memanggil fungsi `tampilkanData()`. Jika ingin mengakhiri program dapat memilih No. `8. Exit`.


#### Full code Screenshot:
![Fullcode Unguided 2 #1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/859d5041-4a8d-441c-9d42-a14fe4115695)
![Fullcode Unguided 2 #2](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/6bef65db-da24-42ee-8d0d-d327fa98e68f)
![Fullcode Unguided 2 #3](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/15e3f6cb-e7ea-4ad3-a912-d41e3fa1ac7d)
![Fullcode Unguided 2 #4](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/67293c6c-4596-4a41-ba4e-3b7e31753658)
![Fullcode Unguided 2 #5](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/926d595d-377c-4cb9-882b-023ea4796314)
![Fullcode Unguided 2 #6](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/bfba5d27-ab41-4ae9-8e91-673578906912)


## Kesimpulan
Pada materi kali ini kita belajar mengenai Single & Double Linked List serta mereview sedikit materi Circular Linked List. Terdapat sebuah perbedaan mendasar antara linked list biasa dengan circular linked list. 

- Pada `circular linked list`, pointer `next` `tail` akan menunjuk kembali ke node `head` membentuk sebuah lingkaran. Sehingga,  tidak ada akhir yang sebenarnya dan traversal dari node terakhir akan kembali ke node pertama.
- Pada `single linked list` struktur data bersifat linear, dan node hanya memiliki 2 bagian, yaitu data dan pointer `next`. 
- Sedangkan pada `double linked list`, memiliki 3 bagian, yaitu `pointer next`, `pointer prev`, dan `data`.

Setiap jenis linked list memiliki karakteristiknya masing-masing. Single linked list efisien untuk penambahan dan penghapusan di ujung, double linked list memungkinkan akses maju dan mundur dengan mudah, dan circular linked list cocok untuk struktur data yang berulang dan berputar tanpa batas. Pemilihan jenis linked list yang tepat akan bergantung pada kebutuhan spesifik dari aplikasi yang sedang dikembangkan.

## Referensi
[1] H. Wijaya, W. S. Wardhono, and I. Arwani, “Implementasi Linked List pada Interaksi Antar Marker Augmented Reality untuk Operand dan Operator Aritmetika,” J. Pengemb. Teknol. Inf. dan Ilmu Komput. Univ. Brawijaya, vol. 2, no. 9, pp. 3328–3332, 2018.

[2] Agung Kurniman Putra, “Artikel Season 3 Single Linked List,” Fak. Komput., pp. 1–9, 2018.

[3] A. S. Nugraha, “Artikel Double Linked List Circulate,” no. Dllc, pp. 1–8, 2019.

[4] A. Dharma and H. H. Syahputra P, “Aplikasi Pembelajaran Linked List Berbasis Mobile Learning,” Riau J. Comput. Sci., vol. 4, no. 1, pp. 1–11, 2017.

[5] geeks for geeks (2024), Introduction to Circular Linked List [Online].Available : https://www.geeksforgeeks.org/circular-linked-list/ [diakses 8 Mei 2024]

[6] U. P. Jaya, “‘ Struktur Data ’ Program Studi,” 2016, [Online]. Available: https://ocw.upj.ac.id/files/Handout-TIF104-Modul-Praltikum-Struktur-Data.pdf

[7] A. Muhardian. (2017), Belajar Java OOP: Mengenal Constructor & Destructor dalam Java [Online].Available: https://www.petanikode.com/java-oop-constructor/ [diakses 8 Mei 2024].
