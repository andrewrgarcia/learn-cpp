// C++ program for the above approach
#include <iostream>
using namespace std;

int countFlips(int a, int b)
{

    // initially flips is equal to 0
    int flips = 0;

    // & each bits of a && b with 1
    // and store them if t1 and t2
    // if t1 != t2 then we will flip that bit

    while (a > 0 || b > 0)
    {

        int t1 = (a & 1);
        int t2 = (b & 1);

        if (t1 != t2)
        {
            flips++;
        }
        // right shifting a and b
        a >>= 1;
        b >>= 1;
    }

    return flips;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << countFlips(a, b);
}

// this code is contributed by shivanisinghss2110
