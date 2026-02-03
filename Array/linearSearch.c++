#include <iostream>
using namespace std;

//Linear Search in an Array
void LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i+1 << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}

// Print Reverse of an Array
void PrintReverse(int arr[], int n) {
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
}

int main() {
    int arr[] = {4, 7, 8, 2, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int copyArr[n];
    for (int i = 0; i < n; i++) {
        copyArr[n - i - 1] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }

    PrintReverse(arr, n);
    //LinearSearch(arr, n ,10);


    return 0;
}
 