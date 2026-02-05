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


//Maximum Subarray Sum - Brute Force Approach
void maxSubarrySum1(int *arr, int n) {
    int maxSum = INT8_MIN; 

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currsum = 0;
            for (int k = start; k <= end; k++) {
                currsum += arr[k];
            }  
            cout << currsum << " ";
            maxSum = max(maxSum, currsum);
            }
        cout << endl;
    }
    cout << "Max Subarray Sum is: " << maxSum << endl;
}


//Maximum Subarray Sum - Optimized Approach
void maxSubarrySum2(int *arr, int n) {
    int maxSum = INT8_MIN; 

    for (int start = 0; start < n; start++) {
        int currsum = 0;
        for (int end = start; end < n; end++) {
            currsum += arr[end];
            cout << currsum << " ";
            maxSum = max(maxSum, currsum);
            }
        cout << endl;
    }
    cout << "Max Subarray Sum is: " << maxSum << endl;
}


//Maximum Subarray Sum - Kadane's Algorithm (Dynamic Programming Approach)
void maxSubarraySum3(int *arr, int n) {
    int maxSum = INT8_MIN; 
    int currsum = 0;

    for (int start = 0; start < n; start++) {
            currsum += arr[start] ;
            if (currsum < 0) {
                currsum = 0;
            }
            maxSum = max(maxSum, currsum);
    }
    cout << "Max Subarray Sum is: " << maxSum << endl;
}


int main() {
    int arr[]= {2,-3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //printSubarrays(arr, n);  // Time Complexity: O(n^3)
    //maxSubarrySum1(arr, n);  // Time Complexity: O(n^3)
    //maxSubarraySum2(arr, n);  // Time Complexity: O(n^2)
    maxSubarraySum3(arr, n);  // Time Complexity: O(n)
}