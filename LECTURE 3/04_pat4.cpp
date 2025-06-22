/*

PATTERN: 4

*********
 *******
  *****
   ***
    *

*/

#include <iostream> 
using namespace std;

int main(){
    for(int i=9;i>=1;i--){
        for(int j=1;j<=9-i;j++){
        cout<<"  ";
        }
        for(int k=1;k<=(2*i-1);k++){
        cout<<"* ";
        }
    cout<<endl;
}
}