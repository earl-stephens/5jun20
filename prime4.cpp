#include <iostream>
#include <math.h>
using namespace std;

int prime(int n);

int main() {
  for(int i = 2; i <= 20; i++) {
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
