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