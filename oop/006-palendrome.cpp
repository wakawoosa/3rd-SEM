#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome.\n";
    } else {
        cout << original << " is not a palindrome.\n";
    }

    return 0;
}