#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int input_num;
  double square_root;
  bool is_prime = true;
  //is_prime = true;

  cout << "Enter a number: ";
  cin >> input_num;

  square_root = sqrt(input_num);

  for(int increment = 2; increment <= square_root; increment++){
    if(input_num % increment == 0) {
      is_prime = false;
      break;
    }
  }

  if(is_prime)
    cout << "The number is prime." << endl;
  else
    cout << "The number is not prime." << endl;

  return 0;
}
