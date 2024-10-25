import java.util.*;

public class CountryCapital {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        HashMap<String, String> hmp = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String[] arr = sc.nextLine().split(" ");
            hmp.put(arr[0], arr[1]);
        }
        String find = sc.nextLine();
        if (hmp.containsKey(find)) {
            System.out.println(hmp.get(find));
        } else {
            System.out.println("NONE");
        }
        sc.close();
    }
}
