/*
Question: 

Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g. reverse of 10400 will be 401 instead of 00401.

*/

#include <iostream>
using namespace std;



int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    int rev = 0;
    while (N > 0) {
        rev = (rev * 10) + (N % 10);
        N = N / 10;
    }
    cout << "Reversed number: " << rev << endl;
    return 0;
}
