/*
The program must accept a string S as the input. The program must print the odd position
characters one time and even position characters two times as the output.

Boundary Conditions:
5 <= Length of String S <= 99

Example Input/Output 1:
Input:
hello

Output:
heelllo
*/

#include<stdio.h>
#include<string.h>

int main(){
    char S[101];
    scanf("%s",S);
    int n = strlen(S);
    for(int i=0; i<=n-1; i++){
        if((i+1)%2 != 0){
            printf("%c",S[i]);
        }else if((i+1)%2 == 0){
            printf("%c%c",S[i],S[i]);
        }
    }
    return 0;
}
