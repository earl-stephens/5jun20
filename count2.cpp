#include <iostream>
using namespace std;

int main() {
  int start_num, last_num;
  cout << "Enter the number to start with and press ENTER: ";
  cin >> start_num;
  cout << "Enter the number to end with and press ENTER: ";
  cin >> last_num;

  while (start_num <= last_num) {
    cout << start_num << " ";
    start_num = start_num + 1;
  }
  return 0;
}
