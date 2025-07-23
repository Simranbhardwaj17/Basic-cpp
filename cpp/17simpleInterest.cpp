#include <iostream>
using namespace std;

int main() {

  int P, R, T;
  float SI;

  cout << "Enter Principal Amount, Rate, Time: ";
  cin >> P >> R >> T;

  SI = (float)(P*R*T)/100;
  cout << "Simple Interest is: " << SI;

  return 0;
}