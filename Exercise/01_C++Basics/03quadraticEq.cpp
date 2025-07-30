#include <iostream>
#include <cmath>
// #include <math.h> it is for c prog
using namespace std;

int main() {

  int a, b, c;
  float root1, root2;

  cout << "Enter coefficients: ";
  cin >> a >> b >> c;

  root1 = (-b+sqrt(b*b-4*a*c))/(2*a);  //+ve res
  root2 = (-b-sqrt(b*b-4*a*c))/(2*a);  //-ve res
  
  cout << "Roots are: " << root1 << " " << root2;

  return 0;
}

//Not proper handle roots