/*
Question: 
Write a C++ program that takes three unique integers as input from the user and determines which one is the greatest. Display the greatest number as output.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three unique numbers: ";
    cin >> a >> b >> c;

    int maxNum;
    if (a > b && a > c) {
        maxNum = a;
    } else if (b > a && b > c) {
        maxNum = b;
    } else {
        maxNum = c;
    }

    cout << "The greatest number is: " << maxNum << endl;
    return 0;
}