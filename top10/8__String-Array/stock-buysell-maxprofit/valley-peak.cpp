#include <iostream>
using namespace std;

// Preprocessing helps the code run faster
// OF "for loop" !
#define fl(i, a, b) for (int i = a; i < b; i++)

int maxProfit(int *prices, int size)
{
    // ONLY ADDS ADJACENT & POSITIVE PRICE DIFFERENCES TO maxProfit; CLEVER.
    int maxProfit = 0;
    // Loop starts from 1 BECAUSE IT IS comparing with the FORMER i.e, i - 1
    fl(i, 1, size) if (prices[i] > prices[i - 1]) maxProfit += prices[i] - prices[i - 1];
    return maxProfit;
}

// Driver Function
int main()
{
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    int N = sizeof(prices) / sizeof(prices[0]);
    cout << maxProfit(prices, N) << endl;
    return 0;
}
// This code is contributed by Kingshuk Deb
