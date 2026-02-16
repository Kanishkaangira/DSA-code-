#include <iostream>
using namespace std;

//Check if Array is Sorted
bool isSorted(int arr[], int n, int i) {
    if (i == n - 1) {                   //Base Case
        return true;
    }
    if (arr[i] > arr[i + 1]) {            
        return false;
    }
    return isSorted(arr,n,i+1);    //Recursive Case
}


//Print Fibonaci Number
int fib(int n) {
    if (n == 0) {                       //Base Case
        return 0;
    }
    if (n == 1) {                       //Base Case
        return 1;
    }
    return fib(n - 1) + fib(n - 2);     //Recursive Case
}


//Sum of N Natural Numbers
int sum(int n) {
    if (n == 0) {                       //Base Case
        return 0;
    }
    return n + sum(n - 1);              //Recursive Case 
}


//Factorial of a number
int fact(int n) {
    if (n == 0) {                       //Base Case
        return 1;
    }
    return n * fact(n - 1);             //Recursive Case
}


//Print a number
void print(int n) {
    if (n == 0) {                       //Base Case
        return;
    }
    cout << n << endl;                  //Working
    print(n - 1);                       //Recursive Case
}


int main () {
    int arr[5]= {1,2,3,4,5}; 
    cout << isSorted(arr,5,0);
    //print(5);  
    //cout <<sum(5); 
    //cout << fact(5);  
    return 0;
}