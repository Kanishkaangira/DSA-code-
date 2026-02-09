#include <iostream>
using namespace std;

// // Iterating through a 2D array
void Print2DArray(int arr[][3], int m, int n) {
    cout << "Elements in the 2D array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// LeetCode 54. Spiral Matrix
void traversingSpiralMatrix(int matrix[][3], int m, int n) {
    int startRow = 0, endRow = m - 1;
    int startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
    //Top
    for (int j = startCol; j <= endCol; j++) {
        cout << matrix[startRow][j] << " ";
    }
        cout<<endl;

    //Right
    for (int i = startRow + 1; i <= endRow; i++) {
        cout << matrix[i][endCol] << " ";
    }
        cout<<endl;

    //Bottom
    if (startRow < endRow) {
    for (int j = endCol - 1; j >= startCol; j--) {
        cout << matrix[endRow][j] << " ";
    }
}
        cout<<endl;

    if (startCol < endCol) {    
    //Left
    for (int i = endRow - 1; i > startRow; i--) {
        cout << matrix[i][startCol] << " ";
    } 
}  
        cout<<endl;

    startCol++; endCol--;
    startRow++; endRow--;
}


}


int main() {
    int matrix[1][3];
    int m= 1, n= 3;
    
    // Accessing elements in a 2D array
    //cout << "Element at row 1, column 2: " << arr[0][1] << endl; // Output: 2

    // Taking input for a 2D array
    cout << " Enter elements in a 2D array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    traversingSpiralMatrix(matrix, m, n); // Time Complexity: O(m*n) and Space Complexity: O(1)

    return 0;
}