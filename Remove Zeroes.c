/*The program must accept an integer N as the input. The program must print 
the number after removing all the zeroes at the last.

Example Input/Output 1:
Input:
12500

Output
125
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    while(N%10 == 0){
        N /= 10;
    }
    printf("%d",N);
    return 0;
}
