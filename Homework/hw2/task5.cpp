#include <iostream>
using namespace std;

int const SIZE = 1000;

bool isSmallVowel(char x) {
    return  x == 'a' || x == 'e' ||
            x == 'o' || x == 'u' ||
            x == 'i';
}

char* noSmallVowels(char* str) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (!isSmallVowel(str[i])) {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    return str;
}


int main() {
    char string[SIZE];
    cout << "Enter a message: ";
    cin >> string;

    cout << noSmallVowels(string) << endl;

    return 0;
}
