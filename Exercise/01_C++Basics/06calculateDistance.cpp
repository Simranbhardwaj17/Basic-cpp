#include <iostream>
using namespace std;

int main() {
  
  int u, v, a;
  float distance;

  cout << "Enter initial velocity:\nFinal velocity:\nAcceleration:\n";
  cin >> u >> v >> a;

  distance = (v*v-u*u)/(2*a);

  cout << "Distance is: " << distance << endl;

  return 0;
}