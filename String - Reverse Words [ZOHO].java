
/*
String - Reverse Words [ZOHO]
A string S is passed as an input. The program must reverse the order of the words
in the string and print them as the output. 

Boundary Conditions:
Length of S is from 5 to 100.
Example Input/Output 1:
Input:
Today is Friday

Output:
Friday is Today
 */
import java.util.Scanner;
public class String_Reverse_Words {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String[] array = str.split(" ");
		for(int i=array.length-1; i>-1; i--) {
			System.out.print(array[i]+" ");
		}
		sc.close();
	}
}
