#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 0;
        //int temp = i;
        while (j < i) {
            cout << i+j << " ";
            j++;
            //temp++;
        }
        cout << endl;
        i++;
    }
}