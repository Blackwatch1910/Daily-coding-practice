#include<iostream>
using namespace std;

int main () {
    int n;
    int arr[n];     // bad practice

    cout << "Enter size of array" << endl;
    cin >> n;

    cout << "Enter array values" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -1;
    int min = 100;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Max and min values are as follows:" << endl;
    cout << max << " " << min << endl;
}