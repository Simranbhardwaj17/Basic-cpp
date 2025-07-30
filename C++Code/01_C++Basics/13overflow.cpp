//If value(range of datatype) is more than capacity, it started from begining

#include <iostream>
using namespace std;

int main() {

  char x = 127;

  ++x;

  cout << (int)x << " " << x << "\n"; // o/p: -128 Ç


  int y = INT16_MAX;
  y++;
  y--;

  cout << (int)y << " " << y;

}