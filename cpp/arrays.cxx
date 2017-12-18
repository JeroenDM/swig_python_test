#include <iostream>
#include "arrays.h"

using namespace std;

void input_vector(double* vec, int n) {
    // print the vector in a nice format
    cout << "executing input_vector" << endl;
    cout << "[ ";
    for (int i=0; i<n; ++i) {
        cout << vec[i];
        if (i < (n-1)) {
            cout << " ,";
        }
    }
    cout << " ]" << endl;
}

void input_matrix(double* mat, int nrows, int ncols) {
    // print the matrix in a nice format
    cout << "Executing input_matrix" << endl;
    cout << "[";
    int index = 0;
    for (int i=0; i<nrows; ++i) {
        cout << "[ ";
        for (int j=0; j<ncols; ++j) {
            index = j + ncols*i;
            cout << mat[index];
            if (j < (ncols-1)) {
                cout << "\t";
            }
        }
        if (i < (nrows-1)) {
            cout << "]\n ";
        } else {
            cout << "]";
        }
    }
    cout << "]" << endl;
}

void output_vector(float *vec, int n) {
    int i;
    for (i=0; i<n; ++i) {
        vec[i] = i / (float) (n-1);
    }
}

void output_matrix(double mat[2][2]) {
    mat[0][0] = 99.0;
    mat[0][1] = 2.0;
    mat[1][0] = 3.0;
    mat[1][1] = 4.0;
}

void output_more_matrix(double mat[5][4]) {
    int i, j;
    for (i=0; i<5; ++i) {
        for (j=0; j<4; ++j) {
            mat[i][j] = i + j;
        }
    }
}