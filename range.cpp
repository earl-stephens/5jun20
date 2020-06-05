#include <iostream>
using namespace std;

int main() {
  int input_num;
  cout << "Enter the person's age and press ENTER: ";
  cin >> input_num;
  if (input_num > 12 && input_num < 20)
    cout << "The person is a teenager." << endl;
  else
    cout << "The person is not a teenager." << endl;
  return 0;
}
