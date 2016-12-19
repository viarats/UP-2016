#include <iostream>
using namespace std;

void changeValue(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
  cout << "x = " << *x << endl
       << "y = " << *y;
}

int main() {
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    changeValue(&x, &y);

    return 0;
}
