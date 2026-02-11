#include <iostream>
#include <string>
using namespace std;


// String Palindrome Check - (Time Complexity: O(n) , Space Complexity: O(1))
bool Palindrome(string str) {
    int start = 0;
    int end = str.length()-1;
    
    for (int i = 0; i < str.length(); i++) {
       if (str[start]   != str[end]) { // Compare characters at start and end indices
            return false; // Not a palindrome
        }
        start++; // Move start index forward
        end--;   // Move end index backward
    }
    return true; // It's a palindrome
}

//LeetCode 344. Reverse String - (Time Complexity: O(n) , Space Complexity: O(1))
void reverseString(char str[] , int n ) {
    int start = 0; 
    int end = n - 1; 

    while ( start < end ) {
        swap (str[start], str[end]); // Swap characters at start and end indices
        start++; // Move start index forward
        end--;   // Move end index backward 
}

    cout << "Reversed Character Array: " << str << endl; // Output: olleH
}


// LeetCode 709. To Lower Case - (Time Complexity: O(n) , Space Complexity: O(1))
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

    char s[] = "racecar"; // Null-terminated character array

    //lowerCase(str, (sizeof(str) - 1)); // Convert to lowercase
    //reverseString(str, (sizeof(str) - 1)); // Reverse the character array
    Palindrome(s) ? cout << "The string is a palindrome." << endl : cout << "The string is not a palindrome." << endl; // Check if the string is a palindrome
    return 0;
}