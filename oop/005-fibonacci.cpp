#include <iostream>
using namespace std;

int main() {
    int limit = 100;
    int a = 0, b = 1;

    cout << "Fibonacci sequence up to " << limit << ":\n";
    while (a <= limit) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}