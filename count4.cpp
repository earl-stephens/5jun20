#include <iostream>
using namespace std;

int main() {
  int input_num, increment;

  cout << "Enter the number to count up to: ";
  cin >> input_num;

  for(increment = 1; increment <= input_num; increment++)
    cout << increment << " ";
  return 0;
}
