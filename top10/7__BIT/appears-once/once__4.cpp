// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// function which find number
int singlenumber(int a[], int N)
{
	// umap for finding frequency
	unordered_map<int, int> fmap;

	// traverse the array for frequency
	for (int i = 0; i < N; i++)
	{
		fmap[a[i]]++;
		cout << a[i] << "\t" << fmap[a[i]] << endl;
	}

	// iterate over the map
	for (auto it : fmap)
	{

		// check frequency whether it is one or not.
		if (it.second == 1)
		{

			// return it as we got the answer
			return it.first;
		}
	}
}

// Driver code
int main()
{

	// given array
	int a[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};

	// size of the array
	int N = sizeof(a) / sizeof(a[0]);

	// printing the returned value
	cout << singlenumber(a, N) << endl;
	return 0;
}

// This Code is contributed by
// Murarishetty Santhosh Charan
