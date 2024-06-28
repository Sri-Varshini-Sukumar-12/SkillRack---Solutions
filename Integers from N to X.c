/*
The program must accept a two integer N as the input. The program must calculate the 
difference between the two digits of N as D. The program must print the integers from N  to
X-1 (two digit integer with difference between itss digits equal to D) as the output.

NOTE: The value of X must be greater than N

Example Input/Output 1:
Input:
47

Output:
47 48 49 50 51
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int unit = N%10;
    int tenth = (N%100)/10;
    int diff = abs(unit-tenth);
    printf("%d ",N);
    for(int i=1; i<=100; i++){
        int num = N + 1;
        unit = num%10;
        tenth = (num%100)/10;
        int new_diff = abs(unit-tenth);
        if(diff != new_diff){
            printf("%d ",num);
        }else if(diff == new_diff){
            break;
        }
        N++;
    }
    return 0;
}
