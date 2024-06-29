/*
A string S is given as the input to the program. The program must convert all
the alphabets in S to uppercase if the count of the uppercase alphabets is greater
than the count of lowercase characters and print the string. If the count of
the lowercase alphabets is greater than the count of the uppercase characters then
the program must convert all the alphabets to lowercase alphabets and print the string.
If the count of uppercase and lowercase alphabets are equal then the program must
print the string without any midifications.

Boundary Conditions:
1 <= Length of String <= 1000

Example Input/Output 1:
Input:
dEmOcRAcY

Output:
DEMOCRACY
*/

#include<stdio.h>
#include<string.h>

int main(){
    char S[1001];
    scanf("%s",S);
    int upper=0,lower=0;
    for(int i=0; S[i] != '\0'; i++){
        char ch = S[i];
        if(isupper(ch)){
            upper++;
        }else if(islower(ch)){
            lower++;
        }
    }
    if(upper > lower){
        for(int i=0; S[i] != '\0'; i++){
            printf("%c",toupper(S[i]));
        }
    }else if(lower > upper){
        for(int i=0; S[i] != '\0'; i++){
            printf("%c",tolower(S[i]));
        }
    }else{
        printf("%s",S);
    }
    return 0;
}
