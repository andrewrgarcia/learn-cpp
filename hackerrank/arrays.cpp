#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ",arr[i]);
        // printf("%d ",N);
    }
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
