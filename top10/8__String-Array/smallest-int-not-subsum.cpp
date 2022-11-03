// C++ program to find the smallest positive value that cannot be
// represented as sum of subsets of a given sorted array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Returns the smallest number that cannot be represented as sum
// of subset of elements from set represented by sorted array arr[0..n-1]
long long smallestpositive(vector<long long> arr, int n)
{
    long long int res = 1; // Initialize result

    sort(arr.begin(), arr.end());
    // Traverse the array and increment 'res' if arr[i] is
    // smaller than or equal to 'res'.
    for (int i = 0; i < n && arr[i] <= res; i++) // CONDITIONAL IS IN FOR LOOP AS && """" (VERY COOL)
        res = res + arr[i];

    return res;
}

// Driver program to test above function
int main()
{
    vector<long long> arr1 = {3, 4, 5};
    cout << smallestpositive(arr1, arr1.size()) << endl;

    vector<long long> arr2 = {1, 2, 6, 10, 11, 15};
    cout << smallestpositive(arr2, arr2.size()) << endl;

    vector<long long> arr3 = {1, 1, 1, 1};
    cout << smallestpositive(arr3, arr3.size()) << endl;

    vector<long long> arr4 = {1, 1, 3, 4};
    cout << smallestpositive(arr4, arr4.size()) << endl;

    return 0;
}
