// Q: Computing ex series up to N terms ( 1 + x + (x^2 / 2!) + (x^3 / 3!) + ...)

/*
Hints:
1. The ex series is: 1 + x + (x^2)/2! + (x^3)/3! + ... + (x^N)/N!
2. You need to take input for x (the value) and N (number of terms).
3. Use a loop to calculate each term and add it to a sum.
4. Each term can be calculated using the previous term: term_n = term_{n-1} * x / n.
5. Initialize sum = 1 (for the first term), and term = 1.
6. For each iteration from 1 to N, update term and add to sum.
7. Output the final sum as the result.
*/

#include <iostream>
using namespace std;

int main(){
    int x, N;
    cout << "Enter the value: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> N;
    int term = 1, sum = 0;
    for( int i = 1; i < N; i++){
        term = (term*x) / i;
        sum += term;
    }
    cout << "The required sum is: " << sum;
    return 0;
}