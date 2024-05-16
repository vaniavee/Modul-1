#include <iostream> // untuk input-output
#include <stack> // untuk menggunakan struktur data stack
#include <cctype> // fungsi-fungsi untuk karakter handling, seperti isalnum dan tolower
#include <string> // untuk manipulasi string
using namespace std;

// Fungsi untuk membersihkan kalimat dari karakter non-alfanumerik dan mengubah huruf menjadi kecil
string clean_sentence(const string& sentence) {
    string cleaned;
    for (char ch : sentence) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}
// Fungsi untuk memeriksa apakah kalimat adalah palindrom menggunakan stack
bool is_palindrome(const string& sentence) {
    string cleaned = clean_sentence(sentence);
    stack<char> char_stack;

    // Memasukkan karakter ke dalam stack
    for (char ch : cleaned) {
        char_stack.push(ch);
    }

    // Memeriksa apakah kalimat tersebut palindrom
    for (char ch : cleaned) {
        if (ch != char_stack.top()) {
            return false;
        }
        char_stack.pop();
    }
    return true;
}
// main program
int main() {
    string input_sentence;
    
    cout << "Masukkan kalimat: ";
    getline(cin, input_sentence);

    // Memeriksa apakah kalimat tersebut palindrom
    if (is_palindrome(input_sentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl; // jika kata/ kalimat adalah palindrom
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl; // jika kata/ kalimat bukan palindrom
    }
    // Mencetak nama pembuat program
    cout << endl;
    cout << "Vania Noverina - 2311110031" << endl;
    cout << endl;
    return 0;
}

