/*The program must accept a string S in lowercase characters. The program must print the 
characters from (a-m) in the first half and (n-z) in the second part*/

/*Example Input/Ouput 1:
Input : electronics
Output: elecictrons
*/
#include<stdio.h>
#include<string.h>

int main(){
    char S[100];
    scanf("%s",S);
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] >= 'a' && S[i] <= 'm'){
            printf("%c",S[i]);
        }
    }
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] >= 'n' && S[i] <= 'z'){
            printf("%c",S[i]);
        }
    }

}