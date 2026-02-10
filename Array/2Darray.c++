#include <iostream>
using namespace std;

// Taking input for a 2D array
void Input2DArray(int matrix[][3], int m, int n) {
    cout << " Enter elements in a 2D array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

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


// LeetCode 1572. Matrix Diagonal Sum
void diagonalSum(int mat[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i]; // Primary diagonal
        if (i != n - 1 - i) { // Avoid double counting the center element in odd-sized matrices
            sum += mat[i][n - 1 - i]; // Secondary diagonal
        }
    }
    cout << "Diagonal Sum: " << sum << endl;
} 


// LeetCode 240. Search a 2D Matrix II  (using staircase search algorithm)
void search2DMatrix(int matrix[][4], int m, int n , int key) {
    int row =0;
    int col = n - 1;
    while (row < m && col >= 0) {
        if (matrix[row][col] == key) {
            cout << "Element found at position: (" << row << ", " << col << ")" << endl;
            return;
        } else if (matrix[row][col] > key) {
            col--; // Move left 
        } else {
            row++; // Move down 
}
}
}


int main() {
    int matrix[1][3];
    int m= 1, n= 3;

    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    
    // Accessing elements in a 2D array
    //cout << "Element at row 1, column 2: " << arr[0][1] << endl; // Output: 2

    //traversingSpiralMatrix(matrix, m, n); // Time Complexity: O(m*n) and Space Complexity: O(1)
    //diagonalSum(matrix1, n); // Time Complexity: O(n) and Space Complexity: O(1)
    search2DMatrix(matrix2, 4, 4, 15); // Time Complexity: O(m+n) and Space Complexity: O(1)
    return 0;
}