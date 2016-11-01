#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num1, num2, num3, n = 0;
  cout << "First number = ";
  cin >> num1;
  cout << "Second number = ";
  cin >> num2;
  cout << "Third number = ";
  cin >> num3;

  if (num1 == 0 || num2 == 0 || num3 == 0) {
 	 cout << "0";
  }
  else {
 	 if (num1 < 0){
 		 n++;
 	 }
 	 if (num2 < 0) {
 		 n++;
 	 }
 	 if (num3 < 0){
 		 n++;
 	 }
  }
  if (n % 2 == 0){
 	 cout << "+";
  }
  else {
 	 cout << "-";
  }

    return 0;
}
