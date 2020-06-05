#include <iostream>
using namespace std;

int main() {
  int first_num, second_num;

  cout << "Enter the first number: ";
  cin >> first_num;
  cout << "Enter the second number: ";
  cin >> second_num;

  for(int incrementer = second_num; incrementer >= first_num; incrementer--)
    cout << incrementer << " ";
  return 0;
}
