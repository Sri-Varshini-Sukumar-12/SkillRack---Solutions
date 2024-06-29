/*
A string S which represents the time in 24 hour format HH:MM is taken as the input. The program 
must find if it is AM or PM and print it as the output. If an invalid time is passed as the input,
the program must print INVALIDINPUT as the output.

Sample Input/Output 1:

Example 1:
Input:
13:44

Output:
PM
 */
import java.util.Scanner;

public class Find_AM_PM {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String S = sc.nextLine();
		String[] arr = S.split(":");
		int HH = Integer.parseInt(arr[0]);
		int MM = Integer.parseInt(arr[1]);
		if((HH >= 12 && HH <= 23) && (MM >= 0 && MM <= 59)) {
			System.out.println("PM");
		}else if(HH < 12 && MM >= 0) {
			System.out.println("AM");
		}else {
			System.out.println("INVALIDINPUT");
		}
		sc.close();
	}
}
