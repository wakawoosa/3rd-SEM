#include <iostream>

using namespace std;

void chk_num(int num){
    if(num == 0){
        cout << "Zero";
    }
    else{
        if(num > 0){
            if(num % 2 == 0){
                cout << "Positive Even";
                }
            else{
                cout << "Positive Odd";
                }
        }
        else{
           if(num < 0){
            if(num % 2 == 0){
                cout << "Negative Even";
                }
            else{
                cout << "Negative Odd";
                }
            } 
        }

    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    chk_num(num);
    return 0;
}