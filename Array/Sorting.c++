#include <iostream>
#include <algorithm>
using namespace std;

//Bubble Sort
void bubbleSort(int *arr, int n) { 
    for (int i = 0; i < n -1; i++) {             // Number of passes
        for (int j = 0; j < n - i - 1; j++) {    // Compare adjacent elements
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
        }
    }
    cout << "Pass " << i + 1 << ": ";   // Print the array after each pass
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}
    cout << "\n\nSorted Array: ";       // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " " ;
    }   
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n =  sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);   // Time Complexity: O(n^2) in worst case, O(n) in best case (when the array is already sorted)
    return 0;
};    
                        