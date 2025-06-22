// Q: Find smallest n such that n! exceeds 1000

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(){
    int n = 1;
    while (factorial(n) <= 1000) {
        n++;
    }
    cout << "The smallest n such that n! exceeds 1000 is: " << n << endl;
    return 0;
}


/*  OR

n = 0;
fact = 1;
while(fact <= 1000){
n++;
fact = fact*n;
}

*/