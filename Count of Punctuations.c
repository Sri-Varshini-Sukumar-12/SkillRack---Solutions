/*
The program must accept a string S as the input. The program must print the
count of punctuations in S as the output.

Boundary conditions:
5 <= Length of String S <= 99

Example Input/Output 1:
Input:
Hello everyone, how are you?

Output:
2
*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    scanf("%[^\n]",str);
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if(ispunct(ch)){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}
