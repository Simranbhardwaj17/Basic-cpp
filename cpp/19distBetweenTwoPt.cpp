#include <iostream>
// #include <math.h>  // (C-style)
#include<cmath>  //(C++-style):
using namespace std;

int main() {
  int x1, x2, y1, y2;
  float dist;

  cout << "Enter x coordinates x1, x2 \n";
  cin >> x1 >> x2;

  cout << "Enter y coordinates y1, y2 \n";
  cin >> y1 >> y2;
    
  dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

  cout << "Distance between two point is: " << dist;
  
  return 0;
}