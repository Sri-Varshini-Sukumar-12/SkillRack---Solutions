/*The program must accept N distinct integers as the input. The integers are partitioned 
such that all the integers in the first partition are in ascending order and all the 
integers in the second partition are in descending order. The program must print 
the last integer in the ascending order as the output.

Example Input/Output 1:
Input:
6
23 44 67 32 11 8

Output:
67

Example Input/Output2:
Input:
5
19 25 17 12 6

Output:
25
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[N-1]);
    return 0;
}
