/*
Given a natural number N, the program must print the sum of all its proper divisors.

Boundary Conditions: 
1<N<=100000

Example Input/Output 1:
Input:
2

Output:
1

Explanation:
1 is the only proper divisor of 2. Hence the sum is also 1.

Example Input/Output 2:
Input:
20

Output:
22
*/

#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int sum = 0;
    for(int i=1; i<N; i++){
        if(N%i == 0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}
