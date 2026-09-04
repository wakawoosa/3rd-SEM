#include <iostream>

using namespace std;

int main(){
    float m1, m2, m3, m4, m5, total, percentage;
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;
    if (percentage >= 90) {
        cout << "Grade: A\n";
    }
    else if (percentage >= 80) {
        cout << "Grade: B\n";
    }
    else if (percentage >= 70) {
        cout << "Grade: C\n";
    }
    else if (percentage >= 60) {
        cout << "Grade: D\n";
    }
    else {
        cout << "Grade: F\n";
    }
}