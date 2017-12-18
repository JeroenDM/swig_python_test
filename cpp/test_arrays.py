import numpy as np
import arrays

print("Test input vector")
vec1 = np.random.rand(5)
print(vec1)
arrays.input_vector(vec1)

print("Test input matrix")
mat1 = np.random.rand(4, 3)
print(mat1)
arrays.input_matrix(mat1)

print("Test output vector")
vec2 = arrays.output_vector(6)
print(vec2)

print("Test output matrix")
mat2 = arrays.output_matrix()
print(mat2)
mat3 = arrays.output_more_matrix()
print(mat3)