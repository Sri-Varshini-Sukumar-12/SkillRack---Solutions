/*
Next Number Palindrome
The program must input a palindromic number N from the user. Then the program 
must print the immediate palindromic number as the Output.

Boundary Conditions:
9 < N < 100000

Example Input/Output1:
Input:
909

Output:
919
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int digit,rev=0;
    for(int i=(N+1); i<=(N+100); i++){
        int num = i;
        rev = 0;
        while(num!=0){
            digit = num%10;
            rev = (rev*10) + digit;
            num/=10;
        }
        if(i == rev){
            printf("%d",rev);
            break;
        }
    }
    return 0;
}
