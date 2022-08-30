#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
class Box
{
    int l;
    int b;
    int h;

public:
    Box();                                    // default constructor
    Box(int length, int breadth, int height); // constructor
    Box(const Box &B);                        // copy constructor

    int getLength() { return l; };                           // Return box's length
    int getBreadth() { return b; };                          // Return box's breadth
    int getHeight() { return h; };                           // Return box's height
    long long CalculateVolume() { return 1LL * l * b * h; }; // Return the volume of the box

    bool operator<(const Box &B) const
    {
        if (l < B.l)
            return true;
        if (b < B.b && l == B.l)
            return true;
        if (h < B.h && b == B.b && l == B.l)
            return true;
        return false;
    }
};

Box::Box()
{
    l = 0, b = 0, h = 0;
}
Box::Box(int length, int breadth, int height)
{
    l = length, b = breadth, h = height;
}
Box::Box(const Box &B)
{
    l = B.l, b = B.b, h = B.h;
}

std::ostream &operator<<(std::ostream &out, Box B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();

    return out;
}

// CODE WRITING ENDS HERE ---- Andrew

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}