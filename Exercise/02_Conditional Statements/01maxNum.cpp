#include <iostream>
using namespace std;

int main() {

  int a, b;

  cout << "Enter 2 numbers \n";
  cin >> a >> b;

  if (a > b) {
    cout << "Max is " << a;
  } else {
    cout << "Max is " << b;
  }
  
  return 0;
}