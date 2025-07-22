#include <iostream>
using namespace std;

int main() {
  float base, height, area;
  cout << "Enter base and height: ";
  cin >> base >> height;
  area = (base * height) / 2;
  cout << "Area of triangle is: " << area;

  return 0;
}



// int b=7,h=5;
   
// float area;

// area=(float)b*h/2;  //typecast


/*
Algorithm :
Begin
  Print"Enter base & height"
  Read b,h
  a <- (b*h)/2
  Print "Area is", a
End
*/