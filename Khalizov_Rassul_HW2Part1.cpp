// Khalizov Rassul
// Homework 2
// November 25, 2024
#include <iostream>
using namespace std;

int main() {
    int month, day; // data types

    // Asks the user for their input 
    cout << "Enter the month (1 = January, 12 = December): ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;

    // Finds the season
    string season;
    if ((month == 3 && day >= 21) || (month > 3 && month < 6) || (month == 6 && day <= 20)) {
        season = "Spring";
    } else if ((month == 6 && day >= 21) || (month > 6 && month < 9) || (month == 9 && day <= 22)) {
        season = "Summer";
    } else if ((month == 9 && day >= 23) || (month > 9 && month < 12) || (month == 12 && day <= 21)) {
        season = "Fall";
    } else {
        season = "Winter";
    }

    // Outputs the result 
    cout << "It is now " << season << "!" << endl;

    /*
    Enter the month (1 = January, 12 = December): 10
    Enter the day: 5
    It is now Fall!
    */

    return 0;
}
