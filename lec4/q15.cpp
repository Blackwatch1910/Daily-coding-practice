#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {
        int col = 1;
        while (col <= n - row + 1) {
            cout << col;
            col++;
        }
        int star = 1;
        for (star = 2; star < 2 * row ; star++){
            cout << '*';
        }
        for (int j = n - row + 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        row++;

    }
    return 0;
}