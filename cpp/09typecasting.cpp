#include <iostream>
using namespace std;

//typecasting
int main() {
  // int num1, num2;
  // float result;
  // num1 = 10;
  // num2 = 4;

  // result = (float)num1 / num2;  
  // cout << result;

  
  // char a = 97, b = 60, c;
  // c = a % b;
  // cout << "val is:" << c;   //val is:%  
  //  using cout << c; which prints it as a character, not a number


  //Cast to int:
  char a = 97, b = 60, c;
  c = (int)a % (int)b;
  cout << "val is: " << (int)c;


  return 0;
}