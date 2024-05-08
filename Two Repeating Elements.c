/*The program must accept N integers as the input. The program must print
the two elements in the descending order which are repeated among the N inetgers.

Input:
7
5 5 4 3 4 4 3

Output:
5 4
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int track = 1,count = 1;
    for(int i=0; i<N; i++){
        count = 1;
        for(int j=i+1; j<N; j++){
            if(arr[i] == arr[j] && arr[i] != -1){
                count++;
                arr[j] = -1;
            }
        }
        if(count >= 2 && track <= 2){
            printf("%d ",arr[i]);
            track++;
        }
    }
    return 0;
}
