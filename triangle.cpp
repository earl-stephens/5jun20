#include <iostream>
using namespace std;

int triangle(int input_number) {
  int output_num = 0;
  for (int increment = 1; increment <= input_number; increment++) {
    output_num += increment;
  }
  return output_num;
}

int main() {
  int input_num;

  cout << "Enter a number to count up to: ";
  cin >> input_num;
  cout << "The total is " << triangle(input_num) << endl;
  return 0;
}
