#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Enter two number: \n";
  cin >> a >> b;
  c = a + b;
  cout << "Addition of two number is: " << c;

  return 0;
}


//2nd way
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Enter 1st number: ";
  cin >> a;
  cout << "Enter 2nd number: ";
  cin >> b;
  c = a + b;
  cout << "Addition of two number is: " << c;

  return 0;
}