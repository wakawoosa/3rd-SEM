#include <iostream>

using namespace std;

void mark(double per){
    if(per >= 90){
        cout << "A";
    }
    else if(per >= 80){
        cout << "B";
    }
    else if(per >= 70){
        cout << "C";
    }
    else if(per >= 60){
        cout << "D";
    }
    else if (per >= 50)
    {
        cout << "E";
    }
    else if (per > 45){
        cout << "You need help bro";
    }
    
}

int main(){
    double m1, m2, m3, m4, m5, total, per;
    cout << "Enter marks for sub1: ";
    cin >> m1;
    cout << "Enter marks for sub2: ";
    cin >> m2;
    cout << "Enter marks for sub3: ";
    cin >> m3;
    cout << "Enter marks for sub4: ";
    cin >> m4;
    cout << "Enter marks for sub5: ";
    cin >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    per = (total / 5) * 100;
    mark(per);
}