#include <iostream>
using namespace std;

int main() {
    int row, cols;
    cout <<"Enter the number of rows: ";
    cin >> row;
    cout <<"Enter the number of columns: "; 
    cin >> cols;

    // Dynamically allocate a 2D array
    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[cols];
    }

    //Data Store
    int x = 1;
    for (int i=0; i<row; i++) {
    for (int j=0; j<cols; j++) {
        matrix[i][j] = x++;
        cout << matrix[i][j] << " ";
    }
    cout << endl;
    }

    delete[] matrix; // Deallocate the memory

    return 0;
}