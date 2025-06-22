#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three distinct elements: ";
    cin >> a >> b >> c;

    int smallest;
    if ((a < b) && (a < c))
        smallest = a;
    else if ((b < a) && (b < c))
        smallest = b;
    else
        smallest = c;

    cout << "The smallest element is: " << smallest << endl;
    return 0;
}