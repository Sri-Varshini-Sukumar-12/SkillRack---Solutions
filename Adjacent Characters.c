/*
The program must accept a string S and a character CH as the input. The program
must print the adjacent characters of all occurences of CH in S as the output.
The first and last characters have only one digit adjacent to them. So consider
only the single adjacent character for them. If CH does not occur in S, then
the program must print -1 as the output.

Boundary Conditions: 
1 <=  Length of S <= 100

Example Input/Output 1:
Input:
apple l

Output:
l

*/

#include<stdio.h>
#include<string.h>

int main(){
    char S[101],ch;
    int flag = 0;
    scanf("%s %c",S,&ch);
    int n = strlen(S);
    for(int i=0; S[i] != '\0'; i++){
        if(S[i] == ch){
            flag = 1;
            if(i == 0){
                printf("%c",S[i+1]);
            }else if(i == n-1){
                printf("%c",S[i-1]);
            }else{
                printf("%c%c",S[i-1],S[i+1]);
            }
        }
    }
    if(flag == 0){
        printf("-1");
    }
    return 0;
}
