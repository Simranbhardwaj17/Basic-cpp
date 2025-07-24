#include <iostream>
using namespace std;

int main() {

  int a=5, b;

  //pre-inc
  b = ++a;  //here 2 operation, 1st inc then assign value
 
  //post-inc
  b = a++;   //here 2 operation, 1st assign value then inc

  cout << b << " " << a << endl;


  //Pre-Decrement (--x):
  int x = 5;
  int y = --x;  // x becomes 4, y = 4


  //Post-Decrement (x--):
  int x = 5;
  int y = x--;  // y = 5, x becomes 4


  int x = 5;
  cout << x++ << endl;  // prints 5, x becomes 6
  cout << ++x << endl;  // x becomes 7, prints 7



  int x=5, y=10, z;

  z = x++ * y;  //1st product, value store in z then x inc

  z = ++x * y; //1st incr then prod

  cout << y << " " << x << " " << z;
}


/*
Both x++ and ++x are use to incr
but they behave different with other variable and assignment operator as above

Inside single expression, we can't use multiple inc dec operator on same var like that:
j = 2 * ++i + 2 * i++

*/