// https://leetcode.com/Problem42(Trapping Rain Water)

/*
    Q: Check whether the matrix is Diagonal, Upper Triangular, Lower Triangular or Identity Matrix. 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout << "Enter the no. of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    
    for(int i = 1; i <= m; i++){
        cout << "Enter the elements of the "<< i <<" matrix: ";
        for(int i = 1; i <= n; i++){
            cin >> arr[m][n];
        }
    }
    cout << "The elements of the matrix are: " << endl;
    for(int i = 0; i < m; i++){
        for(int i = 0; i < n; i++){
            cout << arr[m][n] <<" ";
        }
        cout << endl;
    }
}
