/*The program must accpet two positive integers M and N with the same number of digits as the input.
The program must print the digit(s) of M interlaced with the digit(s) of N in the 
reverse order as the output.

Example Input/Output 1:
Input:
123 765
Output:
536271

Explanation:
After interlacing the digits of M and N, the number is 172635.
The reverse order of the number is 536271.
Hence 536271 is printed as the output.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int d1,d2;
    while(M != 0 && N != 0){
        d1 = M%10;
        d2 = N%10;
        printf("%d%d",d2,d1);
        M /= 10;
        N /= 10;
    }
    return 0;
}
