// MODUL 2 ARRAY
// JUMAT. 22 MARET 2024
// GUIDED 1 PROGRAM INPUT ARRAY 3 DIMENSI

#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Array
    int arr [2] [3] [3];

    //Input Elemen
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << "Input Array[" << x << "] [" << y << "] [" << z << "] = ";
                cin >> arr [x] [y] [z];
            }
        }
        cout << endl; 
    }
    //Output Array
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << "Data Array[" << x << "] [" << y << "] [" << z << "] = " << arr [x] [y] [z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan Array
    for (int x = 0; x< 2; x++)
    {
        for (int y = 0; y <3; y++)
        {
            for (int z = 0; z <3; z++)
            {
                cout << arr[x] [y] [z] << ' '; // di modul pakai ends tapi gak bisa :D 
            } 
            cout << endl; 
        }
        cout << endl;
    }
}