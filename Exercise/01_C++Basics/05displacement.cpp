#include <iostream>
using namespace std;

int main() {
  int iVelocity, fVelocity, acceleration;
  float displacement;

  cout << "Enter initial velocity:\nFinal velocity:\nAcceleration:\n";
  cin >> iVelocity >> fVelocity >> acceleration;

  displacement = (fVelocity*fVelocity-iVelocity*iVelocity)/(2.0*acceleration);

  cout << "Displacement is: " << displacement << endl;

  return 0;
}