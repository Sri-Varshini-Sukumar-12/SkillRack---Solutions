/*A string S is passed as input. S will contain multiple integer values with each integer value followed by an
alphabet. The program must expand the alphabets based on the related integer value.

Example Input/Output1:
Input:
4a5h
Output:
aaaahhhhh

*/

#include<iostream>
using namespace std;

int main(){
    int N;
    char C;
    while(scanf("%d%c",&N,&C) > 0){
        for(int i = 0; i < N; i++){
            cout<<C<<"";
        }
    }
    return 0;
}
