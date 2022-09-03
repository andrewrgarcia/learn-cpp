//http://www.cplusplus.com/doc/tutorial/constants/
#include <iostream>
using namespace std;

//const double pi = 3.14159;
//const char newline = '\n';
#define pi 3.14159
#define newline '\n'

int main ()
{
  double r{5.0};               // radius
  double circle;
  string call{"Circle area is:"};
  cout << call << endl;
  circle = 2 * pi * r;
  cout << circle;
  cout << newline;
}
