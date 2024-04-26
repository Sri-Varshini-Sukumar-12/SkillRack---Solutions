/*The program must accept two string values S1 nd S2. The program must print
the pattern as shown in the input/output sections.

Boundary Conditions
1 <= Length of S1,S2 <= 100

Example Input/Output 1:
Input:
bad water

Output:
bw
aa
dt
*e
*r

Input2:
gionee kkr

Outpur:
gk
ik
or
n*
e*
e*

*/
#include<stdio.h>
#include<string.h>

int main() {
    char S1[101], S2[101];
    scanf("%s %s", S1, S2);
    int l1 = strlen(S1);
    int l2 = strlen(S2);
    char ch = '*';
    int len = (l1 > l2) ? l1 : l2;
    
    for (int i = 0; i < len; i++) {
        if (i < l1 && i < l2) {
            printf("%c%c\n", S1[i], S2[i]);
        } else if (i < l1) {
            printf("%c%c\n", S1[i], ch);
        } else if (i < l2) {
            printf("%c%c\n", ch, S2[i]);
        }
    }
    return 0;
}
