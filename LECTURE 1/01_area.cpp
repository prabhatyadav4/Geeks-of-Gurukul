/*
Question:
Write a program to calculate the area of a rectangle. The program should prompt the user to enter the length and breadth of the rectangle, then output the area.

Constraints:
- 1 <= length <= 10^9
- 1 <= breadth <= 10^9
- Input values are integers.
*/

#include <iostream>
using namespace std;

int main() {
    long long l, b;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    long long area = l * b;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}