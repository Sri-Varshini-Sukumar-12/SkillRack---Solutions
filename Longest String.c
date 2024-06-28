/*
The program must accept two string values S1 and S2 as the input. The program
must print the longest string among the string values as the output. If both
the string values have the same length, then the program must print the first
string as the output.

Boundary Conditions:
1 <= Length of S1,S2 <= 1000

Example Input/Output 1:
Input:
green banana

Output:
banana

Example Input/Output 2:
Input:
Note Book

Output:
Note
*/

#include<stdio.h>
#include<string.h>

int main(){
    char S1[1001],S2[1001];
    scanf("%s %s",S1,S2);
    int len1 = strlen(S1);
    int len2 = strlen(S2);
    if(len1 > len2){
        printf("%s",S1);
    }else if(len2 > len1){
        printf("%s",S2);
    }else if(len1 == len2){
        printf("%s",S1);
    }
    return 0;
}
