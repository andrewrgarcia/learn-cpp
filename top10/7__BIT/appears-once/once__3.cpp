// C++ program to find the element
// that occur only once

#include <bits/stdc++.h>
using namespace std;

// function which find number
int singleNumber(int a[], int n)
{
    unordered_set<int> s(a, a + n);

    int arr_sum = accumulate(a, a + n, 0); // sum of array

    int set_sum = accumulate(s.begin(), s.end(), 0); // sum of set

    // applying the formula.
    return (3 * set_sum - arr_sum) / 2;
}

// driver function
int main()
{
    int a[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};

    int n = sizeof(a) / sizeof(a[0]);

    cout << "The element with single occurrence is " << singleNumber(a, n);
}

// This code is contributed by Mohit Kumar 29 (IIIT gwalior)
