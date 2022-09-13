#include <iostream>
using namespace std;
// int main()
// {
//     std::cout << "Hello, World!\n";
// }

// double square(double x)
// {
//     return x * x;
// }

// void print_square(double x)
// {
//     std::cout << "the square of " << x << " is " << square(x) << "\n";
// }
// int main()
// {
//     print_square(1.234);
// }

bool accept3()
{
    int tries = 1;
    while (tries < 4)
    {
        std::cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        std::cin >> answer;
        // write question
        // read answer
        switch (answer)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "Sorry, I don't understand that.\n";
            ++tries; // increment
        }
    }
    std::cout << "I'll take that for a no.\n";
    return false;
}

void print()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string words[] = {"pear", "apple", "desk"};

    for (auto x : words)
        cout << x << '\n';
    // for each x in v
    for (auto x : {10, 21, 32, 43, 54, 65})
        cout << x << '\n';

    // printf("%s", words[1]);
    cout << words[1];
    // ...
}

void increment()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &x : v)
        cout << ++x << '\n';
    // ...
}

int main()
{
    // accept3();
    print();
    // increment();
}
