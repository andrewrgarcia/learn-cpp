#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int q;
    cin >> n >> q;

    vector<vector<int>> arr(n);
    // cout << vec;
    // scanf("%d",&arr[0][0]);
    // printf("%d",arr[0][0]);

    for (int j = 0; j < n; j++)
    {
        int k;
        cin >> k;
        arr[j].resize(k);
        for (int i = 0; i < k; i++)
        {
            cin >> arr[j][i];
            // printf("%d ",arr[j][i]);
        }
    }
    for (int g = 0; g < q; g++)
    {
        int i_val, j_val;
        cin >> i_val >> j_val;
        printf("%d\n", arr[i_val][j_val]);
    }

    return 0;
}