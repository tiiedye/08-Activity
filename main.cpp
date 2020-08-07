#include <iostream>

using namespace std;

int main() {
    int cents {};

    cout << "This is a simple app designed to organize how much your cents are worth in dollars/quarters/dimes/nickles/pennies." << endl;
    cout << endl;
    cout << "Enter an integer representing the number of cents: ";
    cin >> cents;
    cout << endl;

    int dollars {};
    int quarters {};
    int dimes {};
    int nickles {};
    int pennies {};

    if (cents / 100) {
        dollars = cents / 100;
        cents = cents - (dollars * 100);
        cout << "Dollars: " << dollars << endl;
    } else {
        cout << "Dollars: 0" << endl;
    }

    if (cents / 25) {
        quarters = cents / 25;
        cents = cents - (quarters * 25);
        cout << "Quarters: " << quarters << endl;
    } else {
        cout << "Quarters: 0" << endl;
    }

    if (cents / 10) {
        dimes = cents / 10;
        cents = cents - (dimes * 10);
        cout << "Dimes: " << dimes << endl;
    } else {
        cout << "Dimes: 0" << endl;
    }

    if (cents / 5) {
        nickles = cents / 5;
        cents = cents - (nickles * 5);
        cout << "Nickles: " << nickles << endl;
    } else {
        cout << "Nickles: 0" << endl;
    }

    if (cents / 1) {
        pennies = cents / 1;
        cents = cents - pennies;
        cout << "Pennies: " << pennies << endl;
    } else {
        cout << "Pennies: 0" << endl;
    }

    return 0;
}