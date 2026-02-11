#include <iostream>
#include <string>
using namespace std;


// LeetCode 709. To Lower Case
void lowerCase(char str[] , int n) {

    for ( int i = 0; i < n; i++) {
        int ch = str[i];                       // ASCII value of the character at index i
        if (ch >= 'a' && ch <= 'z') {          // If the character is already lowercase, skip it   
            continue;
        } else  {
            str[i] = ch - 'A'+ 'a';            // Convert uppercase to lowercase by adjusting the ASCII value  
        }
    }
     cout << "Lowercase Character Array: " << str << endl; // Output: code
}

int main() {
    char str[] = "CoDeS"; // Null-terminated character array'e  
    //cout << "Character Array: " << str << endl; // Output: CODE 

    lowerCase(str, (sizeof(str) - 1)); // Convert to lowercase
    return 0;
}