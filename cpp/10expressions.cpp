// operator => precedence
// () => 3
// *, /, %  => 2
// +, - => 1

//Associativity -> left to ri8

/*
How to write expressions:- 
1. Ar of triangle:  a = b*h/2   must take a in float to get accurate value
2. Perim of tri: p = 2(l+b)  = 2 * (l + b)
3. sum of n series: s = n*(n+1)*d
4. root of quad eq: r = (-b+sqrt(b*n-4*a*c))/(2*a)     here, we need to include #include<cmath> & #include<math.h> & sqrt fn

NOTE: Must take result in float datatype to get accurate value
      We need to add * (for prog) in between two var that r multiplied (as in math)
*/


#include <iostream>
using namespace std;

int main() {
  float radius, area;
  cout << "Enter radius: ";
  cin >> radius;
  area = 3.14*radius*radius;
  cout << "Area of circle is: " << area;
}