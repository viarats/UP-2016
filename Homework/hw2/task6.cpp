#include <iostream>
using namespace std;

int const SIZE = 1000;

void array(double* arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}

int average(double* arr, int size) {
  if (size <= 1) {
    return -1;
  }
  if (arr[size - 1] == arr[size - 2]) {
    return size - 1;
  }
  for (int i = size - 2; i >= 1; i--) {
    if (arr[i] == (arr[i + 1] + arr[i - 1]) / 2) {
      return i;
    }
  }
  if (arr[0] == arr[1]) {
    return 0;
  }

  return -1;
}

int main() {
    double arr[SIZE], size;
    cout << "Elements: ";
    cin >> size;

    array(arr, size);
    cout << average(arr, size);

    return 0;
}
