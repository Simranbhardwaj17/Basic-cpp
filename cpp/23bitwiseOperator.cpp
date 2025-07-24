//sign bit is not included in left shift and right shift 
// Most Signific Bit (MSB) doesn't change

#include <iostream>
using namespace std;

int main() { 

  int x=11, y=7, z, a, c;

  z = x & y;

  a = x | y;

  c = x ^ y;

  cout << z << " " << a <<  " " << c << endl;


  char s = 5, b, m, n;

  b = s << 1;  //bit get shifted left side and num get 10
  n = s << 2;

  m = s >> 2;

  m = ~s;

  cout << (int)b << " " << (int)n << " " << (int) m;
}