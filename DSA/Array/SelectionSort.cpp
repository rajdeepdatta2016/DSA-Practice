#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }

        if(min != i) {
            swap(arr[min], arr[i]);
        }
    }
    cout << "Sorted Array is : " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

// TC => O(n^2)...
// SC => O(1)...