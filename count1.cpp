#include <iostream>
using namespace std;

int main() {
  int start_num, input_num;
  start_num = 1;
  cout << "Enter the number to count up to and press ENTER: " << endl;
  cin >> input_num;
  while (start_num <= input_num) {
    cout << start_num << " " << endl;
    start_num = start_num + 1;
  }
  return 0;
}
