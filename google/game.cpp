#include <iostream>
// #include <vector>
// #include <algorithm>
#include <stdlib.h> /* srand, rand */
// #include <bits/stdc++.h>
#include <time.h> /* time */
using namespace std;

int main()
{
    int secret, guess;

    // Use Mersenne twister engine to generate pseudo-random numbers (0,1]
    // mt19937 generator(123);

    // This generates numbers within an % R range
    // for (int i = 0; i < 5; i++)
    //     cout << rand() % 100 << " ";

    srand(time(NULL));
    secret = rand() % 100 + 1;
    // scanf("%d", &guess);

    while (guess != secret)
    {
        cout << "enter guess (1 - 100)\n";
        cin >> guess;
        if (guess == secret)
        {
            cout << "you guessed right!" << endl;
        }
        else
        {
            if (guess < secret)
            {
                // cout << "guess is less than secret number " << secret << endl;
                cout << "\nguess is less than secret number " << endl;
            }
            else
            {
                cout << "\nguess is greater than secret number " << endl;
            }
        }
    }

    // cout << secret << " ";

    return 0;
}
