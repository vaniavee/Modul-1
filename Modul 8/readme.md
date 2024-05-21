# <h1 align="center">Laporan Praktikum Algoritma dan Struktur Data</h1>
# <h1 align="center">Modul 8 - Priority Queue dan Heaps</h1>
<p align="center">Vania Noverina</p>
<p align="center">2311110031</p>

## Dasar Teori
## Priority Queue
Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil sebelum elemen dengan nilai prioritas lebih rendah[1]. Priority Queue sangat bermanfaat dalam situasi di mana beberapa elemen memiliki kepentingan yang berbeda dan harus diprioritaskan dalam proses pengelolaan antrian

Dalam priority queue, setiap elemen memiliki nilai prioritas yang terkait dengannya. Ketika menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika menambahkan elemen dengan nilai prioritas tinggi ke priority queue, elemen tersebut mungkin dimasukkan di dekat bagian depan antrian, sementara elemen dengan nilai prioritas rendah mungkin dimasukkan di dekat bagian belakang.[1]

Dalam implementasi ini ada 3 pokok atribut yaitu heaps, comparator, dan last. Dengan menggunakan fasilitas heap ini kita bisa melakukan insert atau remove elemen dalam kompleksitas waktu logaritmik. Pada priority Queue ini, akan dibentuk sebuah pohon biner yang seimbang yang dapat disebut dengan Heap.[2] 

### Fungsi/ Kegunaan Priority Queue dalam Algoritma
- `Algoritma Dijkstra (Shortest Path)` : digunakan untuk memilih simpul dengan jarak terpendek yang belum diproses.
- `Algoritma Prim (Minimum Spanning Tree)` : digunakan untuk memilih tepi dengan bobot terkecil yang menghubungkan simpul yang sudah termasuk dalam MST dengan simpul yang belum termasuk.
- `Huffman Coding (Compression)` : digunakan untuk membangun pohon Huffman dengan memilih dua simpul dengan frekuensi terendah untuk digabungkan secara berulang.
- `Simulasi Sistem dan Penjadwalan Tugas` : digunakan untuk mengelola kejadian yang harus diproses berdasarkan waktu atau prioritas mereka.
- `Algoritma A (Pathfinding)` : digunakan untuk mengelola open set, yaitu simpul yang perlu diperiksa berdasarkan perkiraan biaya terendah.
- `Job Scheduling (Penjadwalan Tugas)` : digunakan dalam penjadwalan tugas untuk memprioritaskan tugas berdasarkan deadline atau waktu eksekusi.

![priority queue](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/4302dea0-0e67-489e-816a-8d999a973770)

## Heaps

Heap adalah suatu data structure yang mirip dengan pohon binary, tetapi memiliki sifat khusus yaitu setiap node memiliki nilai yang lebih besar atau lebih kecil daripada nilai node-node anaknya. Heap dapat dibagi menjadi dua jenis, yaitu max heap dan min heap. Max heap adalah heap yang memiliki sifat nilai node induk lebih besar atau sama dengan nilai node anaknya, sedangkan min heap adalah heap yang memiliki sifat nilai node induk lebih kecil atau sama dengan nilai node anaknya.

### Operasi pada heap :[3]
- `insert(p)`: Menambahkan elemen baru kedalam heap.
- `extractMax()`: Mengambil elemen dengan prioritas terbesar.
- `remove(i)`: Menghapus elemen tertentu.
- `getMax()`: Mengembalikan nilai maksimum. 
- `changePriority(i, p)`: mengubah nilai tertentu dari priority queue.

![MinHeapAndMaxHeap](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/b668f651-6e76-4a90-8d49-805189e93367)

## Guided 

### 1. 

```C++
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
```
#### Output :

![Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/096fbb48-a479-42d5-9e9f-4a81a952591f)

Kode diatas merupakan program untuk menentukan priority queue menggunakan heap.

Pertama program akan mendeklarasikan array `H` untuk menyimpan elemen-elemen dari priority queue. Variabel `heapSize` digunakan untuk menyimpan jumlah elemen yang ada dalam priority queue.

Setelah itu program akan memasukkan nilai elemen-elemen kedalam priority queue menggunakan fungsi `insert()`. Melalui fungsi `shiftDown` program akan terus menggeser node ke bawah sampai semua child node memiliki nilai yang lebih kecil atau sama dengan nilai node tersebut. Lalu program akan mengambil angka dengan nilai terbesar menggunakan fungsi `extractMax()` dan mencetak hasilnya. Kemudian prioritas dari indeks ke-2 akan diubah menjadi 49 melalui fungsi `changePriority`. Terakhir program akan menghapus angka yang berada pada indeks ke-3 dengan fungsi `remove()`. Setelah setiap perubahan program akan menampilkan hasil priority queue. 

Beberapa fungsi yang digunakan yaitu :
1. `parent(int i)`: digunakan untuk menentukan indeks dari parent node.
2. `leftChild(int i)` : digunakan untuk menentukan indeks dari left child
3. `rightChild(int i)`:digunakan untuk menentukan indeks dari right child
4. `shiftUp(int i)`: untuk menggeser node ke atas dalam heap, sampai node tersebut berada pada posisi yang tepat. 
5. `shiftDown(int i)` : untuk menggeser node ke bawah dalam heap, sampai node tersebut berada di posisi yang tepat.
6. `insert(int p)`: untuk menambahkan elemen baru ke dalam priority queue.
7. `extractMax()`: untuk mengambil elemen dengan prioritas terbesar.
8. `changePriority(int i, int p)` : fungsi untuk mengubah prioritas dari elemen yang berada pada indeks tertentu.
9. `getMax()` : untuk mengembalikan nilai maksimum.
10. `remove(int i)` : Fungsi untuk menghapus elemen indeks tertentu.

#### Full code Screenshot:

![Fullcode Guided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/5fb2f560-8c32-4305-9a48-61a87ce6dd43)


## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.

```C++
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
```
#### Output

![Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/17458007-e122-4d40-8763-f2d3f0c54ca7)

### Interpretasi: 
Pertama program akan mendeklarasikan variabel `int H[50]` untuk menyimpan elemen-elemen dalam heap. Variabel `int heapSize = -1` digunakan untuk menyimpan jumlah elemen dalam heap. Variabel `int n, element` digunakan untuk menyimpan jumlah elemen dan elemen yang diinputkan user

Setelah itu program akan meminta user untuk memasukkan panjang elemen dan nilai elemen. Kemudian program akan menambahkan elemen kedalam heap dan mencetaknya. Melalui fungsi `parent(int i), leftChild(int i), dan rightChild(int i)` program akan menentukan indeks parent, left child, dan right child. Jika nilai parent lebih kecil dari nilai child program akan memindahkan node ke bawah dengan memanggil fungsi `shiftDown(int i)` dan jika nilai child lebih besar dari parent program akan memindahkan node ke atas dengan fungsi `shiftUp(int i)`. 

Kemudian, melalui `extractMax()` program akan mengambil elemen dengan nilai maksimum dan mencetaknya. Lalu program akan mencetak isi heap setelah nilai maksimum diambil. Setelah itu user akan diminta untuk memasukkan indeks elemen yang ingin diubah dan nilai elemen barunya dan hasilnya akan ditampilkan. Terakhir user akan diminta untuk memasukkan indeks dari elemen yang ingin dihapus lalu program akan mencetak isi heap. 

#### Full code Screenshot:

![Fullcode Unguided 1](https://github.com/vaniavee/Praktikum-Struktur-Data-Assignment/assets/160705515/1a2e0273-e440-4b48-8165-78d6d482a747)


## Kesimpulan
Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil sebelum elemen dengan nilai prioritas lebih rendah. Pada priority Queue, akan dibentuk sebuah pohon biner yang seimbang yang dapat disebut dengan Heap. Heap adalah suatu data structure yang mirip dengan pohon binary, tetapi memiliki sifat khusus yaitu setiap node memiliki nilai yang lebih besar atau lebih kecil daripada nilai node-node anaknya. Heap dapat dibagi menjadi dua jenis, yaitu max heap dan min heap. Max heap adalah heap yang memiliki sifat nilai node induk lebih besar atau sama dengan nilai node anaknya, sedangkan min heap adalah heap yang memiliki sifat nilai node induk lebih kecil atau sama dengan nilai node anaknya.

Pada Unguided kali ini kita belajar bagaimana mengimplementasikan priority queue menggunakan heap dengan inputan dari user dengan fungsi seperti shiftUp, shiftDown, insert, extractMax(), changePriority(), getmax, dan remove.


## Referensi
[1] GeeksforGeeks. (2023), What is Priority Queue | Introduction to Priority Queue [Online]. Available : https://www.geeksforgeeks.org/priority-queue-set-1-introduction/ [diakses 20 Mei 2024]

[2] A. Nurcholis, S. Batara N, and M. Octamanullah, “Penerapan struktur data Heap Priority Queue pada algoritma Djikstra untuk mendapatkan kompleksitas O((n + m)log n),” pp. 1–4, 1959.

[3] GeeksforGeeks. (2023), Priority Queue using Binary Heap [Online]. Available : https://www.geeksforgeeks.org/priority-queue-using-binary-heap/ 
