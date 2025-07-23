#include <iostream>
using namespace std;

int main() {
  
  int x = 2;
  x+=1;

  int sum = 9;
  sum += x;

  int mul = 4;
  mul *= x;

  cout << "sum is: " << sum << "\n" << "x is: " << x << "\n" << mul;
}