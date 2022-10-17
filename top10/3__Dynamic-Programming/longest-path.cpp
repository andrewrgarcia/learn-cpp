// C++ program to find the longest path in a matrix
// with given constraints
#include <bits/stdc++.h>
#define n 3
using namespace std;

// Returns length of the longest path beginning with
// mat[i][j]. This function mainly uses lookup table
// dp[n][n]
int findLongestFromACell(int i, int j, int mat[n][n],
						 int dp[n][n])
{
	//	THIS WHOLE FUNCTION IS THE RECURSION FOR THE FIRST i j
	// 	WHICH TAKES MULTIPLE PATHS. HOWEVER, DUE TO THE DP, ALL
	// 	PATHS ALREADY SEARCHED ARE KEPT IN MEMORY AND ERGO, THE PROBLEM ONLY
	//	HAS A TIME COMPLEXITY OF O(N^2)

	if (i < 0 || i >= n || j < 0 || j >= n)
		return 0;

	// If this subproblem is already solved
	if (dp[i][j] != -1)
		return dp[i][j];

	// To store the path lengths in all the four directions
	int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN;

	// Since all numbers are unique and in range from 1 to
	// n*n, there is atmost one possible direction from any
	// cell
	if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1]))
		x = 1 + findLongestFromACell(i, j + 1, mat, dp);

	if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1]))
		y = 1 + findLongestFromACell(i, j - 1, mat, dp);

	if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j]))
		z = 1 + findLongestFromACell(i - 1, j, mat, dp);

	if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j]))
		w = 1 + findLongestFromACell(i + 1, j, mat, dp);

	// If none of the adjacent fours is one greater we will
	// take 1 otherwise we will pick maximum from all the
	// four directions
	return dp[i][j] = max({x, y, z, w, 1});
}

// Returns length of the longest path beginning with any
// cell
int finLongestOverAll(int mat[n][n])
{
	int result = 1; // Initialize result

	// Create a lookup table and fill all entries in it as
	// -1   (---> not searched yet)
	int dp[n][n];
	memset(dp, -1, sizeof dp);

	// Compute longest path beginning from all cells
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dp[i][j] == -1)
				findLongestFromACell(i, j, mat, dp);

			// Update result if needed
			result = max(result, dp[i][j]);
		}
	}

	return result;
}

// Driver program
int main()
{
	int mat[n][n] = {{1, 2, 9},
					 {5, 3, 8},
					 {4, 6, 7}};
	cout << "Length of the longest path is "
		 << finLongestOverAll(mat);
	return 0;
}
