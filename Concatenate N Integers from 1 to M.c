/* The program must accept two integers M and N (M>N) as the input.The program must 
concatenate every N Integers and print the concatenated integers from 1 to M
as shown in the Example Input/Output section as the output.

Example Input/Output 1:
Input:
5 2

Output:
12 34 5

Example Input/Output 2:
Input:
12 3

Output:
123 456 789 101112
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int num = 1,flag = 0;
    for(int i=0;  i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d",num);
            num++;
            if(num > m){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }else{
            printf(" ");
        }
    }
    return 0;
}
