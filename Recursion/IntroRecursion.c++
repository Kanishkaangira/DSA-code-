#include <iostream>
using namespace std;

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
    //print(5);  
    cout <<sum(5);   
    return 0;
}