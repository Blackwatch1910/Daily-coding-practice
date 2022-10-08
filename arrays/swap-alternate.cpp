#include<iostream>
using namespace std;

int swapAlternate(int arr[], int n) {
    for (int i = 0; i < n; i+=2) {
        if (i + 1 < n) {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    return 0;
}

int main () {
    int even[8] = { 1, 10, 44, 98, 32, 82, 43, 9 };
    int odd[5] = {10, 72, 32, 99, 6};
    swapAlternate(odd, 5);
    cout << "odd array after swapping" << endl;
    for (int i = 0; i < 5; i++) {
        cout << odd[i] << ' ';
    }
    cout << endl;
    return 0;
}