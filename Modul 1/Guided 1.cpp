// TIPE DATA
// JUMAT, 15 MAR 24

// GUIDED 1 TIPE DATA PRIMITIF
#include <iostream>
using namespace std;

// Main program
int main()
{
    char op; // op : operator
    float num1, num2; // operan/bil. yg akan digunakan
    cout << "Masukkan operator: ";
    cin >> op;
    cout <<"\n Masukkan Bilangan ke-1 dan ke-2: ";
    cin >> num1 >> num2;

    switch(op) // pengkondisian untuk memilih case yg akan dijalankan
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1*num2;
        break;
    case '/':
        cout << num1/num2;
        break;
    default: // jika tdk ada kondisi yg terpenuhi
        cout << "Error! Operator is not correct";
    }
return 0;
} 