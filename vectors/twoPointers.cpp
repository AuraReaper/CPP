#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
//sort a given array containing only 0 and 1 and return the output containing 0 first and 1 at last

void sortArray(vector<int> &arr){
    int zeroCount = 0;
    for(int i : arr){
        if(i==0){
            zeroCount++;
        }
    }
    for(int j=0;j<arr.size();j++){
         if(j<zeroCount){
            arr[j]=0;
        }
        else{
            arr[j]=1;
        }
    }
}

int main() {
    int n;
    cout << "array length: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements containing only 0 and 1\n";
    for(int &i : arr){
        cin >> i;
    }
    sortArray(arr);
    cout << "answer: ";
    for(int l : arr){
        cout << l;
    }
    return 0;
}
