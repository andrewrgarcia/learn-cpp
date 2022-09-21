// C++ program to compute sum of pairwise bit differences
#include <bits/stdc++.h>
using namespace std;

int sumBitDifferences(int arr[], int n)
{
    int ans = 0; // Initialize result
    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        int count = 0;
        for (int j = 0; j < n; j++)
            if ((arr[j] & (1 << i)))
                count++;
        // Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2); // <-- MAKES IT SUCH THAT A DIFFERENCE IN A PAIR WOULD RESULT IN 1 AND OTHERWISE 0 (SEE EFFICIENT SOLUTION SECTION ON https://www.geeksforgeeks.org/sum-of-bit-differences-among-all-pairs/ )
    }
    return ans;
}

// Driver program
int main()
{
    int arr[] = {1, 3, 5};
    int n = sizeof arr / sizeof arr[0];
    cout << sumBitDifferences(arr, n) << endl;
    return 0;
}

// This code is contributed by Sania Kumari Gupta (kriSania804)
