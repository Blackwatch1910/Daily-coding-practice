#include<iostream>
using namespace std;

int main () {
    int n;
    cout << n << endl;

    // differences between cin and cin.get()

    int a;
    cin >> a;
    int b;
    b = cin.get();      // will intake the character entered including space, tab or enter

    cout << "Value of a and b is:" << a << " and " << b << endl;
}