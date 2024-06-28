/*
Define the function getDigitXCount which accepts an integer N and a digit X as the input.
The function must return the count of the digit X in the integer N.
*/

#include<stdio.h>
#include<stdlib.h>

int getDigitXCount(int N,int X){
    int digit,count=0;
    while(N!=0){
        digit = N%10;
        if(X == digit){
            count++;
        }
    }
    return count;
}

int main(){
    int N,X;
    scanf("%d %d",&N,&X);
    printf("%d",getDigitXCount(N,X));
}
