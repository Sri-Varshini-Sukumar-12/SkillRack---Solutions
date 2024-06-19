/*A string is passed as the input to the program. Fill in the missing lines of code to
implement the function reverseSecondHalf() to reverse the second half of the string.

Boundary Conditions: 
1 <= Length of string <= 100

Example Input/Output 1:
Input:
hello

Output:
heoll

Example Input/Output 2:
Input:
banana

Output:
banana

*/

#include<stdio.h>
#include<string.h>

char reverseSecondHalf(char str[101]){
    char S[101];
    strcpy(S,str);
    int j=0,len=strlen(str);
    int half=len/2;
    for(int i=0; i<half; i++){
        str[j++] = S[i];
    }
    for(int i=(len-1); i>=half; i--){
        str[j++] = S[i];
    }
}

int main(){
    char str[101];
    scanf("%s",str);
    reverseSecondHalf(str);
    printf("%s",str);
    return 0;
}
