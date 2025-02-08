#include<iostream>
using namespace std;

void rotateMatrix(int mat[][3], int n) {
    for(int layer=0; layer<n/2; layer++)
    for(int i=layer; i<n-1-layer; i++) {
        int temp = mat[layer][i];
        mat[layer][i] = mat[n-1-i][layer];
        mat[n-1-i][layer] = mat[n-1-layer][n-1-i];
        mat[n-1-layer][n-1-i] = mat[i][n-1-layer];
        mat[i][n-1-layer] = temp;
    }
}

void displayMatrix(int mat[][3], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int mat[3][3], n=3;
    cout << "Enter 3x3 matrix:\n";
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
        cin >> mat[i][j];

    cout << "Before Rotation:\n";
    displayMatrix(mat, n);

    rotateMatrix(mat, n);

    cout << "After Rotation:\n";
    displayMatrix(mat, n);

    return 0;
}
