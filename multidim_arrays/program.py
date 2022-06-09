# program.py
import numpy as np

N = 100

tensor = np.zeros((N, N, N))

for i in range(N):
    for j in range(N):
        for k in range(N):
            print("coordinates ({},{},{}) - value: {} \n".
                  format(i, j, k, tensor[i, j, k]))
