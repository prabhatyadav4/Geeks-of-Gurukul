/*

PATTERN: 7

1      1
12    21
123  321
12344321

*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 1; i <= n; ++i) {
        // Print increasing numbers
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); ++j) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}