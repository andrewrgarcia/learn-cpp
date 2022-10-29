#include <bits/stdc++.h>
using namespace std;

// Function which counts set bits from 0 to n
int countSetBits(int n)
{
    int i = 0;

    // ans store sum of set bits from 0 to n
    int ans = 0;

    // while n greater than equal to 2^i
    while ((1 << i) <= n)
    {

        // This k will get flipped after
        // 2^i iterations
        bool k = 0;

        // change is iterator from 2^i to 1
        // I.E. SET TO TO iTH BIT (IF i = 2 AND FIRST BIT WAS "0", THEN OPERTATION DOES: 10)
        int change = 1 << i;

        // This will loop from 0 to n for
        // every bit position
        for (int j = 0; j <= n; j++)
        {

            ans += k;

            if (change == 1)
            {
                k = !k;          // When change = 1 flip the bit
                change = 1 << i; // again set change to 2^i
            }
            else
            {
                change--;
            }
        }

        // increment the position
        i++;
    }

    return ans;
}

// Main Function
int main()
{
    int n = 17;
    cout << countSetBits(n) << endl;
    return 0;
}
