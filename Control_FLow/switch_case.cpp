// before you copy and paste it i want you to understand the code by yourself or with the help of ai 


// Write a program that takes an integer input from 1 to 7 representing the days of the week (1 for Monday, 2 for Tuesday, etc.)
// and prints the corresponding day. Use a switch statement.

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day"; break;
    }

    return 0;
}
 