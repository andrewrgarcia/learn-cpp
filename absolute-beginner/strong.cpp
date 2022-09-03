// my first string
// http://www.cplusplus.com/doc/tutorial/variables/
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystring;
  mystring = "This is the initial string content";
  cout << mystring << endl;
  string mystring2{"This is a different string content"};
  cout << mystring2 << endl;
  // << endl adds line space (ends line) 
  return 0;
}
