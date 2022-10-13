#include<bits/stdc++.h>
using namespace std;

// codeStudio question
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int res = 0;
	for (int i = 0; i < arr.size(); i++) {
        res = res ^ arr[i];
    }
    
    for (int i = 1; i < arr.size(); i++) {
        res = res ^ i;
    }
    
    return res;
}
