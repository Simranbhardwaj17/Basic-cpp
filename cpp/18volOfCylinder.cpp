#include <iostream>
using namespace std;

int main() {
  
  int radius, height;
  float volume;

  cout << "Enter radius & height of cylinder: ";
  cin >> radius >> height;

  volume = 3.14*radius*radius*height;
  cout << "Volume of a cylinder is: " << volume;

}