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

// void swap(int vector)
// {

//     int N = 3;
//     int dst[N * N * N];
//     for (int k = 0; k < N; k++)
//         for (int j = 0; j < N; j++)
//             for (int i = 0; i < N; i++)
//             {
//                 dst[(N * N) * k + N * j + i] =
//                     vector[(N * N) * i + N * j + k];
//             }
//     return;
// }

int main()
{
    int N = 3;
    int vector[N * N * N];
    // printf("\n%f", vectensor[0]);

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
                // printf("tensor[%d][%d][%d]: %d\n", k, j, i,
                //        vector[(N * N) * k + N * j + i]);

                printf("%d ",
                       vector[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("TENSOR TRANSPOSE (2,1,0):\n");
    int dst[N * N * N];
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                dst[(N * N) * k + N * j + i] =
                    vector[(N * N) * i + N * j + k];
                printf("%d ",
                       dst[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("TENSOR TRANSPOSE (1,0,2):\n");
    int dst2[N * N * N];
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                dst2[(N * N) * k + N * j + i] =
                    vector[(N * N) * j + N * k + i];
                printf("%d ",
                       dst2[(N * N) * k + N * j + i]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
