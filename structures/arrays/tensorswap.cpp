// MULTIDIMENSIONAL ARRAY by Andrew
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <bits/stdc++.h>

/*

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

*/

void tensorprint(std::vector<int> vector)
{
    int N = (std::cbrt(vector.size()) + 0.5);
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                printf("%d ",
                       vector[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

std::vector<int> make_tensor()
{

    int N = 3;
    // int vector[N * N * N];
    std::vector<int> vector(N * N * N, 0);

    int c = 0;
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                c++;
                vector[(N * N) * k + N * j + i] = c;
                // printf("%d ",
                //        vector[(N * N) * k + N * j + i]);
            }
            // printf("\n");
        }
        // printf("\n");
    }
    return vector;
}

void swap210(std::vector<int> &vector)
{
    // vector[0] = 1;
    int N = (std::cbrt(vector.size()) + 0.5);

    std::vector<int> dst(vector.size());
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                dst[(N * N) * k + N * j + i] =
                    vector[(N * N) * i + N * j + k];
            }
        }
    }
    vector = dst;
}

void swap102(std::vector<int> &vector)
{
    // vector[0] = 1;
    int N = (std::cbrt(vector.size()) + 0.5);

    std::vector<int> dst(vector.size());
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                dst[(N * N) * k + N * j + i] =
                    vector[(N * N) * j + N * k + i];
            }
        }
    }
    vector = dst;
}

std::vector<int> vectorsum(std::vector<int> a, std::vector<int> b)
{
    // https://stackoverflow.com/questions/28607912/sum-values-of-2-vectors
    std::transform(a.begin(), a.end(), b.begin(), a.begin(), std::plus<int>());
    return a;
}

int neighbors(std::vector<int> vtensor, std::vector<int> &coords)
{

    // neighbor pointers in tensor 3D dims
    std::vector<std::vector<int>> dirs{
        {-1, 0, 0},
        {1, 0, 0},
        {0, -1, 0},
        {0, 1, 0},
        {0, 0, -1},
        {0, 0, 1}};

    int N = (std::cbrt(vtensor.size()) + 0.5);

    int neigh = 0;
    for (int i = 0; i < 6; i++)
    {
        std::vector<int> ncrds{vectorsum(coords, dirs[i])};
        // PRINT NCRDS
        // for (int x : ncrds)
        //     std::cout << x << " ";

        if (std::find(
                ncrds.begin(), ncrds.end(), -1) != ncrds.end() != 1 &&
            std::find(
                ncrds.begin(), ncrds.end(), N) != ncrds.end() != 1)
        {
            // printf("\nin bounds!");
            int kc{ncrds[0]}, jc{ncrds[1]}, ic{ncrds[2]};
            int atom_site = vtensor[(N * N) * kc + N * jc + ic];
            if (atom_site == 1)
            {
                neigh++;
            }
        }
        else
        {
            // printf("\nout of bounds");
        }

        // printf("\n");
    }

    return neigh;
}

void neighbor_grid(std::vector<int> vector)
{
    int N = (std::cbrt(vector.size()) + 0.5);
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                std::vector<int> coords{k, j, i};
                int neighs{neighbors(vector, coords)};
                printf("%d ", neighs);
                // printf("%d ",
                //        vector[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{

    printf("TENSOR:\n");
    std::vector<int> vector{make_tensor()};
    tensorprint(vector);

    printf("TENSOR TRANSPOSE (2,1,0):\n");
    swap210(vector);
    tensorprint(vector);

    printf("TENSOR TRANSPOSE (1,0,2):\n");
    swap210(vector); // reset the tensor swap
    swap102(vector); // now swap to 102
    tensorprint(vector);

    // NUMBER OF NEIGHBORS
    std::vector<int> coords{1, 1, 1};
    int L = 10;
    std::vector<int> vectensor(L * L * L, 1);
    vectensor[2] = 0;
    int neighs{neighbors(vectensor, coords)};
    // swap210(vectensor);
    printf("tensor\n");
    tensorprint(vectensor);
    printf("neighbors grid (tensor)\n");
    neighbor_grid(vectensor);
}
