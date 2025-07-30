// #include<iostream>
// using namespace std;

// int main() {
//   string name;
//   cout << "Enter your name ";
//   cin >> name;
//   cout << "Welcome " << name << "!";  //Print firstname only

//   return 0;
// }


//For reading fullName+++
#include<iostream>
using namespace std;

int main() {
  string name;

  cout << "Enter your name ";
  getline(cin, name);   //getline(input_stream, variable);
  cout << "Welcome " << name << "!";

  return 0;
}

// cin stops at spaces, so it can’t read full sentences.
// getline() reads everything until Enter is pressed (newline).