#include <iostream>

const int N = 4;

bool compareMatrices(int a[N][N], int b[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void makeDiagonal(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int A[N][N], B[N][N];

    std::cout << "Enter elements for matrix A (4x4):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter elements for matrix B (4x4):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> B[i][j];
        }
    }

    if (compareMatrices(A, B)) {
        std::cout << "Matrices are equal. Converting to diagonal matrix:\n";
        makeDiagonal(A);
        printMatrix(A);
    } else {
        std::cout << "Matrices are not equal.\n";
    }

    return 0;
}
