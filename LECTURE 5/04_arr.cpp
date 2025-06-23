#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout << "Enter the no. of rows and columns: ";
    cin >> m >> n;
    int A[m][n];

    cout << "Enter the elements of the A: ";
    for (int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++){
            cin >> A[m][n];
        }
    }

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i < j && A[i][j] == 0){
                cout << "It is lower triangular." << endl;
            }
            else if( i > j && A[i][j] == 0){
                cout << "It is upper trianglular." << endl;
            }
            else if( i != j && A[i][j] == 0){
                cout << "It is diagonal matrix." << endl;
                }
            else if( i == j && A[i][j] == 1){
                cout  << "It is identity matrix." << endl;
            }
        }
    }
}
