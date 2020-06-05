#include <iostream>
using namespace std;

int main() {
  int start_num, last_num;
  cout << "Enter the first number and press ENTER: ";
  cin >> start_num;
  cout << "Enter the second number and press ENTER: ";
  cin >> last_num;
  while (last_num >= start_num) {
    cout << last_num << " ";
    last_num = last_num - 1;
  }
  return 0;
}
