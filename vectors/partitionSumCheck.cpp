//check that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array.
#include <bits/stdc++.h>
using namespace std;

bool sumCheck(vector<int> &arr,int totalSum){
    int sumPrefix=0;
    for(int i=0;i<arr.size();i++){
        sumPrefix += arr[i];
        if(sumPrefix == (totalSum-sumPrefix)){
            return true;
        }
    }
    return false;
    }

int main() {
    int n,sum=0;
    cout << "enter array length: ";
    cin >> n;
    vector <int> arr(n);
    cout << "enter array elemnts\n";
    for(int &i : arr){
        cin >> i;
        sum += i;

    }
    cout << sumCheck(arr,sum) << endl;
    
    return 0;
}