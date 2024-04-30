/*A String S is passed as the input. S has at least one repeating character
. The program must print the first repeating character from the last.

Boundary Conditions:
Length of S will be from 3 to 100

Example Input/Output 1:
Input:
abcdexyzbwqpooplj
Output:
p
*/

#include<iostream>
using namespace std;

int main(){
    string S;
    getline(cin,S);
    int len = S.length();
    int flag = 0;
    for(int i = len - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(S.at(i) == S.at(j)){
                cout<<S.at(i)<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
}
