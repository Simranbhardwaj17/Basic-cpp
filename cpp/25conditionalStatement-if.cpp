/*
if(condition) {
  //
} else {
  //its optional
}

false=0
true=1 or any other num
*/

#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 2;

  if (a < b) {
    cout << "b is greater than a";
  } else {
    cout << "a is greater than b";
  }

  return 0;
}