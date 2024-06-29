/*
Alen and Tim both own a tennis court and they decide to mow the lawn in and around the court which
will cost them Rs.5 per feet. Given the amount they spent to mow the lawn and the width of the court,
find the difference between the length of the courts.

Example Input/Output 1:
Input:
100000 80000
100 80

Output:
0.00

Explanation:
Area of Alen's court = 100000 / 5 = 20000 sq.ft. Length = 20000/100 = 20
Area of Tim's court = 80000/5 = 16000 sq.ft. Length = 16000/80 = 200
Difference = 200-200 = 0.00
 */
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
		String[] a = s1.split(" ");
		String[] b = s2.split(" ");
		int[] amount = new int[a.length];
		int[] width = new int[b.length];
		int j=0,k=0;
		for(int i=0; i<a.length; i++) {
			amount[j++] = Integer.parseInt(a[i]);
		}
		for(int i=0; i<b.length; i++) {
			width[k++] = Integer.parseInt(b[i]);
		}
		int length1 = ((amount[0]/5)/width[0]);
		int length2 = ((amount[1]/5)/width[1]);
		
		float result = length2 - length1;
		System.out.printf("%.2f",Math.abs(result));
		sc.close();
	}
}
