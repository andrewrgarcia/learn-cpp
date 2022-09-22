// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal
// to binary number
// >> AND STARTS FROM LEFT
// (OPPOSITE THAN ITER APPROACH WHICH STARTS AT FINAL 31TH BIT AND SHIFTS <<)
void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);

    printf("%d", n & 1);
}

// Driver code
int main(void)
{
    bin(131);
    printf("\n");
    bin(3);
    printf("\n");
    bin(1);
    printf("\n");

    return 0;
}
