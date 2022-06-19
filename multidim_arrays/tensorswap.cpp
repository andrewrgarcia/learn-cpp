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

int main()
{

    int N = 3;
    // int vector[N * N * N];
    std::vector<int> vector(N * N * N, 0);

    printf("TENSOR:\n");

    int c = 0;
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                c++;
                vector[(N * N) * k + N * j + i] = c;
                printf("%d ",
                       vector[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("TENSOR TRANSPOSE (2,1,0):\n");
    swap210(vector);
    tensorprint(vector);

    printf("TENSOR TRANSPOSE (1,0,2):\n");
    swap210(vector); // reset the tensor swap
    swap102(vector); // now swap to 102
    tensorprint(vector);
}
