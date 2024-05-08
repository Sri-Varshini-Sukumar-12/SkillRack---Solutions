/*Given a string s, print only the characters which are surrounded by vowels on 
both sides. If there is no such character matching the condition, then the program
must print -1.

Boundary Conditions :
3 <= Length of String S <=1000

Input:
acceleration

Output:
lrt
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char S[1001];
    scanf("%s",S);
    int flag = 0;
    for(int i = 0; i < strlen(S)-1; i++){
        char a = S[i-1];
        char b = S[i+1];
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
                printf("%c",S[i]);
                flag = 1;
            }
        }
    }
    if(flag == 0){
        printf("-1");
    }
    return 0;
}
