// MODUL 6 - SINGLE & DOUBLE LINKED LIST
// GUIDED 1 - SINGLE LINKED LIST NON SICULAR

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
