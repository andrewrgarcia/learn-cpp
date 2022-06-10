// MULTIDIMENSIONAL ARRAY by Andrew
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    // std::vector<int> vec = {1, 2, 3, 4};
    // std::vector<std::vector<int>> matrix(100, std::vector<int>(100));

    int N = 100;
    // std::vector<std::vector<std::vector<int>>> tensor(100, std::vector<int>(100, std::vector<int>(100)));
    double tensor[N][N][N];
    // std::fill_n(&tensor[0][0][0], N * N * N, 1);  #fill tensor with 1s

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

    // std::cout << tensor[4][3][2] << std::endl;

    return 0;
}