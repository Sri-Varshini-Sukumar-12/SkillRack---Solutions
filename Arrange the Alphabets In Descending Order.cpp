#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string S;
    cin>>S;
    int len = S.length();
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(S[i] == S[j]){
                S[j] = ' ';
            }
        }
    }
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(S[i] < S[j]){
                char temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    cout<<S<<endl;
    return 0;
}
