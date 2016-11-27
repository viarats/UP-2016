/*
 * Author: Viara Tsakova
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int initial_number, guess, try_count = 0,
    	d_guess, d_initial, bulls, cows,
    	d1, d2, d3, d4;

    srand(time(0));
	d1 = rand() % 9 + 1;

	do {
		d2 = rand() % 10;
	} while (d2 == d1);

	do {
		d3 = rand() % 10;
	} while (d3 == d2 || d3 == d1);

	do {
		d4 = rand() % 10;
	} while (d4 == d1 || d4 == d2 || d4 == d3);

	initial_number = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    cout << "Guess my number: ";
    cin >> guess;
    try_count++;

	while (guess != initial_number) {
		bulls = cows = 0;
		for (int i = 0; i < 4; i++) {
    		d_guess = (guess / (int) pow(10, i)) % 10;
    		for (int j = 0; j < 4; j++) {
    			d_initial = (initial_number / (int) pow(10, j)) % 10;

    			if (d_initial == d_guess) {
    				if (i == j) {
    					bulls++;
    				}
    				else {
    					cows++;
    				}
    			}
    		}
    	}

      	cout << bulls << " bulls and " << cows << " cows" << endl;
      	cout << "Try again: ";
      	cin >> guess;
      	try_count++;
	}

	cout << "You win!" << endl;
	if (try_count == 1) {
		cout << "First try! You're a magician!" << endl;
	}
	else {
		cout << "It took you " << try_count << " tries." << endl;
	}

    return 0;
}
