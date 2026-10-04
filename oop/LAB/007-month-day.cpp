#include <iostream>

using namespace std;

int main(){
    int mon, y;
    cout << "Enter Month (1-12): ";
    cin >> mon;
    cout << "Enter Year: ";
    cin >> y;

    int days;
    switch(mon){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31; break;
        case 4: case 6: case 9: case 11: days = 30; break;
        case 2:{
            bool leap = (y % 4 == 0 && y != 0 ) || (y % 400 == 0);
            days = leap ? 29 : 28;
            break;
            
        }
        default:
        cout << "Invalid";
    }
    cout << "Number of days: " << days;
    return 0;
}