import java.util.Scanner;

public class Codeforces {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int ans = 0, n, c = 0;
        n = scanner.nextInt();
        int[] a = new int[n + 9];
        
        for (int i = 1; i <= n; i++)
            a[i] = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            c = 0;
            int x = a[i];
            while (x != -1) {
                x = a[x];
                c++;
            }
            ans = Math.max(ans, c);
        }
        System.out.println(ans + 1);

        scanner.close();
    }
}
