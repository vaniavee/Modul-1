// JUMAT 17 MEI 2024
// MODUL 8 - PRIORITY QUEUE DAN HEAPS

#include <iostream>
#include <algorithm>

int H[50]; // array untuk menyimpan elemen-elemen priority queue
int heapSize =-1; // variabel untuk menyimpan jumlah elemen dari priority queue
// untuk menentukan letak parents
int parent(int i) {
    return (i-1) / 2;
}
// menentukan indeks dari left child
int leftChild(int i) {
    return ((2 * i) + 1);
}
// menentukan indeks dari right child
int rightChild(int i) {
    return ((2 * i) + 2);
}
// swap nilai parent jika nilai child lebih besar
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}
// swap node kebawah
void shiftDown(int i) {
    int maxIndex = i; // priority
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }

int r = rightChild(i);
if (r <= heapSize && H[r] > H[maxIndex]) {
    maxIndex = r;
}

if (i != maxIndex) {
    std::swap(H[i], H[maxIndex]);
    shiftDown(maxIndex);
    }
}
// menambahkan elemen baru
void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}
// mengambil elemen dengan priority terbesar
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize-1;
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
// menghapus elemen indeks tertentu 
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}
// Main program
int main() {
    insert(45); // input angka 45 kedalam heap
    insert(20);// input angka 20 kedalam heap
    insert(14);// input angka 4514 kedalam heap
    insert(12); // input angka 12 kedalam heap
    insert(31); // input angka 31 kedalam heap
    insert(7); // input angka 7 kedalam heap
    insert(11); // input angka 11 kedalam heap
    insert(13); // input angka 13 kedalam heap
    insert(7); // input angka 7 kedalam heap
    
    std::cout << "Priority Queue : "; // memasukkan angka kedalam priority queue
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    
    std::cout << "\n";
    std::cout << "Node with maximum priority : " << extractMax() << "\n"; // mengambil angka dgn nilai terbesar
    std::cout << "Priority queue after extracting maximum : "; // queue setelah nilai maks. diambil
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    changePriority(2, 49); // mengubah nilai angka indeks ke-2 menjadi 49
    std::cout << "Priority queue after priority change : "; // mencetak priority queue setelah mengubah nilai tertentu
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    remove(3); // menghapus elemen indeks ke-3
    // mencetak queue setelah menghapus elemen
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    // Mencetak nama pembuat program
    std::cout  << "\n";
    std::cout  << "Vania Noverina - 2311110031" << "\n";
    std::cout  << "\n";
    return 0;
}
