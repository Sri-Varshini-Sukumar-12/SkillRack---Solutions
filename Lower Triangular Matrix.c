/*The program must accept integer N as the input. The program must print the
lower triangular matrix in the format given below:

Example Input/Output:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
1
4 5
7 8 9
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int mat[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d ",&mat[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
