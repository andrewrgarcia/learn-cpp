// Adapted from:
// C++ program to print elements of Three-Dimensional (https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/)
// MULTIDIMENSIONAL ARRAY
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    // initializing the 3-dimensional array
    int x[2][3][2] = {{{0, 1}, {2, 3}, {4, 5}},
                      {{6, 7}, {8, 9}, {10, 11}}};

    vector<int> vec = {1, 2, 3, 4};
    // vector<vector<vector<int>>> tensor[100][100][100];

    int N = 100;

    int tensor[N][N][N];
    // fill(tensor[0], tensor[0] + N * N * N, 0); // does not work with 3D
    fill_n(&tensor[0][0][0], N * N * N, 0);

    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        cout << "vector vec[" << i << "] = " << vec[i] << endl;
    }

    cout << "tensor" << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                // cout << "coordinates" << i << j << "value" << tensor[i][j]
                //      << endl;
                printf("coordinates (%d,%d,%d) - value: %d \n", i, j, k, tensor[i][j][k]);
            }
        }
    }

    // cout << tensor << endl;

    return 0;
}