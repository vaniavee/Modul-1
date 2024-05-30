// MODUL 9 - REKURSIF
// JUMAT, 24 MEI 2024
// GUIDED 2 - REKURSIF TIDAK LANGSUNG (INDIRECT RECURSION)

#include <iostream>
using namespace std;
// deklarasi dan definisi fungsi
void functionB (int n);
void functionA (int n) { // fungsi pertama yg memulai rekursif tdk langsung
    if (n > 0) {
        cout << n << " ";
        functionB(n-1) ; // panggilan rekursif tidak langsung
    }
}

void functionB (int n){ // fungsi kedua yg melanjutkan rekursif tdk langsung
    if (n > 0){
        cout << n << " ";
        functionA (n/2); // panggilan rekursif tidak langsung
    }
}
// main program
int main()
{
    int num = 5; // deklarasi dan inisiasi variabel `num` dengan nilai 5
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    // Mencetak nama pembuat program
    cout << endl;
    cout << "By : Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}