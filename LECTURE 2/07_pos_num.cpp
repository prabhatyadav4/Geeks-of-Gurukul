// Q: Add positive numbers until a 0 is typed, but ignore any negative numbers is typed.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter positive numbers: ";
    while (true) {
        cin >> num;
        if (num == 0)
            break;
        if (num > 0)
            sum += num;
        // Ignore negative numbers
    }
    cout << "Sum of positive numbers: " << sum << endl;
    return 0;
}