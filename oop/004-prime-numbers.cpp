#include <iostream>
using namespace std;

int main() {
    int n = 100;
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}