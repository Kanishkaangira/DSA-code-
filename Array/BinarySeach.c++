#include <iostream>   //for input output
#include <algorithm>  //for sort function
using namespace std;  

int main() {

    //input array elements
    int x;
    cout << "Enter number of elements: ";
    cin >> x;

    //making array of size x
    int arr[x];
    cout << "Enter " << x << " elements in array: " << endl;
    for (int i = 0; i < x; i++) {
        cin >> arr[i] ;
    }    
    
    cout << "Array elements are: " << endl;
    for (int i = 0; i < x; i++) {   
        cout << arr[i] << " " ;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl;

     // Sort array (mandatory for binary search)
    sort(arr, arr + x);

    cout << "Sorted array:\n";
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    //searching element
    int key ;
    cout << "Enter the element to be searched: " << endl;
    cin >> key ;
    int start = 0, end = n-1;

     // flag to check if element is found or not
    bool found = false;

    //Binary Search Logic
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key){
            found = true;
             cout << "Element found at index: " << mid << endl; 
            break;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    //if element not found
    if (!found){
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
