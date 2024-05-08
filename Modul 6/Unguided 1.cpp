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
