#include <iostream>
#include <algorithm>
using namespace std;

//Bubble Sort -: Laegest element is moved to the end of the array in each pass. Time Complexity: O(n^2) in worst case, O(n) in best case (when the array is already sorted)
        
void bubbleSort(int *arr, int n) { 
    for (int i = 0; i < n -1; i++) {    
        bool swapped = false;         // Number of passes
        for (int j = 0; j < n - i - 1; j++) {    // Compare adjacent elements
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }
    if (!swapped) {
        break;
    }
}
    cout << "\n\nSorted Array: ";       // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " " ;
    }   
    cout << endl;
}


// Selection Sort -: The smallest element is moved to the beginning of the array in each pass. Time Complexity: O(n^2) in all cases, as it always requires two nested loops to complete the sorting process.
void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;                           // Assume the minimum is the first element
        for (int j = i + 1; j < n; j++) {           // Iterate through the unsorted elements
            if (arr[j] < arr[minIndex]) {           //Update minIndex if a smaller element is found
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);                // Swap the found minimum element with the first element
    }
    cout << "\n\nSorted Array: ";                   // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " " ;
    }   
    cout << endl;
}


// Insertion Sort -: Each element is compared with the elements before it and inserted into its correct position. Time Complexity: O(n^2) in worst case, O(n) in best case (when the array is already sorted)
void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];                          // Store the current element as key
        int j = i - 1;                            // Initialize j to the index of the last sorted element
        while (j >= 0 && arr[j] > key) {         // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;                         // Insert the key at its correct position in the sorted subarray
    }
    cout << "\n\nSorted Array: ";               // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " " ;
    }   
    cout << endl;
}


// Counter Sort -: It counts the occurrences of each unique element in the input array and uses this information to place the elements in the correct position in the output array. Time Complexity: O(n + k), where n is the number of elements in the input array and k is the range of the input values.
void countingSort(int *arr, int n)  {
    int maxElement = *max_element(arr, arr + n);  // Find the maximum element in the array
    int count[maxElement + 1] = {0};              // Create a count array to store the count of each unique object
    int output[n];                               // Output array to store the sorted elements

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;                         // Count each element in the input array
    }

    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];                // Update the count array to store the cumulative count
    }

    for (int i = n - 1; i >= 0; i--) {          // Build the output array
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {               // Copy the sorted elements back to the original array
        arr[i] = output[i];
    }
    
    cout << "\n\nSorted Array: ";               // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " " ;
    }   
    cout << endl;
}


int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n =  sizeof(arr) / sizeof(arr[0]);

    //bubbleSort(arr, n);   
    //selectionSort(arr, n);
    //insertionSort(arr, n);
    //countingSort(arr, n);
    return 0;
};    
                        