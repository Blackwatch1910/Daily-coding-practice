#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = n;
    while (row > 0) {
        int col = 1;
        while (col <= row) {
            cout << '*';
            col++;
        }
        row--;
        cout << endl;
    }
    return 0;
}