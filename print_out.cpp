#include <iostream>
using namespace std;

void print_out(int input_number);

int main() {
  int input_num;

  cout << "Enter a number to print out to: ";
  cin >> input_num;

  print_out(input_num);
  return 0;
}

void print_out(int input_number) {
  for(int increment = 1; increment <= input_number; increment++)
    cout << increment << " ";
}
