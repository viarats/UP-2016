#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Input number: ";
  cin >> num;

  switch (num){
  	case 1:
  	case 2:
  	case 3:
  	    cout << num * 10;
          break;
  	case 4:
  	case 5:
  	case 6:
  	    cout << num * 100;
          break;
  	case 7:
  	case 8:
  	case 9:
  	    cout << num * 1000;
  		  break;
  	default:
  	    cout << "Invalid input.";
  	      break;
  }
    return 0;
}
