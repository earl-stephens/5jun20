#include <iostream>
using namespace std;

int factorial(int input_number);

int main() {
  int input_num;

  cout << "Enter a number to multiply up to: ";
  cin >> input_num;
  cout << "The total is " << factorial(input_num) << endl;
  return 0;
}

int factorial(int input_number) {
  int output_num = 1;
  for (int increment = 1; increment <= input_number; increment++) {
    output_num *= increment;
  }
  return output_num;
}
