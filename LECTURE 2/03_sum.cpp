// Q: Find the sum of digits of a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int num = 0;
    for (int i = n; i > 0; i = i/10){
        num += i%10;
    }
    cout << "The sum of digits is: " << num << endl;
    return 0;
}