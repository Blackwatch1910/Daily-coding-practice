#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {
        int col = 1;
        for (int space = row; space < n; space++) {
            cout << ' ';
        }
        while (col <= row) {
            cout << '*';
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}