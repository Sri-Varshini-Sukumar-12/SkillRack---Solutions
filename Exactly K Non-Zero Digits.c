/*
The program must accept integers X and Y. The program must print the integers
from X to Y having exactly K non-zero digits. If there is no such integer, the 
program must print -1 as the output.

Input:
100 200 2

Output:
101 102 103 104 105 106 107 108 109 110 120 130 140 150 160 170 180 190

Explanation:
The integers from 100 to 200 having exactly K non-zero digits are 101 102 
103 104 105 106 107 108 109 110 120 130 140 150 160 170 180 190.
Hence, it is printed as output.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int X,Y,K;
    scanf("%d %d %d",&X,&Y,&K);
    int rev=0,digit,count=0,flag=0;
    for(int i=X; i<=Y; i++){
        count = 0;
        rev = 0;
        int num = i;
        while(num != 0){
            digit = num%10;
            if(digit > 0){
                count++;
            }
            num /= 10;
        }
        if(count == K){
            printf("%d ",i);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("-1");
    }
    return 0;
}
