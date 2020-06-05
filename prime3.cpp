#include <iostream>
#include <math.h>
using namespace std;

int prime(int n);

int main() {
  int i;
  while(1) {
    cout << "Enter a number (0 to exit)";
    cout << " and press enter:";
    cin >> i;

    if(i == 0)
      break;
    if(prime(i))
      cout << i << " is prime." << endl;
    else
      cout << i << " is not prime." << endl;
   }
 return 0;
}

int prime(int n) {
  int i;
  double square_root = sqrt(n);
  for(i = 2; i <= square_root; i++) {
    if(n % i == 0)
      return false;
  }
  return true;
}

// My version
// void prime_output(int input_number);
//
// int main() {
//   int input_num;
//
//
//   while(1) {
//     cout << "Enter a number to see if it is prime." << endl;
//     cout << "Enter 0 to exit." << endl;
//     cin >> input_num;
//     if(input_num == 0)
//       break;
//     else
//       prime_output(input_num);
//   }
//   return 0;
// }
//
// void prime_output(int input_number) {
//   bool is_prime = true;
//   double square_root = sqrt(input_number);
//
//   for(int increment = 2; increment <= square_root; increment++)
//     if(input_number % increment == 0) {
//       is_prime = false;
//       break;
//     }
//
//   if(is_prime)
//     cout << "The number is prime." << endl;
//   else
//     cout << "The number is not prime." << endl;
// }
