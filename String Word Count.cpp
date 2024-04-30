/*The program must accept a String S and print the count of words in S.
Boundary Conditions:
1 <= Length of S <= 1000

Example Input/Output 1:
Input:
I like tea
Output
3

Example Input/Output 1:
Input:
I like coffee very much
Output:
5
*/

#include<iostream>
using namespace std;

int main(){
    string S;
    getline(cin,S);
    int len = S.length();
    int count = 1;
    for(int i = 0; i < len; i++){
        if(S.at(i) == ' '){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
