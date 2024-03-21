#include <iostream> // input processor directive
#include <map> // input map
using namespace std;

// Main Program
int main() {
    map <int, string> cast; // membuat map dengan key int dan bertipe data string

    // Menginputkan cast
    cast[0] = "Harry Potter";
    cast[1] = "Hermione Granger";
    cast[2] = "Ron Weasley";
    cast[3] = "Draco Malfoy";
    cast[4] ="Sirius Black" ;

    // Menampilkan cast yang sudah dibuat
    cout << "=======CAST LIST======" << endl;
    cout << "Cast Pertama: " << cast[0] << endl;
    cout << "Cast Kedua: " << cast[1] << endl;
    cout << "Cast Ketiga: " << cast[2] << endl;
    cout << "Cast Keempat: " << cast[3] << endl;
    cout << "Cast Kelima: " << cast[4] << endl;

    return 0;
}