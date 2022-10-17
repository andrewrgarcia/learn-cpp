// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Taking the matrix as globally
int tab[2000][2000];

// Check if possible subset with
// given sum is possible or not
int subsetSum(int a[], int n, int sum)
{

    // If the sum is zero it means
    // we got our expected sum
    if (sum == 0)
        return 1;

    if (n <= 0)
        return 0;

    // IF THE VALUE IS NOT -1 IT MEANS
    // THE ENTRY WAS ALREADY CALLED BY THE FUNCTION;
    // IT WILL SAVE US THE REPETITION
    if (tab[n - 1][sum] != -1)
        return tab[n - 1][sum];

    // IF THE VALUE a[n-1] IS GREATER THAN
    // THE DESIRED sum, THE NEXT VALUE IS CALLED RECURSIVELY VV
    if (a[n - 1] > sum)
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum);
    else
    {
        // TWO RECURSION BRANCHES ARE RUN
        // BECAUSE EITHER AND BRANCHES THEREOF MAY
        // FULFILL OUR sum CRITERIA
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum) ||
                                 subsetSum(a, n - 1, sum - a[n - 1]);
    }
}

// Driver Code
int main()
{
    // Storing the value -1 to the matrix
    memset(tab, -1, sizeof(tab));
    int n = 5;
    int a[] = {1, 5, 3, 7, 4};
    int sum = 12;

    if (subsetSum(a, n, sum))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    /* This Code is Contributed by Ankit Kumar*/
}
