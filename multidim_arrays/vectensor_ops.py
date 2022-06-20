'''
vectensor_ops.py
vectorized tensor operations ('flattened')
use this as a template for C++ tensor operations 
'''

import numpy as np
import matplotlib.pyplot as plt

import sys
sys.path.append('/home/andrew/scripts') 
from kmc_crystals.modules import crystaltensor3 as xt3


def swap(dst,axord=(0,1,2),dims = (3,3,3)):
    'for vectorized tensors (dst)'
    src = dst.copy()
    Z,Y,X = dims
    

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


def matrix_levelcheck(mat):
    L,X = mat.shape
    # mat = np.random.randint(0,2,(L,L))
    
    levs = np.zeros(L)
    
    for i in range(L):
        value = 0  
        k=0
        while not value and k < L:
            value = mat[k,i]    
            # print(value)
            # print(i)
            levs[i] = k
            k+=1

    return mat,levs

# mat,levs =  matrix_levelcheck(9)

def tensor_levelcheck(tensor):
    src = tensor.copy()
    src = np.transpose(src,(1,0,2))
    
    Z,Y,X = src.shape
    levels_mat = np.zeros((Y,X))
    for i in range(Y):
        mat, levs = matrix_levelcheck(src[i])
        levels_mat[i] = levs
        
    return levels_mat

# print(levs)
# plt.imshow(mat,cmap='cool')

tensor = np.random.randint(0,2,(3*[4]))
lvls= tensor_levelcheck(tensor)

tensor[0,0,0] = 2 if tensor[0,0,0] == 1 else 0
tensor[0,1,1] = 2 if tensor[0,1,1] == 1 else 0
tensor[0,2,2] = 2 if tensor[0,2,2] == 1 else 0
tensor[0,3,3] = 2 if tensor[0,3,3] == 1 else 0

# xt3.crystalvoxels(xt3.graphical_flip(tensor),'mof')
# # xt3.crystalvoxels(np.transpose(tensor,(2,0,1)),'mof')
# print(lvls)
# print(tensor[0])