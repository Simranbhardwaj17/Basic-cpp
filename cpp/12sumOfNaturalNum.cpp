#include <iostream>
using namespace std;

int main() {
  int count, sum;
  cout << "Enter n natural number: ";
  cin >> count;
  sum = count*(count+1)/2;
  cout << "Sum of " << count << " natural number is: " << sum;
}



#include <iostream>
using namespace std;

// Declare the function before main
int SumOfN(int n);

int main() {
  int n;
  cout << "Enter value of n: ";
  cin >> n;

  int result = SumOfN(n);
  cout << "Sum of first " << n << " natural numbers is: " << result;

  return 0;
}

// Define the function
int SumOfN(int n) {
  int sum;
  sum = n * (n + 1) / 2;
  return sum;
}