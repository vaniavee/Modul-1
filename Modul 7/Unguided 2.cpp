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
