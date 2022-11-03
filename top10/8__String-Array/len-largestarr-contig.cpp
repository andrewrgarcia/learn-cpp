#include <iostream>
using namespace std;

// Utility functions to find minimum and maximum of
// two elements
int min(int x, int y) { return (x < y) ? x : y; }
int max(int x, int y) { return (x > y) ? x : y; }

// Returns length of the longest contiguous subarray
int findLength(int arr[], int n)
{
    int max_len = 1; // Initialize result
    for (int i = 0; i < n - 1; i++)
    {
        // Initialize min and max for all subarrays starting with i
        int mn = arr[i], mx = arr[i];

        // Consider all subarrays starting with i and ending with j
        for (int j = i + 1; j < n; j++)
        {
            // Update min and max in this subarray if needed
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);

            // If current subarray has all contiguous elements
            if ((mx - mn) == j - i)                  // CONTIGUOUS ELEMENTS HAVE A DIFFERENCE OF +1 INTEGER IN THE SEQUENCE
                max_len = max(max_len, mx - mn + 1); // BECAUSE OF INIT max_LEN = 1 (LINE 12)
        }
    }
    return max_len; // Return result
}

// Driver program to test above function
int main()
{
    int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the longest contiguous subarray is "
         << findLength(arr, n);
    return 0;
}
