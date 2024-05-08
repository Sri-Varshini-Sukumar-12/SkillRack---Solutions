/*A string S and two integers X and Y are given as input. The program must print
the string after removing the first X characters and last Y characters.

2 <= Length of String <= 1000

Example Input/Output:
Input:
marshmallow 2 3

Output:
rshmal
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char S[1001];
    int X,Y;
    scanf("%s %d %d",S,&X,&Y);
    int N = strlen(S);
    for(int i = X; i < N-Y; i++){
        printf("%c",S[i]);
    }
    return 0;
}
