// C++ program to Count number of bits to be flipped
// to convert A into B
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int a = 10;
    int b = 20;

    // Function call
    cout << __builtin_popcount(a ^ b) << endl;
    return 0;
}

// This code is contributed by Suruchi Kumari