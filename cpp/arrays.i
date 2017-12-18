%module arrays

%{
    #define SWIG_FILE_WITH_INIT
    #include "arrays.h"
%}

%include "numpy.i"

%init %{
  import_array();
%}

// apply numpy typemaps for input stuff
%apply (double* IN_ARRAY1, int DIM1) {(double* vec, int n)}
%apply (double* IN_ARRAY2, int DIM1 , int DIM2){(double* mat, int nrows, int ncols)}

// apply numpy typemaps for output stuff
// the first one is not working with double data type, no idea why.
%apply(float* ARGOUT_ARRAY1, int DIM1) {(float* vec, int n)}
%apply( double ARGOUT_ARRAY2[ANY][ANY] ) {(double mat[2][2]), (double mat[5][4])}

// I still have to figure out how non fixed size 2d arrays gets passed from c++ to python
// %apply (double** ARGOUTVIEWM_ARRAY2, int* DIM1, int* DIM2) {(double** data, int* nrows, int* ncols)}

%include "arrays.h"