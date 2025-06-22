// Q: Compute GCD of two numbers

#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    while(y !=0){
        x = y;
        y = x % y;
    }
    cout << "The GCD of the given number is: "<< x << endl;
    return 0;
}
