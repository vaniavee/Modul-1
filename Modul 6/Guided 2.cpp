// MODUL 6 
// GUIDED 2 - DOUBLE LINKED LIST NON-CIRCULAR
// VANIA NOVERINA -2311110031

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
    return 0;
}
