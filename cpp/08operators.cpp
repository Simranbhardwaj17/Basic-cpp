#include <iostream>
using namespace std;

int main() {
  // int num1, num2, result;
  // num1 = 10;
  // num2 = 5;

  //Arithmetic operators++++++++

  //Add op
  // result = num1 + num2;
  // cout << result;

  //sub op
  // result = num1 - num2;
  // cout << result;

  //division op: - quotient
  // result = num1 / num2;
  // cout << result;

  //mod op: - gives remainder
  // result = num1 % num2;  
  // cout << result;


  //float o/p
  // float num4 = 3.2, num5 = 2.1, res;
  // res = num4 / num5;
  // cout << res;   


  //mod only for int, char(integral val)
  // cout << char prints symbol
  //can't perform mod on float


  // char a = 97, b = 61, c;
  // c = a % b;
  // cout << "val is:" << c;   //val is:$

  // char a = 97, b = 60, c;
  // c = a % b;
  // cout << "val is:" << c;   //val is:%
  

  // char a = 97, b = 60;
  // int c;
  // c = a % b;
  // cout << "val is:" << c;

  char a = 97, b = 60, c;
  c = (int)a % (int)b;
  cout << "val is: " << (int)c;


  return 0;
}