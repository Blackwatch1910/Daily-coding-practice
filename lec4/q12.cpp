#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int i = 1;
    char chi = 'A';
    while (i <= n) {
        char chj = chi;
        int j = 1;
        while (j <= n) {
            cout << chj << " ";
            chj++;
            j++;
        }
        chi++;
        i++;
        cout << endl;
    }
}