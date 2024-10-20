// CalculateSumDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Input the integer
    cout << "Enter an integer between 0 and 1000: ";
    int number;
    cin >> number;

    // Extract each of the digits
    int lastDigit = number % 10;  
    int remainingNumber = number / 10;  

    int middleDigit = remainingNumber % 10;
    remainingNumber = remainingNumber / 10;

    int firstDigit = remainingNumber % 10;

    // Calculate the sum of the digits
    int sum = firstDigit + middleDigit + lastDigit;

    // Display the result
    cout << "The sum of all digits in " << number << " is " << sum << "." << endl;

    return 0;
}
