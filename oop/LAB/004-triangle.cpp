#include <iostream>

using namespace std;

void tri(double a, double b, double c){
    if( a + b > c && a + c > b && b + c > a ){
        cout << "Valid Triangle\n";
        if( a == b && b == c ){
            cout << "Equl Triangle";
        }
        else if( a == b || a == c || b == c){
            cout << "Iso Triangle";
        }
        else{
            cout << "Scalian tri";
        }
    }
    else{
        cout << "Invalid";
    }
}

int main(){
    double a, b, c;
    cout << "Enter length of a: ";
    cin >> a;
    cout << "Enter length of b: ";
    cin >> b;
    cout << "Enter length of c: ";
    cin >> c;
    tri(a,b,c);
    return 0;
}