// operating with variables
// http://www.cplusplus.com/doc/tutorial/variables/
#include <iostream>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << a;cout << "+1"; cout << "-";cout << b;
  cout << " = ";
  cout << result;

  // terminate the program:
  return 0;
}
