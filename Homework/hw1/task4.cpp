#include <iostream>
using namespace std;

int main() {
  int num1, num2, max;
  cout << "First number = ";
  cin >> num1;
  cout << "Second number = ";
  cin >> num2;

  max = num1 > num2 ? num1 : num2;
  cout << (max >= 0 ? max : max * (-1)) << endl;

    return 0;
}
