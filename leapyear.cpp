// Name: Emmie Kao
// Date: Winter 2024
// Purpose: Finds whether or not a year is a leap year

#include <iostream>
#include <string>
using namespace std;


int main() {
    int year;
    bool is_leap = false;
    cout << "Enter a year: ";
    cin >> year;
    fflush(stdin);
    if (year % 4 == 0 && year % 100 != 0){
        is_leap = true;
    }

    //exception to the previous rule
    else if (year % 400 == 0){
        is_leap = true;
    }
    if (is_leap){
        cout << year << " is a leap year.";
    }
    else{
        cout << year << " is NOT a leap year.";
    }


}