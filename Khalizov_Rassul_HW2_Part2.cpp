// Khalizov Rassul
// Homework 2
// November 27, 2024

#include <iostream>
using namespace std;

int main() {
    double scores[6]; // the array
    double highest = 0.0, lowest = 10.0; // the lowest and highest scores possible

    // Aks the user to input the judges scores
    cout << "Enter 6 scores from the judges (between 0.0 and 10.0):" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> scores[i];
        if (scores[i] > highest) {
            highest = scores[i]; // Finds the highest score
        }
        if (scores[i] < lowest) {
            lowest = scores[i]; // Finds the lowest score
        }
    }

    // Doesn't include the highest and lowest score in the count for total
    double total = 0.0;
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (scores[i] != highest && scores[i] != lowest) {
            total += scores[i];
            count++;
        }
    }

    // If there are duplicates, the program is adjusted
    if (count < 4) {
        for (int i = 0; i < 6; i++) {
            if (count == 4) break;
            if (scores[i] == highest || scores[i] == lowest) {
                total += scores[i];
                count++;
            }
        }
    }

    // Calculates the average when the highest and lowest scores are removed
    double average = total / 4;

    // Print the final score
    cout << "The final score for the project is: " << average << endl;

    /*
    Enter 6 scores from the judges (between 0.0 and 10.0):
    1 2 3 4 5 6
    The final score for the project is: 3.5
    */
    return 0;
}
