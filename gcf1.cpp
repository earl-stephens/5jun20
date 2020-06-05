#include <iostream>
using namespace std;

int gcf(int a, int b);

int main() {
  int a = 0, b = 0;
  while(1) {
    cout << "Enter a number (0 to quit): ";
    cin >> a;
    if(a == 0)
      break;
    cout << "Enter a 2nd number: ";
    cin >> b;
    cout << "GCF = " << gcf(a, b) << endl;
  }
  return 0;
}

int gcf(int a, int b) {
  if(a % b == 0)
    return b;
  else
    return gcf(b, a % b);
}
