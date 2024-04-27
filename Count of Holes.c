/*The program must accept an integer N as the input. The program must print 
the count of holes in the digits of N as the output.

The digits with 
no holes = 1,2,3,5,7
1 hole = 0,4,6,9
2 holes = 8

Example Input/Output 1:
Input:
541879

Output:
4
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int holes = 0,digit;
    while(N != 0){
        digit = N%10;
        if(digit == 1 || digit == 2 || digit == 3 || digit == 5){
            holes += 0;
        }else if(digit == 0 || digit == 4 || digit == 6 || digit == 9){
            holes += 1;
        }else if(digit == 8){
            holes += 2;
        }
        N/=10;
    }
    printf("%d",holes);
    return 0;
}
