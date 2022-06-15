'''
vectensor_ops.py
vectorized tensor operations ('flattened')
use this as a template for C++ tensor operations 
'''

import numpy as np


def swap(dst,axord=(0,1,2),dims = (3,3,3)):
    'for vectorized tensors (dst)'
    src = dst.copy()
    Z,Y,X = dims
    
    # io = np.zeros((3,3)).astype(int)
    # io_k=0
    # for i in axord[::-1]:
    #     io[io_k,i] = 1
    #     io_k+=1

    # for k in range(Z):
    #     for j in range(Y):
    #         for i in range(X):
    #             k_ = np.sum(io[0]*[i,j,k])
    #             j_ = np.sum(io[1]*[i,j,k])
    #             i_ = np.sum(io[2]*[i,j,k])

    #             dst[(Z*Y)*k+(Y)*j + i] = src[(Z*Y)*k_+(Y)*j_ + i_]

    if axord == (2,1,0):
        
        for k in range(Z):
            for j in range(Y):
                for i in range(X):
                    dst[(Z*Y)*k + (Y)*j + i] = src[(Z*Y)*i + (Y)*j + k]
    
    if axord == (0,2,1):
        
        for k in range(Z):
            for j in range(Y):
                for i in range(X):
                    dst[(Z*Y)*k + (Y)*j + i] = src[(Z*Y)*k + (Y)*i + j]
            
    return dst

def neighbors(dst,crds=(1,1,1),L=3):
    'for vectorized tensors'
    
    neighbors = 0
   
            
    dirs = np.array([[-1,  0,  0],
       [ 1,  0,  0],
       [ 0, -1,  0],
       [ 0,  1,  0],
       [ 0,  0, -1],
       [ 0,  0,  1]])
            
    # print(dirs)
    for i in dirs:
        ncrds = crds+i
        if (-1 or L) not in ncrds:
            kc,jc,ic = ncrds
            neighbors += 1 if dst[ (L*L)*kc + L*jc + ic ] == 1 else 0

            # print(ncrds)
            
    return neighbors
        

def tensor_neighbors(dst,crds=(1,1,1),L=3):
        
    neighbors = 0
    
    # dirs  = np.zeros((6,3)).astype(int)
    # k=0 
    # for d in range(3):
    #     for i in [-1,1]:
    #         dirs[k,d]=i
    #         k+=1
            
    dirs = np.array([[-1,  0,  0],
       [ 1,  0,  0],
       [ 0, -1,  0],
       [ 0,  1,  0],
       [ 0,  0, -1],
       [ 0,  0,  1]])
            
    # print(dirs)
    for i in dirs:
        ncrds = crds+i
        if (-1 or L) not in ncrds:
            kc,jc,ic = ncrds
            neighbors += 1 if dst[tuple(ncrds)] == 1 else 0

    return neighbors


        
    
    
A = np.arange(1,28)

A = swap(A,(2,1,0))

A = A.reshape((3,3,3))


B = np.arange(1,28).reshape((3,3,3))

B = np.transpose(B,(2,1,0))

print(np.allclose(A,B))


tensor = np.ones((3,3,3))
vec = np.ones((27))


def matrix_levelcheck():
    L = np.random.randint(0,2,(6,6))
    levs = np.zeros(6)
    
    for i in range(6):
        value = 0  
        k=0
        while not value and k < 6:
            value = L[k,i]    
            print(value)
            # print(i)
            levs[i] = k
            k+=1



    print(levs)
    print(L)

matrix_levelcheck()