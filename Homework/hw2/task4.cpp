#include <iostream>
using namespace std;

int const ROWS = 100, COLUMNS = 100;

void array(int arr[][COLUMNS], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
  }
}

void printArray(int arr[][COLUMNS], int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void transpose(int arr1[][COLUMNS], int arr2[][COLUMNS],
               int rows, int columns) {
  for (int i = 0; i < columns; i++) {
    for (int j = 0; j < rows; j++) {
      arr2[i][j] = arr1[j][i];
    }
  }
}

int main() {
  int arr1[ROWS][COLUMNS], arr2[ROWS][COLUMNS], rows, columns;
  cout << "Rows: ";
  cin >> rows;
  cout << "Columns: ";
  cin >> columns;

  array(arr1, rows, columns);
  printArray(arr1, rows, columns);
  cout << endl;
  transpose(arr1, arr2, rows, columns);
  printArray(arr2, columns, rows);

  return 0;
}
