// ComputeChangeApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Receive the amount
    cout << "Enter an amount in double, for example 11.56: ";
    double amount;
    cin >> amount;

    // Convert the amount to cents
    int remainingAmount = (int)(amount * 100);

    // To find the number of dollars
    int numberOfOneDollar = remainingAmount / 100;
    remainingAmount = remainingAmount % 100;

    //  To display the number of dollars
    cout << "Your amount " << amount << " consists of " << endl;
    cout << "    " << numberOfOneDollar << " dollars " << endl;

    // To f ind the number of quarters
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount = remainingAmount % 25;

    // Display the number of quarters
    cout << "    " << numberOfQuarters << " quarters " << endl;

    // To find the number of dimes
    int numberOfDimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;

    // Display the number of dimes
    cout << "    " << numberOfDimes << " dimes " << endl;

    // To find the number of nickels
    int numberOfNickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;

    // Display the number of nickels
    cout << "    " << numberOfNickels << " nickels " << endl;

    // The remaining amount is the number of pennies
    int numberOfPennies = remainingAmount;

    // Display the number of pennies
    cout << "    " << numberOfPennies << " pennies " << endl;

    return 0;
}