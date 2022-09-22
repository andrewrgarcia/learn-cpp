// C++ program for the above approach

#include <bits/stdc++.h>

using namespace std;

void binary(int num)
{
    // converts the number to binary
    // and removes leading zeroes
    cout << bitset<32>(num).to_string().substr(32 - log2(num)) << endl;
}

// Driver Code
int main()
{
    int x = 10;
    binary(x);
    // x--;
    // binary(x);
}

// This code is contributed phasing17
