#include <iostream>
using namespace std;

int const SIZE = 1000;

void array(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}

bool removeAll(int* arr, int size, int n) {
  int i = 0, j = 0;
  bool flag = false;
  while (i < size) {
    if (arr[i] != n) {
      arr[j] = arr[i];
      j++;
    }
    i++;
  }
  for (int k = j; k < size; k++) {
    arr[k] = 0;
    flag = true;
  }
  return flag;
}

int main() {
    int arr[SIZE], size, n;
    cout << "Elements: ";
    cin >> size;
    cout << "Number: ";
    cin >> n;

    cout << boolalpha;
    array(arr, size);
    cout << removeAll(arr, size, n) << endl;
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }

    return 0;
}
