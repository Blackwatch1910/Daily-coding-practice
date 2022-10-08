#include<iostream>
using namespace std;

int main () {
    cout << "Enter temperature in fahrenheit:" << endl;
    float f;
    cin >> f;

    float c = (f - 32) * 5.0/9.0;

    cout << "Converted temperature in celsius:" << c << endl;


}