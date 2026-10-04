#include <iostream>

using namespace std;

void cal(double units, double bill){
    if (units <= 100){
        bill = units * 1.5;
    }
    else if(units <= 200){
        bill = 100 * 1.5 + (units - 100) * 2.5;
    }
    else{
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    }
    if(bill > 500){
        bill += bill * 0.10;
    }
    cout << "\n Your total bill is: " << bill;
}

int main(){
    double units, bill = 0;
    cout << "Enter Units Consumed: ";
    cin >> units;
    cal(units, bill);
    return 0;
}