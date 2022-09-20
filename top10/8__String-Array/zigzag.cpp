#include <bits/stdc++.h>
using namespace std;

void zigZag(vector<int> &arr, int N)
{
    // sort the array by using the sort function
    sort(arr.begin(), arr.end());

    // traverse the array from 1 to N -1
    for (int i = 1; i < N - 1; i += 2)
    {
        // swap the current element with the next element
        swap(arr[i], arr[i + 1]);
    }
    // print the complete array
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
int main()
{
    // vector<int> arr = {4, 3, 7, 8, 6, 2, 1};
    vector<int> arr = {5, 3, 5, 7, 2, 14};

    int N = arr.size();
    zigZag(arr, N);
    return 0;
}
