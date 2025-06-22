// Q: Given an integer N, return the number of digits in N.

#include <iostream>
using namespace std;

int main(){
    int n, i;
    int ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    for(i = n; i > 0; i = i/10){
        ans++;
    }
    cout << ans;
    return 0;
}