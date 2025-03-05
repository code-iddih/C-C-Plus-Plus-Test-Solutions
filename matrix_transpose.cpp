#include <iostream>
#include <vector>

using namespace std;

// Function to transpose the matrix
void transposeMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    // Creating a new matrix to store the transposed version
    vector<vector<int>> transposed(cols, vector<int>(rows));

    // Printing the original matrix
    cout << "Original matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";  // Printing original matrix
            transposed[j][i] = matrix[i][j];  // Storing the transposed value
        }
        cout << endl;
    }

    // Printing the transposed matrix
    cout << "\nTransposed matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    
    // Getting user input for matrix size
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;

    // Declare a matrix with user-defined size
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Reading matrix values from the user
    cout << "Enter matrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Callingg function to transpose the matrix
    transposeMatrix(matrix, rows, cols);
    
    return 0;
}
