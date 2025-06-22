// Q: Sum of series upto N terms: 2, 22, 222, ...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms (N): ";
    cin >> n;

    long long term = 0, sum = 0;
    for (int i = 1; i <= n; ++i) {
        term = term * 10 + 2;
        sum += term;
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}