#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        //int temp = i;
        while (j <= i) {
            cout << i-j+1 << " ";
            j++;
            //temp++;
        }
        cout << endl;
        i++;
    }
}