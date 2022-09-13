#include <bits/stdc++.h>
using namespace std;

double recurAdd(double x, int count)
{

    if (count == 0)
    {
        return 0;
    }

    return 10 + x + recurAdd(x, count - 1);
}

// Driver code
int main()
{
    cout << recurAdd(0.5, 3);

    return 0;
}
