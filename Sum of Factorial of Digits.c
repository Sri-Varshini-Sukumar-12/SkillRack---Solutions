/*The program must accept an integer N as the input. The program must print
the sum of the factorial of the digits N as the output.

Boundary Conditions:
10 <= N <= 10^7

Example Input/Output1:
Input:
147

Output:
5065

*/
#include<stdio.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    int digit,fact=1,sum=0;
    while(N!=0){
        fact = 1;
        digit = N%10;
        for(int i = 1; i <= digit; i++){
            fact *= i;
        }
        sum += fact;
        N /= 10;
    }
    printf("%d",sum);
    return 0;
}
