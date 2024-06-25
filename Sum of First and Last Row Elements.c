/*
An integer matrix of size N*N is given as input. The program must print the sum of first and
last row elements.

Boundary Conditions: 
2 <= N <= 100


Example Input/Output 1:
Input:
4
10 20 30 40
50 60 70 80
25 35 45 55
5  10 15 20

Output:
150

*/

#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int matrix[N][N],sum=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d ",&matrix[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i == 0){
                sum += matrix[0][j];
            }else if(i == N-1){
                sum += matrix[N-1][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}
