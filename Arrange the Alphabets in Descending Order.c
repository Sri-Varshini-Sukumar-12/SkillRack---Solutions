#include<stdio.h>
#include<string.h>

int main(){
    char S[51];
    scanf("%s",S);
    int len = strlen(S);
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
    printf("%s",S);
    return 0;
}
