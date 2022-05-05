#include<iostream>
using namespace std;

int main () {
    char ch;
    cin >> ch;

    int ascii_of_ch = ch;
    if (ascii_of_ch >= 65 && ascii_of_ch <= 90)
        cout << "BLOCK LETTERS" << endl;
    
    else if (ascii_of_ch >= 97 && ascii_of_ch <= 122)
        cout << "lowercase letters" << endl;

    else if (ascii_of_ch >= 48 && ascii_of_ch <= 57)
        cout << "numbers" << endl;
    
    else 
        cout << "Special characters" << endl;
}