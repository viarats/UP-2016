#include <iostream>
using namespace std;

int const SIZE = 1000;

void array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] = ";
    cin >> array[i];
  }
}

void reverse(int* arr, int size) {
  for (int i = 0; i < size / 2; i++) {
      int temp = arr[i];
      arr[i] = arr[size - 1 - i];
      arr[size - 1 - i] = temp;
  }
}

int main() {
    int arr[SIZE], size;
    cout << "Enter a size: ";
    cin >> size;

    array(arr, size);
    cout << endl;

    reverse(arr, size);

    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
