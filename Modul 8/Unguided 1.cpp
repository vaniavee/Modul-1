#include <iostream>
#include <algorithm>
using namespace std;

int H[50]; // untuk menyimpan elemen dalam heap
int heapSize = -1; // inisiasi variabel

// untuk menentukan letak parents
int parent(int i) {
    return (i - 1) / 2;
}
// untuk menentukan left child
int leftChild(int i) {
    return (2 * i) + 1;
}
// menentukan right child
int rightChild(int i) {
    return (2 * i) + 2;
}
// swap nilai parent jika nilai child lebih besar (swap node keatas)
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}
// swap node ke bawah
void shiftDown(int i) {
    int maxIndex = i; // priority
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) { // jika nilai left child lebih besar dari `maxIndex`
        maxIndex = l; // maka `maxIndex` akan diupdate dengan indeks child 
    }

    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) { // jika nilai right child lebih besar dari `maxIndex`
        maxIndex = r; // maka `maxIndex` akan diupdate dengan indeks child
    }

    if (i != maxIndex) { // jika `maxIndex` berbeda dengan indeks node saat ini
        swap(H[i], H[maxIndex]); // swap nilai dari kedua node
        shiftDown(maxIndex); // melakukan shiftDown
    }
}
// menambahkan elemen baru
void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}
// menghapus elemen dengan nilai maksimum dari heap
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}
// mengubah prioritas elemen dlm heap
void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}
// mengembalikan nilai maksimum
int getMax() {
    return H[0];
}
// menghapus elemen 
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}
// mencetak isi heap
void printHeap() {
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << endl;
}
// main program
int main() {
    int n, element;
    cout << "Enter number of elements to insert into the heap: "; // input panjang elemen
    cin >> n;
    // memasukkan elemen kedalam heap
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        insert(element);
    }
    // Menampilkan heap
    cout << "Priority Queue: ";
    printHeap();
    // mengeluarkan nilai maximum
    cout << "Node with maximum priority: " << extractMax() << "\n";
    cout << "Priority queue after extracting maximum: ";
    printHeap();
    // Memasukkan indeks elemen yg ingin diubah dan nilai elemen baru
    cout << "Enter the index to change priority and new priority value: ";
    int index, newPriority;
    cin >> index >> newPriority;
    changePriority(index, newPriority); // mengubah elemen tertentu
    // heap setelah mengubah elemen tertentu
    cout << "Priority queue after priority change: ";
    printHeap();
    // Memasukkan indeks dari elemen yg ingin dihapus
    cout << "Enter the index of the element to remove: ";
    cin >> index;
    remove(index);
    // heap setelah penghapusan indeks elemen tertentu
    cout << "Priority queue after removing the element: ";
    printHeap();

    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
} // akhir dari program
