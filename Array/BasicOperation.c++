#include <iostream>
using namespace std;

//Printing Subarrays of an Array 
void printSubarrays(int *arr, int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
        cout << ",";
        }
        cout << endl;
    }
}


int main() {
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printSubarrays(arr, n);  // Time Complexity: O(n^3)
    return 0;
}