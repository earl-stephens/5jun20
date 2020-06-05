#include <iostream>
using namespace std;

int main() {
  int input_number;
  cout << "Enter a number and press ENTER: ";
  cin >> input_number;
  if (input_number % 7 == 0)
    cout << "The number is divisible by 7." << endl;
  else
    cout << "The number is not divisible by 7." << endl;
  return 0;
}
