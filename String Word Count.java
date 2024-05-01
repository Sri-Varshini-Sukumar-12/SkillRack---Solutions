/*The program must accept a String S and print the count of words in S.
Boundary Conditions:
1 <= Length of S <= 1000

Example Input/Output 1:
Input:
I like tea
Output
3

Example Input/Output 1:
Input:
I like coffee very much
Output:
5
*/

import java.util.*;

public class String_Word_Count {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        int count = 1;
        int len = S.length();
        for (int i = 0; i < len; i++) {
            if (S.charAt(i) == ' ') {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
