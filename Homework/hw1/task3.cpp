#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num1, num2, sum;
  cout << "First number = ";
  cin >> num1;
  cout << "Second number = ";
  cin >> num2;
  sum = num1 + num2;

  cout << (sum % 2 == 0 ? sum / 2 : sum * 2) << endl;

    return 0;
}
