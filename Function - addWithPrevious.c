/*Daily Challenge

You must implement the function addWithPrevious(int arr[],int N) which accepts an
integer array arr and its size N as the input.The function must modify the 
integer array arr by replacing each integer X by adding with its previous integer.
The first Integer in the array has no integers on its left side, so it remains the same

Input:
5
10 20 30 40 50

Output:
Array:10 30 50 70 90
*/

#include<stdio.h>
#include<stdlib.h>

void addWithPrevious(int arr[],int N){
    for(int i=N-1; i>0; i--){
        arr[i] = arr[i] + arr[i-1];
    }
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int index=0; index<N; index++){
        scanf("%d ",&arr[index]);
    }
    addWithPrevious(arr,N);
    printf("Array: ");
    for(int index=0; index<N; index++){
        printf("%d ",arr[index]);
    }
    return 0;
}
