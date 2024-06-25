/*
The program must accept N lowercase alphabets as the input. The program must print the
next alphabet of each alphabet as the input.

NOTE: If the alphabet is 'z', then consider 'a' as the next alphabet.
Example Input/Output 1:
Input:
3
a b c

Output:
b c d

Example Input/Output 2:
Input:
5
x y z a b

Output:
y z a b c
*/

#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    char arr[N];
    for(int i=0; i<N; i++){
        scanf(" %c",&arr[i]);
    }
    for(int i=0; i<N; i++){
        char ch = arr[i];
        if(ch == 'z'){
            printf("a ");
        }else{
            printf("%c ",(ch+1));
        }
    }
    return 0;
}
