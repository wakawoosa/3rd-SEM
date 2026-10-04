#include <iostream>

using namespace std;

void larg(int a, int b, int c, int d){
    int large = 0;
    if(a >= b){
        if(a >= c){
            if(a >= d){
                large = a;
            }
            else{
                large = d;
            }
        }
        else{
            if(c >= d){
                large = c;
            }
            else{
                large = d;
            }
        }
    }
    else{
        if(b >=c){
            if(b >= d){
                large = b;
            }
            else{
                large = d;
            }
        }
        else{
            if(c >= d){
                large = c;
            }
            else{
                large = d;
            }
        }
    }
    cout << "\nLargest number is: " << large;
}

void small(int a, int b, int c, int d){
    int smal = 0;
    if( a <= b && a <= c && a <= d ){
        smal = a;
    }
    else if( b <= a && b <= c && b <= d ){
        smal = b;
    }
    else if( c <= a && c <= b && b <= d ){
        smal = c;
    }
    else if( d <= a && d <= b && d <= c ){
        smal = d;
    }
    cout << "\nSmallest number is: " << smal;
}

int main(){
    int n1, n2, n3, n4;
    cout << "Enter number for n1: ";
    cin >> n1;
    cout << "Enter number for n2: ";
    cin >> n2;
    cout << "Enter number for n3: ";
    cin >> n3;
    cout << "Enter number for n4: ";
    cin >> n4;
    larg(n1, n2, n3, n4);
    small(n1, n2, n3, n4);
    return 0;
}