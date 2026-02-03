#include <iostream>
using namespace std;

//Find Largest Element in an Array
int main() {
    int arr[]= {4, 7, 8, 2, 3, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max= arr[0];

    for (int i=0; i<n; i++) {
        if (arr[i]>max){
            max = arr[i];
         }
    }
     cout<<"Largest Element is: "<<max<<endl;
return 0;
}

/*
int main() {
    int marks[5]; //declaration of array
    // marks[0] = 1; //initialization of array 
    int n = sizeof(marks) / sizeof(marks[0]);
    // cout << marks[0] << endl;

    // cout << "Size of marks array: " << sizeof(marks) << " bytes" << endl;
    // cout << "Number of elements in marks array: " << sizeof(marks) / sizeof(marks[0]) << endl;

   
for (int i = 0; i < n; i++) {
        cout << "Enter marks for element " << i << ": ";
        cin >> marks[i];
    }

    cout << "You entered the following marks:" << endl;

for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": " << marks[i] << endl;
    }
    return 0;

}
*/