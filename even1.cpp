#include <iostream>
using namespace std;

int main() {
  int n, remainder;

  cout << "Enter a number and press ENTER: ";
  cin >> n;

  remainder = n % 2;

  if (remainder == 0)
    cout << "The number is even." << endl;
  else
    cout << "The number is odd." << endl;

  return 0;
}
