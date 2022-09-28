// Adapted from:
// C++ program to print elements of Three-Dimensional (https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/)
// MULTIDIMENSIONAL ARRAY
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <bits/stdc++.h>
// using namespace std;

int main()
{
    // initializing the 3-dimensional array
    int x[2][3][2] = {{{0, 1}, {2, 3}, {4, 5}},
                      {{6, 7}, {8, 9}, {10, 11}}};

    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {

                std::cout << "Element at x[" << i << "][" << j
                          << "][" << k << "] = " << x[i][j][k]
                          << std::endl;
            }
        }
    }

    std::vector<int> vec = {1, 2, 3, 4};
    for (int i = 0; i < 4; ++i)
    {
        std::cout << "vector vec[" << i << "] = " << vec[i] << std::endl;
    }

    std::vector<std::vector<int>> matrix(100, std::vector<int>(100));

    int N = 100;
    // std::vector<std::vector<std::vector<int>>> tensor(100, std::vector<int>(100, std::vector<int>(100)));
    double tensor[N][N][N];
    // fill(tensor[0], tensor[0] + N * N * N, 0); // does not work with 3D
    // std::fill_n(&tensor[0][0][0], N * N * N, 0);

    // Use Mersenne twister engine to generate pseudo-random numbers.
    std::mt19937 generator(123);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                // std::cout << "coordinates" << i << j << "value" << tensor[i][j]
                //      << std::endl;
                // tensor[i][j][k] = (double)generator() / generator.max();
                tensor[i][j][k] = (double)generator() / (double)generator.max();

                printf("coordinates (%d,%d,%d) - value: %f \n", i, j, k, tensor[i][j][k]);
            }
        }
    }

    std::cout << "tensor" << std::endl;
    std::cout << tensor << std::endl;

    return 0;
}