// C++ program to swap even and
// odd bits of a given number
#include <bits/stdc++.h>
using namespace std;

// Function to swap even
// and odd bits
unsigned int swapBits(unsigned int N)
{
    // Get all even bits of x
    //  VV SET BITS IN EVEN POSITIONS
    unsigned int even_bits = N & 0xAAAAAAAA;

    // Get all odd bits of x
    //  VV SET BITS IN ODD POSITIONS
    unsigned int odd_bits = N & 0x55555555;

    // Right shift even bits
    even_bits >>= 1;

    // Left shift odd bits
    odd_bits <<= 1;

    // Combine even and odd bits
    // COMBINES BY PLACING BITS WHICH ARE SET IN EITHER EVEN OR ODD LOCS
    return (even_bits | odd_bits);
}

// Driver code
int main()
{
    // 00010111
    unsigned int N = 23;

    // Function Call
    cout << swapBits(N);

    return 0;
}

// This code is contributed by rathbhupendra
