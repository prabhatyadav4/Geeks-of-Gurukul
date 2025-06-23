/*Q1: Take n elements as the input of an Aay.
        a. absolute sum of all elements of A
        b. Copy the positive elements to Aay B and negative elements to Aay C
        c. Pairwise swapping in A: A[0] = A[1], A[1] = A[3]
*/

#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cout << "Enter the no. of elements: ";
//     cin >> n;
//     int A[n];

//     cout << "Enter the elements of the Aay: ";
//     for(int i = 0; i<n; i++){
//         cin >> A[i];
//     }
//     
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += abs(A[i]);
//     }
//     cout << "The absolute sum of the elements are: " << sum << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter the no. of elements: ";
//     cin >> n;
//     int A[n], B[n], C[n];

//     cout << "Enter the elements of the A: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
//     for(int i = 0; i < n; i++){
//         if(A[i] >= 0){
//             B[i] = A[i];
//         }
//         else{
//             C[i] = A[i];
//         }
//     }
//     for(int i = 0; i < n; i++){
//         cout << A[i];
//     }
//     cout << endl;
//     for(int i = 0; i < n; i++){
//         cout << B[i];
//     }
//     cout << endl;
//     for(int i = 0; i < n; i++){
//         cout << C[i];
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the no. of elements: ";
//     cin >> n;
//     int A[n], B[n], C[n];

//     cout << "Enter the elements of the A: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
//     for(int i = 0; i < n-2; i = i+2){
//         swap(A[i], A[i+1]);
//     }
//     cout << "The swapped Array is: " << endl;
//     for(int i = 0; i < n; i++){
//         cout << A[i] << " ";
//     }
// }