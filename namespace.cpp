#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
}

namespace second
{
  int x = 3;
}

int main () {
  int x=4;
  first::x;
  second::x;
  cout << x << endl;
  
  return 0;
}