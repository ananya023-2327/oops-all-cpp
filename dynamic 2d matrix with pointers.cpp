#include <iostream>

int main() {
    int rows = 3, cols = 4;

    // Allocate rows (array of int*)
    int** matrix = new int*[rows];

    // Allocate each row
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Fill and print
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

    // Deallocate (delete in reverse order)
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
