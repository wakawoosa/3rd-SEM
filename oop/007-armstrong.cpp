#include <iostream>
using namespace std;

int main() {
    int number, original, digits = 0, copy, temp, digit;
    long long sum = 0, power;

    cout << "Enter a number: ";
    cin >> number;

    original = number;
    copy = number;

    while (copy > 0) {
        digits++;
        copy /= 10;
    }

    temp = number;
    while (temp > 0) {
        digit = temp % 10;

        power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number.\n";
    } else {
        cout << original << " is not an Armstrong number.\n";
    }

    return 0;
}