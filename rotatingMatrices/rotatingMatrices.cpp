// rotatingMatrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Cube.h"

// Function to print the matrix mat
// with N rows and M columns
void print(std::vector<std::vector<char>> mat,
    int N, int M)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << mat[i][j] << " ";
        }

        std::cout << "\n";
    }
}




std::vector<std::vector<char>> upRotate(std::vector<std::vector<char>> mat) {

    // Number of rows
    int N = mat.size();

    // Number of columns
    int M = mat[0].size();

    // Swap all the elements along main diagonal
    // in the submatrix min(N, M) * min(N, M)
    for (int i = 0; i < std::min(N, M); i++) {
        for (int j = i; j < std::min(N, M); j++) {

            // Swap mat[i][j] and mat[j][i]
            std::swap(mat[i][j], mat[j][i]);
        }
    }

    // If N is greater than M
    if (N > M) {

        // Push all the unswapped elements
        // of ith column to ith row
        for (int i = 0; i < M; i++) {
            for (int j = std::min(N, M); j < N; j++) {
                mat[i].push_back(mat[j][i]);
            }
        }
    }
    else {
        // Resize mat to have M rows
        mat.resize(M, {});

        // Push all the unswapped elements
        // of ith column to ith row
        for (int i = std::min(N, M); i < M; i++) {
            for (int j = 0; j < N; j++) {
                mat[i].push_back(mat[j][i]);
            }
        }
    }

    // Reverse each row of the matrix
    for (int i = 0; i < M; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }

    // Print the final matrix
    //print(mat, M, N);


    return mat;
}


std::vector<std::vector<char>> upRotateCounterClockwise(std::vector<std::vector<char>> mat, int N)
{
    // Consider all squares one by one
    for (int x = 0; x < N / 2; x++) {
        // Consider elements in group
        // of 4 in current square
        for (int y = x; y < N - x - 1; y++) {
            // Store current cell in
            // temp variable
            int temp = mat[x][y];

            // Move values from right to top
            mat[x][y] = mat[y][N - 1 - x];

            // Move values from bottom to right
            mat[y][N - 1 - x]
                = mat[N - 1 - x][N - 1 - y];

            // Move values from left to bottom
            mat[N - 1 - x][N - 1 - y]
                = mat[N - 1 - y][x];

            // Assign temp to left
            mat[N - 1 - y][x] = temp;
        }
    }

    return mat;

}




int main()
{

    Cube c;
    c.printCube();


    std::cout << "Front and Back switched" << std::endl;
    c.switchFront('A');
    c.printCube();

    std::cout << "Cube Reset" << std::endl;
    c.resetCube();
    c.printCube();





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
