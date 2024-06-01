/*
Input:
4
9 8 6 3
5 2 7 5
8 9 1 2
4 6 3 5
Output:
9 * * *
5 2 * *
8 9 1 *
4 6 3 5
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    printf("Enter the limit of N: ");
    scanf("%d",&N);
    int arr[N][N];
    printf("\nEnter the elements of the matrix: ");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i < j){
                printf("* ");
            }else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}
