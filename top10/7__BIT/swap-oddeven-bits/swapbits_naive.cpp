// C++ program to swap even and
// odd bits of a given number
#include <bits/stdc++.h>
using namespace std;

// Function to swap even
// and odd bits
unsigned int swapBits(unsigned int x)
{
    for (int i = 0; i < 32; i += 2)
    {

        // Find i th bit
        int i_bit = (x >> i) & 1;

        // Find i+1 th bit
        int i_1_bit = (x >> (i + 1)) & 1;

        // Remove i_bit
        x = x - (i_bit << i)
            // Remove i+1 th bit
            - (i_1_bit << (i + 1))
            // Put i_bit at i+1 location
            + (i_bit << (i + 1))
            // Put i+1 bit at i location
            + (i_1_bit << i);
    }
    return x;
}

// Driver code
int main()
{
    // 00010111
    unsigned int x = 23;

    // Function Call
    cout << swapBits(x);

    return 0;
}

// This code is contributed by Amandeep Gupta
