/*
Two String values of equal length are passed as input to the program. The program must print
the desired pattern as shown in the Example Input/Output sections.

Boundary Conditions:
1 <= Length of each string <= 1000

Example Input/Output 1:
Input:
min max

Output:
mxianm

Example Input/Output 2:
Input:
good real

Output:
gloaoedr
*/


#include<stdio.h>
#include<string.h>

int main(){
    char S[1001];
    char S1[1001];
    scanf("%s %s",S,S1);
    int n = strlen(S);
    for(int i=0; i<n; i++){
        printf("%c%c",S[i],S1[n-i-1]);
    }
    return 0;
}
