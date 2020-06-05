#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int input_num, increment_num;
  double input_square;
  bool is_prime;
  is_prime = true;
  increment_num = 2;

  cout << "Enter a number to see if it is prime: ";
  cin >> input_num;

  input_square = sqrt(input_num);

  while (increment_num <= input_square) {
    if (input_num % increment_num == 0) {
      is_prime = false;
      break;}
    increment_num++;}
  if (is_prime)
    cout << "The number is prime." << endl;
  else
    cout << "The number is not prime." << endl;
  return 0;
}
