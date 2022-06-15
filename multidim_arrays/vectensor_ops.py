'''
vectensor_ops.py
vectorized tensor operations ('flattened')
use this as a template for C++ tensor operations 
'''

import numpy as np




A = np.arange(1,28)
src = A.copy()

# A.reshape((3,3,3))

def tensorswap(A,axord=(0,1,2),dims = (3,3,3)):
    
    # io = np.zeros((3,3)).astype(int)
    # io_k=0
    # for i in axord[::-1]:
    #     io[io_k,i] = 1
    #     io_k+=1
    
    Z,Y,X = dims
    
    
    
    for k in range(Z):
        for j in range(Y):
            for i in range(X):
                A[(Z*Y)*k+(Y)*j + i] = src[(Z*Y)*i+(Y)*j + k]

                # k_ = np.sum(io[0]*[i,j,k])
                # j_ = np.sum(io[1]*[i,j,k])
                # i_ = np.sum(io[2]*[i,j,k])

                # A[(Z*Y)*k+(Y)*j + i] = src[(Z*Y)*k_+(Y)*j_ + i_]

    return A
            
A = A.reshape((3,3,3))

B = np.arange(1,28).reshape((3,3,3))

B = np.transpose(B,(2,1,0))

print(np.allclose(A,B))


