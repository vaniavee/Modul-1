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
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Produk " << nama << " tidak ditemukan" << endl;
            return;
        }

        if (current == head) {
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
        } else if (current == tail) {
            tail = tail->prev;
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
            case 6: 
                list.hapusAll();
                break;
            case 7:
                list.tampilkanData();
                break;
            case 8:
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (choice != 8);
    return 0;
}