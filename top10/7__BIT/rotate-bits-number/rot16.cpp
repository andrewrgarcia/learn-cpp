#include <bits/stdc++.h>

using namespace std;

#define SHORT_SIZE 16

// function to rotate the given unsigned short
// in the left direction
unsigned short leftRotate(unsigned short x, short d)
{
    /**
     * By doing x << d, we move the first(right most) d bits
     * to the left most d bits, and at the same time we move
     * the left most d bits to the right side,
     * performing OR operation between the two gives use the
     * required result.
     * */
    // SAME PRINCIPLE AS `rot32.cpp`
    return (x << d) | (x >> (SHORT_SIZE - d));
}

// function to rotate the given unsigned short
// in the right direction
unsigned short rightRotate(unsigned short x, short d)
{
    /**
     * By doing x >> d, we move the first(left most) d bits
     * to the right most d bits, and at the same time we move
     * the right most d bits to the right side,
     * performing OR operation between the two gives use the
     * required result.
     * */

    return (x >> d) | (x << (SHORT_SIZE - d));
}

/* Driver program to test above functions */
int main()
{
    // Test case
    unsigned short n = 28;
    short d = 2;

    cout << leftRotate(n, d) << endl;
    cout << rightRotate(n, d) << endl;

    return 0;
}

// This code is contributed by ganesh227
