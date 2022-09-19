// C++ program to reverse string without
// affecting it's special character

#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    // creating character array of size
    //  equal to length of string
    char temp[s.length()];
    int x = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            // storing elements in array
            temp[x] = s[i];
            x++;
        }
    }

    cout << temp << endl;
    cout << temp + 4 << endl;
}

int main()
{
    string s = "ba#!nan$a";
    // function call
    reverse(s);
    return 0;
}