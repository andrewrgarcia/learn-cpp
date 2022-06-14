// hello.cpp: Andrew
// Description: "hello world" from Google c++

#include <iostream>
using namespace std;
// we need the following include for setw() in some c++ implementations
#include <iomanip>

int main()
{
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << setw(17) << "Hello World! ";
        }
        cout << endl;
    }

    return 0;
}