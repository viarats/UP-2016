#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, num4, num5, max;
  cout << "First number = ";
  cin >> num1;
  cout << "Second number = ";
  cin >> num2;
  cout << "Third number = ";
  cin >> num3;
  cout << "Fourth number = ";
  cin >> num4;
  cout << "Fifth number = ";
  cin >> num5;
  max = num1;

  if (max < num2) {
    max = num2;
  }
  if (max < num3) {
    max = num3;
  }
  if (max < num4) {
    max = num4;
  }
  if (max < num5) {
    max = num5;
  }

  cout << max << endl;

  return 0;
}
