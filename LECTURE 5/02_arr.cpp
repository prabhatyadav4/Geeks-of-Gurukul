// Addition of Matrix
// Multiplication of Matrix

#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter the no. of rows and columns: ";
    cin >> m >> n;
    int A[m][n], B[m][n], C[m][n];

    cout << "Enter the elements of the A: ";
    for (int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++){
            cin >> A[m][n];
        }
    }
    cout << "Enter the elements of the B: ";
    for (int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++){
            cin >> B[m][n];
        }
    }

    // SUM OF MATRIX
    
    for (int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++){
           C[m][n] = A[m][n] + B[m][n]; 
        }
    }

    cout << "The sum of Matrices are: " << endl;

    for (int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++){
            cout << C[m][n] << " ";
        }
        cout << endl;
    }
}
