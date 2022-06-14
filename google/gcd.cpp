#include <iostream>
#include <time.h> /* time */
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    int mod = 1;
    while (mod != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    cout << a;
    return 0;
}