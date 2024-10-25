import java.util.*;

public class MostFuelEfficient {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        float count = 0;
        int i = 0, car = 0;
        while (i < n) {
            String[] s = sc.nextLine().split(" ");
            int n1 = Integer.parseInt(s[0]);
            int n2 = Integer.parseInt(s[1]);
            float res = n2 / n1;
            if (i == 0) {
                count = res;
                car = i + 1;
            } else {
                if (count < res) {
                    count = res;
                    car = i + 1;
                }
            }
            i++;
        }
        System.out.println(car);
        sc.close();
    }
}
