// C++ Program for the binary
// representation of a given number
#include <bits/stdc++.h>
using namespace std;

void bin(unsigned n)
{
	/* step 1 */
	if (n > 1)
		bin(n / 2); // SHIFT BINARY FROM LEFT TO RIGHT

	/* step 2 */ // REMAINDER: EITHER 0 OR 1
	cout << n % 2;
}

// Driver Code
int main(void)
{
	bin(7);
	cout << endl;
	bin(4);
}

// This code is contributed
// by Akanksha Rai
