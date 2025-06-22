// Q: Find the sum of first N natural numbers.

#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the length of sum: ";
    cin >> n; 
    for (int i = 1; i < n; i++){
        i += 1; 
        cout << i;
    }
    return 0; 
}